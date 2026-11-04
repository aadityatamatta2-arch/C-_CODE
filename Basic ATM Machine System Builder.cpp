/* Basic ATM Machine System Builder....*/
#include<iostream>
#include<iomanip>
using namespace std;

double balance = 5000;

void diplayMenu(){
    cout<<"=========================================="<<endl;
    cout<<"           ATM MACHINE SYSTEM             "<<endl;
    cout<<"=========================================="<<endl;
    cout<<"1. Check Balance."<<endl;
    cout<<"2. Deposite Money."<<endl;
    cout<<"3. Withdrawal Money."<<endl;
    cout<<"4. Exit."<<endl;
    cout<<endl;
}

void checkBalance(){
    cout<<"Your available balance is: Rs."<<fixed<<setprecision(2)<<balance<<endl;
}

void deposite(){
    double amount;
    cout<<"Enter amount: Rs.";
    cin>>amount;

    if(amount <= 0){
        cout<<"Amount must be greater than 0."<<endl;
        cout<<endl;
    }
    else{
        balance = balance + amount;
        cout<<"Amount Deposited successfully!"<<endl;
        checkBalance();
    }
}

void withdrawal(){
    double amount;
    cout<<"Enter amount: Rs.";
    cin>>amount;

    if(amount <= 0){
        cout<<"Amount must be greater than 0."<<endl;
        cout<<endl;
    }
    else if(amount > balance){
        cout<<"Insufficient Balance!"<<endl;
        cout<<endl;
    }
    else{
        balance = balance - amount;
        cout<<"Amount Withdarawal successfully!"<<endl;
        checkBalance();
        cout<<endl;
    }
}

int main(){
    diplayMenu();
    int choice;
    do{
        cout<<"Enter your choice: ";
        cin>>choice;
        
        if(choice == 1){
            checkBalance();
            cout<<endl;
        }
        else if(choice == 2){
            deposite();
            cout<<endl;
        }
        else if(choice == 3){
            withdrawal();
            cout<<endl;
        }
        else if(choice == 4){
            cout<<"Thank You for using this ATM!"<<endl;
        }
        else{
            cout<<"Invalid choice!"<<endl<<endl;
        }

    }while(choice != 4);
    
    return 0;
}

