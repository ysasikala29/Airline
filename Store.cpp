#include<iostream>
#include <fstream>
#include <string>
//#include "process.h"
#include "Domestic.h"
#include "Store.h"

using namespace std;

namespace example{


    void store::storedata(domestic d){
        fstream file;
        
            file.open("domes.txt", ios::app | ios::out);
            file<<" "<<d.getname()<<" "<<d.getdfrom()<<" "<<d.getdto()<<" "<<d.getddate()<<" "<<d.getdtime1()<<" "<<d.getdtime2()<<" "<<d.getdflightname()<<" "<<d.getdflightno()<<" "<<d.getdclass()<<" "<<d.getdseat()<<" "<<d.getdamount()<<" "<<d.getpassword()<<"\n";
        
        file.close();
    }
    void store::storedatai(international i){
        fstream file;
        
            file.open("inter.txt", ios::app | ios::out);
            file<<" "<<i.getname()<<" "<<i.getifrom()<<" "<<i.getito()<<" "<<i.getidate()<<" "<<i.getitime1()<<" "<<i.getitime2()<<" "<<i.getiflightname()<<" "<<i.getiflightno()<<" "<<i.geticlass()<<" "<<i.getiseat()<<" "<<i.getiamount()<<" "<<i.getpassword()<<"\n";
          
        file.close();

    }

    
    void store::searchdata(int x,string s,string pass){                
        string a,b,c,d,e,f,g,h,i,j,p;
        char o;
        int l;
        system("cls");
        fstream file;
        int found = 0;
        if(x==1){
            file.open("domes.txt", ios::in);
        }
        else{
            file.open("inter.txt", ios::in);
        }
        if (!file){
            cout<<"\t\t\t Data Not Found";
        }
        else{
            file >>a>>b>>c>>d>>e>>f>>g>>h>>i>>j>>l>>p;

            while (!file.eof()){
                if (a == s){
                    if(p==pass){
                    cout<<"\t\t\tDeparture      :"<<b<<endl;
                    cout<<"\t\t\tArrival        :"<<c<<endl;
                    cout<<"\t\t\tDeparture date :"<<d<<endl;
                    cout<<"\t\t\tArrival date   :"<<d<<endl;
                    cout<<"\t\t\tDeparture time :"<<e<<endl;
                    cout<<"\t\t\tArrival time   :"<<f<<endl;
                    cout<<"\t\t\tFlight Name    :"<<g<<endl;
                    cout<<"\t\t\tFlight Number  :"<<h<<endl;
                    cout<<"\t\t\tclass          :"<<i<<endl;
                    cout<<"\t\t\tSeat Number    :"<<j<<endl;
                    cout<<"\t\t\tName:          :"<<a<<endl;
                    cout<<"\t\t\tAmount         :"<<l<<endl;
                    found++;
                    }
                }
                file >>a>>b>>c>>d>>e>>f>>g>>h>>i>>j>>l>>p; 
            }
            if (found == 0){
            cout << "\t\t\tData Not Found...";
            }
            file.close();
        }
        cout<<endl;
        cout<<"\t\t\tPress 0 to continue.. :             ";
        cin>>o;
    }
    void store::canceldata(int x,string s,string pass){
        string a,b,c,d,e,f,g,h,i,j,p;
        char o;
        int l;
        system("cls");
        fstream file, file1;
        int found = 0;
        //string naaa;
        if(x==1){
            file.open("domes.txt", ios::in);
        }
        else{
            file.open("inter.txt", ios::in);
        }

        if (!file){
            cout << "\t\t\tNo Data is Present..";
            file.close();
        }
        else{
            file1.open("domes1.txt", ios::app | ios::out);
            file >>a>>b>>c>>d>>e>>f>>g>>h>>i>>j>>l>>p;
            while (!file.eof()){
                if (s != a && pass!=p){
                    file1<<" "<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<" "<<g<<" "<<h<<" "<<i<<" "<<j<<" "<<l<<" "<<p<<"\n";
                  }
                else{
                    found++;
                    cout << "\t\t\tYour booking is cancelled successfully";
                }
                file >>a>>b>>c>>d>>e>>f>>g>>h>>i>>j>>l>>p;
            }
            if (found == 0){
                cout << "\n\t\t\tData Not Found....";
            }
            file1.close();
            file.close();
            if(x==1){
                remove("domes.txt");
                rename("domes1.txt", "domes.txt");
            }
            else{
                remove("inter.txt");
                rename("domes1.txt", "inter.txt");
            }
        }
        cout<<endl;
        cout<<"\t\t\tPress 0 to continue.. :             ";
        cin>>o;
    }
    void store::change(int x,int m,string s,string pass){
        string a,b,c,d,e,f,g,h,i,j,p;
        char o;
        int l;
        system("cls");
        fstream file, file1;
        int found = 0;
        if(x==1){
            file.open("domes.txt", ios::in);
        }
        else{
            file.open("inter.txt", ios::in);
        }
        if (!file){
            cout << "\n\t\t\tNo Data is Present..";
        }
        else{
            file1.open("rec.txt", ios::app | ios::out);
            file >>a>>b>>c>>d>>e>>f>>g>>h>>i>>j>>l>>p;
            while (!file.eof()){
                if (s != a && pass!=p){

                file1<<" "<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<" "<<g<<" "<<h<<" "<<i<<" "<<j<<" "<<l<<" "<<p<<"\n";
                }
                else{   
                    if(m==1){
                        if(x==1){
                            int n;
                            string arr[10]={"Delhi","Mumbai","Bengaluru","Hyderabad","Vizag","Chennai","Ahmedabad","Kolkata","Lucknow","Patna"};
                            cout<<"1.Delhi    2.Mumbai     3.Bengaluru  4.Hyderabad  5.Vizag"<<endl;
                            cout<<"6.Chennai  7.Ahmedabad  8.Kolkata    9.Lucknow    10.patna"<<endl;
                            cout << "\t\t\tchoose: ";
                            cin>>n;
                            c=arr[n-1];
                        }
                        else{
                            int n;
                            string arr[10]={"Canada","Portugal","Japan","Saudi_Arabia","Germany","Thailand","Morocco","Brazil","United_states","Australia"};
                            cout<<"1.Canada    2.Portugal  3.Japan   4.Saudi_Arabia   5.Germany"<<endl;
                            cout<<"6.Thailand  7.Morocco   8.Brazil  9.United_states  10.Australia"<<endl;
                            cout << "\t\t\tchoose: ";
                            cin>>n;
                            c=arr[n-1];
                        }
                    }
                    else if(m==2){
                        cout << "\t\t\tEnter date.: ";
                        cin >> d;
                    }
                    else if(m==3){
                        string cla[3]={"First_class","Business_Class","Economy_Class"};
                        int am[3]={3000,2000,1000};
                        string s;
                        int n;
                        system("cls");
                        cout<<"\t\t\t   Class          "<<endl;
                        cout<<"\t\t\t1.First class     "<<endl;
                        cout<<"\t\t\t2.Business Class  "<<endl;
                        cout<<"\t\t\t3.Economy Class   "<<endl;
                        cout<<"\t\t\tselect class :";
                        cin>>n;
                        i=cla[n-1];
                        l=l+am[n-1];
                    }
                    else{

                        string s;
                        system("cls");
                        cout<<"\t\t\t    [11A]  [12A]  [13A]  [14A]  [15A]  [16A]  [17A]  [18A]  [19A]  [20A]  [21A]  [22A]  [23A]  [24A]  [25A]"<<endl;  
                        cout<<"\t\t\t    [11B]  [12B]  [13B]  [14B]  [15B]  [16B]  [17B]  [18B]  [19B]  [20B]  [21B]  [22B]  [23B]  [24B]  [25B]"<<endl;  
                        cout<<"\t\t\t    [11C]  [12C]  [13C]  [14C]  [15C]  [16C]  [17C]  [18C]  [19C]  [20C]  [21C]  [22C]  [23C]  [24C]  [25C]"<<endl;  
                        cout<<"                                                                                                       "<<endl;
                        cout<<"\t\t\t    [11D]  [12D]  [13D]  [14D]  [15D]  [16D]  [17D]  [18D]  [19D]  [20D]  [21D]  [22D]  [23D]  [24D]  [25D]"<<endl;  
                        cout<<"\t\t\t    [11E]  [12E]  [13E]  [14E]  [15E]  [16E]  [17E]  [18E]  [19E]  [20E]  [21E]  [22E]  [23E]  [24E]  [25E]"<<endl;  
                        cout<<"                                                                                                        "<<endl;
                        cout<<"\t\t\t    [11F]  [12F]  [13F]  [14F]  [15F]  [16F]  [17F]  [18F]  [19F]  [20F]  [21F]  [22F]  [23F]  [24F]  [25F]"<<endl;  
                        cout<<"\t\t\t    [11G]  [12G]  [13G]  [14G]  [15G]  [16G]  [17G]  [18G]  [19G]  [20G]  [21G]  [22G]  [23G]  [24G]  [25G]"<<endl;  
                        cout<<"\t\t\t    [11H]  [12H]  [13H]  [14H]  [15H]  [16H]  [17H]  [18H]  [19H]  [20H]  [21H]  [22H]  [23H]  [24H]  [25H]"<<endl; 
    
                        cout<<"\t\t\tSelect Your Seat :";
                        cin>>s;
                        
                        j=s;
        
                    }   
                    file1<<" "<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<" "<<g<<" "<<h<<" "<<i<<" "<<j<<" "<<l<<" "<<p<<"\n";
                    found++;
                }file >>a>>b>>c>>d>>e>>f>>g>>h>>i>>j>>l>>p;
            }
            if (found == 0){
                cout << "\n\n\t\t\t Data Not Found....";
            }
            file1.close();
            file.close();
            if(x==1){
                remove("domes.txt");
                rename("rec.txt", "domes.txt");
            }
            else{
                remove("inter.txt");
                rename("rec.txt", "inter.txt");
            }
        }
        cout<<endl;
        cout<<"\t\t\tPress 0 to continue.. :             ";
        cin>>o;
    }

}