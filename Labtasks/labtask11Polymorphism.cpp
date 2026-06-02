// #include<iostream>
// using namespace std;
// class PaymentSystem
// {
//     protected:
//     double amount;
//     double service;
//     double totalamount;
//     public:
//     PaymentSystem()
//     {
//     cout<<"Enter your amount : ";
//     cin>>amount;
//     }
//     virtual void pay()=0;
//     virtual void refund()=0;
//     virtual ~PaymentSystem()
//     {}
// };
// class Easypaisa:public PaymentSystem
// {
//     public:
//     void pay()
//     {
//         service=0.02*amount;
//         totalamount=amount-service;
//     }
//     void refund()
//     {
//         cout<<"EasyPaisa Record"<<endl;
//         cout<<"Amount : "<<amount<<endl;
//         cout<<"Service : "<<service<<endl;
//         cout<<"Total Amount : "<<totalamount<<endl;
//     }
// };
// class Jazzcash:public PaymentSystem
// {
//     public:
//     void pay()
//     {
//         service=0.05*amount;
//         totalamount=amount-service;
//     }
//     void refund()
//     {
//         cout<<"JazzCash Record"<<endl;
//         cout<<"Amount : "<<amount<<endl;
//         cout<<"Service : "<<service<<endl;
//         cout<<"Total Amount : "<<totalamount<<endl;
//     }
// };
// int main()
// {
//     PaymentSystem *ptr[2];
//     ptr[0]=new Jazzcash;
//     ptr[1]=new Easypaisa;
//     ptr[0]->pay();
//     ptr[1]->pay();
//     ptr[0]->refund();
//     ptr[1]->refund();
//     return 0;
// }








































// #include<iostream>
// using namespace std;
// // Abstract Base Class
// class FeeSystem
// {
// protected:
//     double feeAmount;      // Original fee submitted by student
//     double charges;        // Extra charges or deductions
//     double totalPaid;      // Final amount after charges
// public:
//     // Function to take fee input from user
//     void inputFee()
//     {
//         cout << "Enter Fee Amount: ";
//         cin >> feeAmount;
//     }
//     // Pure Virtual Functions
//     virtual void submitFee() = 0;
//     virtual void returnFee() = 0;
//     // Virtual Destructor
//     virtual ~FeeSystem() {}
// };
// // Derived Class : BankTransfer
// class BankTransfer : public FeeSystem
// {
// public:
//     // Function for fee submission
//     void submitFee()
//     {
//         // Fixed deduction of Rs.100
//         charges = 100;
//         // Final paid amount after deduction
//         totalPaid = feeAmount - charges;
//         cout << endl;
//         cout << "========== Bank Transfer Receipt ==========" << endl;
//         cout << "Submitted Fee        : Rs." << feeAmount << endl;
//         cout << "Transaction Fee      : Rs." << charges << endl;
//         cout << "Total Paid           : Rs." << totalPaid << endl;
//     }
//     // Function for fee refund
//     void returnFee()
//     {
//         // Refund amount after deduction
//         double refundAmount = feeAmount - charges;
//         cout << endl;
//         cout << "---------- Bank Transfer Refund ----------" << endl;
//         cout << "Original Fee         : Rs." << feeAmount << endl;
//         cout << "Deducted Charges     : Rs." << charges << endl;
//         cout << "Refund Amount        : Rs." << refundAmount << endl;
//     }
// };
// // Derived Class : CreditCard
// class CreditCard : public FeeSystem
// {
// public:
//     // Function for fee submission
//     void submitFee()
//     {
//         // 3% processing charge
//         charges = feeAmount * 0.03;
//         // Final amount after adding charges
//         totalPaid = feeAmount + charges;
//         cout << endl;
//         cout << "========== Credit Card Receipt ==========" << endl;
//         cout << "Submitted Fee        : Rs." << feeAmount << endl;
//         cout << "Processing Charges   : Rs." << charges << endl;
//         cout << "Total Paid           : Rs." << totalPaid << endl;
//     }
//     // Function for fee refund
//     void returnFee()
//     {
//         // Refund after deducting processing charges
//         double refundAmount = feeAmount - charges;
//         cout << endl;
//         cout << "---------- Credit Card Refund ----------" << endl;
//         cout << "Original Fee         : Rs." << feeAmount << endl;
//         cout << "Processing Charges   : Rs." << charges << endl;
//         cout << "Refund Amount        : Rs." << refundAmount << endl;
//     }
// };
// int main()
// {
//     // Base class pointer
//     FeeSystem *ptr;
//     // Objects of derived classes
//     BankTransfer bt;
//     CreditCard cc;
//     // ================= Student 1 =================
//     cout << "=========================================" << endl;
//     cout << "   Student 1 - Bank Transfer Payment" << endl;
//     cout << "=========================================" << endl;
//     // Pointer points to BankTransfer object
//     ptr = &bt;
//     // Runtime Polymorphism
//     ptr->inputFee();
//     ptr->submitFee();
//     ptr->returnFee();
//     cout << endl;
//     cout << endl;
//     // ================= Student 2 =================
//     cout << "=========================================" << endl;
//     cout << "    Student 2 - Credit Card Payment" << endl;
//     cout << "=========================================" << endl;
//     // Pointer now points to CreditCard object
//     ptr = &cc;
//     // Runtime Polymorphism
//     ptr->inputFee();
//     ptr->submitFee();
//     ptr->returnFee();
//     return 0;
// }



