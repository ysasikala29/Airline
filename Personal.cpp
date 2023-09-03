#include "Personal.h"
#include <string.h>
#include<iostream>
using namespace std;

namespace example{

    void personal::setname(string name_){this->name =name_;}
    string personal::getname(){ return this->name;}
    void personal::setpassword(string password_){this->password =password_;}
    string personal::getpassword(){ return this->password;}
    
    void personal::pay_detail(){//function declaration and definition for payment method
        int choice1; 
        int n;
        char c;
        string sa[4]={"West Pac Bank","Nabil Bank","Standard Chartered Bank","AMP Bank"};
        system("cls");
        cout<<"\t\t\t** PAYMENT  **"<<endl;
        cout<<endl;
        cout<<"\t\t\tHow would you like to pay ?:"<<endl;
        cout<<"\t\t\t1.Debit Card "<<endl; 
        cout<<"\t\t\t2.Credit Card"<<endl; 
        cout<<"\t\t\t3.Net Banking"<<endl;
        cout<<endl;
        cout<<"\t\t\tEnter your choice :";
        cin>>choice1;
        switch(choice1)//switch case
        {
        case 1://condition
            cout<<"\t\t\tEnter card no     :";
            cin>>card;
            cout<<"\t\t\tEnter expiry date :";
            cin>>date;
            cout<<"\t\t\tEnter CVV no      :";
            cin>>cvv;
            cout<<"\t\t\tTransaction Successful"<<endl;
            break;
        case 2://condition
            cout<<"\t\t\tEnter card no.    :";
            cin>>card;
            cout<<"\t\t\tEnter expiry date :";
            cin>>date;
            cout<<"\t\t\tEnter password    :";
            cin>>password;
            cout<<"\t\t\tTransaction Successful"<<endl;
            break;
        case 3://condition
            cout<<"\t\t\tBanks Available:"<<endl; 
            cout<<"\t\t\t           1.West Pac Bank            2.Nabil Bank "<<endl;
            cout<<"\t\t\t           3.Standard Chartered Bank  4.AMP Bank"<<endl;
            cout<<"\t\t\tSelect your bank  :";
            cin>>n;
            cout<<"\t\t\tYou have selected :"<<sa[n-1]<<endl;
            cout<<"\t\t\tEnter user id     :";
            cin>>user_id;
            cout<<"\t\t\tEnter password    :";
            cin>>b_password;
            cout<<"\t\t\tTransaction Successful"<<endl;
            break;
        default://condition
            cout<<"\t\t\tWrong Input Entered"<<endl;
            cout<<"\t\t\tTry again";
            break;
            return pay_detail();
        }
        cout<<endl;
        cout<<"\t\t\tPress 0 to continue.. :             ";
        cin>>c;

    }
}