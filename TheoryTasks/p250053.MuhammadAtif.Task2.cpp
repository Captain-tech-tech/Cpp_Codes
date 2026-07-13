#include<iostream>
using namespace std;

// **************************************************************** //

class EidMela
{
    // private static and non-static data members
    private:
    static int totalmelasheld;
    static int totalStallAcrossallMelas;
    string melaName;
    string location;
    int totalStalls;
    double entryFee;
    bool isOpen;
    // public access specifier
    public:
    // default constructor
    EidMela():melaName("Unnamed Mela"),location("TBD"),totalStalls(0),entryFee(0),isOpen(true)
    {
        totalmelasheld++;
    }
    // parametarize constructor
    EidMela(string m,string l,int t,double e,bool i)
    {
        melaName=m;
        location=l;
        totalStalls=t;
        entryFee=e;
        isOpen=i;
        totalStallAcrossallMelas+=totalStalls;
        totalmelasheld++;
    }
    // member function for displaying all data
    void get_data()
    {
        cout<<"Name of Mela : "<<melaName<<endl;
        cout<<"Location of Mela : "<<location<<endl;
        cout<<"Total number of stalls : "<<totalStalls<<endl;
        cout<<"Enter fee : "<<entryFee<<endl;
        cout<<"Total number of stalls : "<<totalStalls<<endl;
    }
    // getter function for taking total number of melas
    static int totalMelaHeld()
    {
        return totalmelasheld;
    }
    // member function for getting total number of stall in all melas
    static int getTotalStallAcrossallMelas()
    {
        return totalStallAcrossallMelas;
    }
    // destructor
    ~EidMela()  
    {
        isOpen=false;
        cout<<"Mela has been Closed"<<endl;
        cout<<"++++Al-Noor Grand Eid Mela has ended+++++"<<"~~~`Khuda Hafiz!`~~~"<<endl;
    }
};
int EidMela::totalmelasheld=0;
int EidMela::totalStallAcrossallMelas=0;


// ******************************************************************** //


class SweetStall
{
    private:
    static int totalSweetStalls;
    static double totalRevenueAllstalls;
    string stallName;
    int stallID;
    static int counter; // shared among all objects for assigning it value to stallID and then incrementing
    string *sweetItems; // for dynamically allocating array of sweet items names
    int itemCount;
    int maxItems;
    double pricePerKg;
    double totalKgSold;
    // public 
    public:
    // default constructor
    SweetStall()
    {
        stallName="Unknown Stall";
        stallID=counter++;
        maxItems=3;
        sweetItems=new string[maxItems]{};
        pricePerKg=0.0;
        totalKgSold=0.0;
        totalSweetStalls++;
    }
    // parametarize constructor
    SweetStall(string s,int m,double ppk,string* ss)
    {
        stallName=s;
        maxItems=m;
        pricePerKg=ppk;
        stallID=counter++; 
        sweetItems=new string[m];
        for(int i=0;i<m;i++)
        {
            sweetItems[i]=ss[i];
        }
        totalSweetStalls++;
    }
    // copy constructor
    SweetStall(const SweetStall &object)
    {
        sweetItems=new string[object.maxItems];
        for(int i=0;i<object.maxItems;i++)
        {
            sweetItems[i]=object.sweetItems[i];
        } 
        stallID=counter++;
        totalSweetStalls++;    
    }
    // function for displaying sweet stall id
    void display_id()
    {
        cout<<stallID<<endl;
    }
    static int getTotalSweetStalls()
    {
        return totalSweetStalls;
    }
    // destructor
    ~SweetStall()
    {
        delete[] sweetItems; // freeing memory
        totalSweetStalls--;
        cout<<"Stall Closed!"<<endl;
        cout<<stallName<<" (ID) : "<<stallID<<" has packed up"<<endl;
        cout<<"W.salam"<<endl;
    }
};
int SweetStall::counter=101;
int SweetStall::totalSweetStalls=0;


// *************************************************************** //


class Visitor
{
    private:
    static int totalVisitors;
    static int totalEidiDistributed;
    string name;
    static int v_id;
    int visitorID;
    int age;
    double eidiRecieved;
    double budget;
    string *purchasedItems;
    int purchaseCount;
    int maxPurchases;
    // public 
    public:
    // default constructor
    Visitor()
    {
        name="Guest";
        visitorID=v_id++;
        age=0;
        eidiRecieved=0;
        budget=500;
        maxPurchases=5;
        purchasedItems=new string[maxPurchases]{};
        totalVisitors++;
    }
    Visitor(string n,int a,double b,int m,string *p)
    {
        name=n;
        age=a;
        budget=b;
        maxPurchases=m;
        purchasedItems=new string[maxPurchases];
        for(int i=0;i<m;i++)
        {
            purchasedItems[i]=p[i];
        }
        visitorID=v_id++;
        totalVisitors++;
    }
    Visitor(const Visitor &obj)
    {
        purchasedItems=new string[obj.maxPurchases];
        for(int i=0;i<obj.maxPurchases;i++)
        {
            purchasedItems[i]=obj.purchasedItems[i];
        }
        visitorID=v_id++;
        totalVisitors++;
    }
    void eidi_updates(double num1,double num2)
    {
        eidiRecieved=num1;
        budget=num2;
        totalEidiDistributed+=eidiRecieved;
    }
    // for printing total number of visitors
    static int getTotalVisitors()
    {
        return totalVisitors;
    }
    // member function for overall eidi distributed
    static int getTotalEidiDistributed()
    {
        return totalEidiDistributed;
    }
    ~Visitor()
    {
        delete[] purchasedItems;
        totalVisitors--;
        cout<<"Visitor left"<<endl;
        cout<<name<<" has left the mela"<<endl<<"Eid mubarak"<<endl;
    }
};
int Visitor::v_id=5001;
int Visitor::totalVisitors=0;
int Visitor::totalEidiDistributed=0;
 

// ***************************************************************** //


int main()
{
    EidMela mela1;
    EidMela mela2("Sardaryaab Mela","Charsadda",10,302,true);
    cout<<"Total Melas held : "<<EidMela::totalMelaHeld()<<endl;
    mela1.get_data();
    mela2.get_data();

    // --------------------------------------------------- //
    
    SweetStall s1; // enter default values
    string arr1[3]; // arr1 for s2 SweetStall
    cout<<"Enter 3 sweet items names for sweet mela"<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<"Enter ("<<i+1<<") item name : ";
        getline(cin>>ws,arr1[i]);
    }
    SweetStall s2("Salman Bakers",3,1320,arr1);
    string arr2[4];
    cout<<"Enter 4 sweet items names for another sweet mela"<<endl;
    for(int i=0;i<4;i++)
    {
        cout<<"Enter ("<<i+1<<") item name : ";    
        getline(cin>>ws,arr2[i]);    
    }
    SweetStall s3("Azaad Chaiwala",4,1290,arr2);
    SweetStall s4=s3;  // for deep copy test
    cout<<"The stall ID of s3 objects : ";s3.display_id();
    cout<<"The stall ID of s4 objects : ";s4.display_id();

    // sample purchased items
    string items1[3] = {"jalebi", "barfi", "ladoo"};
    string items2[2] = {"cake", "pastry"};

    // --------------------------------------------------- //

    // default constructor
    Visitor v1;
    v1.eidi_updates(2450, 8314);
    // default constructor
    Visitor v2;
    v2.eidi_updates(3044, 31450);
    // parameterized constructor
    Visitor v3("Ali", 20, 23450, 3, items1);
    v3.eidi_updates(4340, 19543);
    // parameterized constructor
    Visitor v4("Sara", 18, 10450, 2, items2);
    v4.eidi_updates(33445, 15645);
    // for deep copy test
    Visitor v5 = v3;   // here copy constructor is called
    // copy is modified here
    v5.eidi_updates(9546, 53401);
   
    // --------------------------------------------------- //

    // Bbefore entering to block
    cout << "Before block:" << endl;
    cout << "Total Sweet Stalls: " << SweetStall::getTotalSweetStalls() << endl;
    cout << "Total Visitors: " << Visitor::getTotalVisitors() << endl;
    {
    // nested scope started here
    SweetStall s5;
    string arr3[2]={"Donut", "Brownie"};
    Visitor v6("Ahmed",22,12000,2,arr3);
    v6.eidi_updates(2000,14000);
    cout<<"Inside block :"<<endl;
    cout <<"Total Sweet Stalls : "<<SweetStall::getTotalSweetStalls()<<endl;
    cout<<"Total Visitors : "<< Visitor::getTotalVisitors()<<endl;
    }
    // nested scope ended here and also destructors are called here
    // after block
    cout<<"After block : "<<endl;
    cout<<"Total Sweet Stalls : "<<SweetStall::getTotalSweetStalls()<<endl;
    cout<<"Total Visitors : "<<Visitor::getTotalVisitors()<<endl;

     // --------------------------------------------------- //

    cout<<endl<<"=====+Final City Wide Statistics+======"<<endl;
    cout<<"Total Melas held : "<<EidMela::totalMelaHeld()<<endl;
    cout<<"Total Stalls across all Melas : "<<EidMela::getTotalStallAcrossallMelas()<<endl;
    cout<<"Total Visitors : "<<Visitor::getTotalVisitors()<<endl;
    cout<<"Total Eidi Distributed : "<<Visitor::getTotalEidiDistributed()<<endl;

    return 0;
}

// ++++++++++++++++++++++ Code ended ++++++++++++++++++++++++ //




