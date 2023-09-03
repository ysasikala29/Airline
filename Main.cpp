#include<iostream>
#include<string>
#include "Domestic.h"
#include "International.h"
#include "Personal.h"
#include<fstream>
using namespace std;
using example::domestic;
using example::international;



int main(){
    domestic d;
    international i;
    
    int n,a;
    system("cls");
    
    cout << "\t\t\t-----------------------------" << endl;
    cout << "\t\t\t| AIRLINE RESERVATION SYSTEM |" << endl;
    cout << "\t\t\t-----------------------------" << endl;
    cout << "\t\t\t 1. Book flight" << endl;
    cout << "\t\t\t 2. Edit Journey Details" << endl;
    cout << "\t\t\t 3. Cancel flight" << endl;
    cout << "\t\t\t 4. view Ticket Details" << endl;
    cout << "\t\t\t 5. search flights " << endl;
    cout << "\t\t\t 6. Exit" << endl;
    cout<<endl;
    cout << "Enter Your Choice: ";
    cin>>n;
    if(n==6){exit(0);};
    system("cls");
    cout<<"\t\t\t1.Domestic"<<endl;
    cout<<"\t\t\t2.Intenational"<<endl;
    cout<<endl;
    cout<<"\t\t\tchoose:";
    cin>>a;
    system("cls");
    
        
    switch (n){
        case 1:

            if(a==1){

                d.bookflight();
                d.pay_detail();
                
            }else{

                i.bookflighti();
                i.pay_detail();
            }
            
            main();

        case 2:

            if(a==1){
                d.change();
            }else{
                i.changei();

            }
            main();

        case 3:

            if(a==1){
                d.cancel();
            }else{
                i.canceli();

            }
            main();

        case 4:
            
            if(a==1){
                d.disticketd();
            }else{
                i.disticketi();
            }
            main();

        case 5:

            if(a==1){

                d.searchflight();
                
            }else{
                
                i.searchflighti();
            }
            main();
            break; 

        default:
            main();
    }   
}