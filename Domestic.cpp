#include <iostream>
#include <string>
#include "Domestic.h"
#include "Personal.h"
#include "Store.h"
using namespace std;
    
namespace example {

    void domestic::setdfrom(string from){this->dfrom = from;}
    void domestic::setdto(string to){this->dto = to;}
    void domestic::setddate(string date){this->ddate = date;}
    void domestic::setdtime1(string time){this->dtime1 = time;}
    void domestic::setdtime2(string time){this->dtime2 = time;}
    void domestic::setdflightname(string flightname){this->dflightname = flightname;}
    void domestic::setdflightno(string number){this->dflightno = number;}
    void domestic::setdclass(string class_){this->dclass = class_;}
    void domestic::setdseat(string seat){this->dseat = seat;}
    void domestic::setdamount(int amount){this->damount = amount;}
     
    string domestic::getdfrom(){ return this->dfrom;}
    string domestic::getdto(){ return this->dto;}
    string domestic::getddate(){return this->ddate;}
    string domestic::getdtime1(){return this->dtime1;}
    string domestic::getdtime2(){return this->dtime2;}
    string domestic::getdflightname(){return this->dflightname;}
    string domestic::getdflightno(){return this->dflightno;}
    string domestic::getdclass(){return this->dclass;}
    string domestic::getdseat(){return this->dseat;}
    int domestic::getdamount(){ return this->damount;}


    domestic d;
    
    void domestic::searchflight(){
        int n,n1;
        string ss;
        cout<<"\t\t\t1.Delhi    2.Mumbai     3.Bengaluru  4.Hyderabad  5.Vizag"<<endl;
        cout<<"\t\t\t6.Chennai  7.Ahmedabad  8.Kolkata    9.Lucknow    10.patna"<<endl;
    
        cout<<"\t\t\tSelect the departure point : ";
        cin>>n;
        cout<<"\t\t\tSelect your destination    : ";
        cin>>n1;
        
        if(n==n1){    
            cout<<"\t\t\tTry Again";
        }
        else{
            cout<<"\t\t\tEnter Valid Date(DD/MM/YYYY) : ";
            cin>>ss;
        }

        cout<<"\t\t\tFlight       time1    tim2    flightno  amount"<<endl;
        cout<<"\t\t\t1.IndiGo     09:00    11:00    FI23      4000 "<<endl;
        cout<<"\t\t\t2.AirIndia   20:35    22:35    FA34      4120 "<<endl;
        cout<<"\t\t\t3.Spicejet   03:45    05:55    FS41      4300 "<<endl;
        cout<<"\t\t\t4.Vistata    15:00    17:10    FV12      4100 "<<endl;
        cin>>n;
    }
    void domestic::bookflight(){
        int n;
        char c;
        string ss;
        cout<<"\t\t\t1.Delhi    2.Mumbai     3.Bengaluru  4.Hyderabad  5.Vizag"<<endl;
        cout<<"\t\t\t6.Chennai  7.Ahmedabad  8.Kolkata    9.Lucknow    10.patna"<<endl;
        cout<<endl;
        
        string arr[10]={"Delhi","Mumbai","Bengaluru","Hyderabad","Vizag","Chennai","Ahmedabad","Kolkata","Lucknow","Patna"};
        cout<<"\t\t\tSelect the departure point : ";
        cin>>n;
        d.setdfrom(arr[n-1]);
        cout<<"\t\t\tSelect your destination    : ";
        cin>>n;
        d.setdto(arr[n-1]);
        if(d.getdfrom()==d.getdto()){    
            cout<<"\t\t\tTRY AGAIN";
        }
        else
        {
            cout<<"\t\t\tEnter Valid Date(DD/MM/YYYY) : ";
            cin>>ss;
            d.setddate(ss);
            cout<<endl;
        }
        cout<<"\t\t\tPress 0 to continue.. :             ";
        cin>>c;

        system("cls");
        cout<<"\t\t\tFlight       time1    tim2    flightno  amount"<<endl;
        cout<<"\t\t\t1.IndiGo     09:00    11:00    FI23      4000 "<<endl;
        cout<<"\t\t\t2.AirIndia   20:35    22:35    FA34      4120 "<<endl;
        cout<<"\t\t\t3.Spicejet   03:45    05:55    FS41      4300 "<<endl;
        cout<<"\t\t\t4.Vistata    15:00    17:10    FV12      4100 "<<endl;
        
        int x;
        string fli[4]={"IndiGo","Airline","Spicejet","Vistata"};
        string time[8]={"09:00","11:00","20:35","22:35","03:45","05:55","15:00","17:10"};
        string flnoo[4]={"FI23","FA34","FS41","FV12"};
        cout<<endl;
        
        cout<<"\t\t\t"<<d.getdfrom()<<"-->-->-->-->"<<d.getdto()<<endl;
        cout<<endl;
        cout<<"\t\t\tSelect Flight :";
        cin>>x;
        
        cout<<endl;
        d.setdflightname(fli[x-1]);
        d.setdflightno(flnoo[x-1]);
        d.setdtime1(time[2*(x-1)]);
        d.setdtime2(time[2*x-1]);
        cout<<"\t\t\tPress 0 to continue.. :             ";
        cin>>c;

    
        string cla[3]={"First_class","Business_Class","Economy_Class"};
        int a1[4][3]={{7000,5100,4000},{7100,5200,4120},{7000,5400,4300},{7200,5300,4100}};
       
        system("cls");
        cout<<"\t\t\t** Class          Amount **"<<endl;
        cout<<"\t\t\t1.First class     "<<a1[x-1][0]<<endl;
        cout<<"\t\t\t2.Business Class  "<<a1[x-1][1]<<endl;
        cout<<"\t\t\t3.Economy Class   "<<a1[x-1][2]<<endl;
        cout<<endl;
        
        cout<<"\t\t\tSelect Any Class:";
        cin>>n;
        cout<<endl;
        d.setdclass(cla[n-1]);
        d.setdamount(a1[x-1][n-1]);
        int l=d.getdamount();
        cout<<endl;
        cout<<"\t\t\tPress 0 to continue.. :             ";
        cin>>c;


        string s;
        system("cls");
        cout<<"\t\t\t[11A]  [12A]  [13A]  [14A]  [15A]  [16A]  [17A]  [18A]  [19A]  [20A]  [21A]  [22A]  [23A]  [24A]  [25A]"<<endl;  
        cout<<"\t\t\t[11B]  [12B]  [13B]  [14B]  [15B]  [16B]  [17B]  [18B]  [19B]  [20B]  [21B]  [22B]  [23B]  [24B]  [25B]"<<endl;  
        cout<<"\t\t\t[11C]  [12C]  [13C]  [14C]  [15C]  [16C]  [17C]  [18C]  [19C]  [20C]  [21C]  [22C]  [23C]  [24C]  [25C]"<<endl;  
        cout<<"                                                                                      "<<endl;
        cout<<"\t\t\t[11D]  [12D]  [13D]  [14D]  [15D]  [16D]  [17D]  [18D]  [19D]  [20D]  [21D]  [22D]  [23D]  [24D]  [25D]"<<endl;  
        cout<<"\t\t\t[11E]  [12E]  [13E]  [14E]  [15E]  [16E]  [17E]  [18E]  [19E]  [20E]  [21E]  [22E]  [23E]  [24E]  [25E]"<<endl;  
        cout<<"                                                                                                  "<<endl;
        cout<<"\t\t\t[11F]  [12F]  [13F]  [14F]  [15F]  [16F]  [17F]  [18F]  [19F]  [20F]  [21F]  [22F]  [23F]  [24F]  [25F]"<<endl;  
        cout<<"\t\t\t[11G]  [12G]  [13G]  [14G]  [15G]  [16G]  [17G]  [18G]  [19G]  [20G]  [21G]  [22G]  [23G]  [24G]  [25G]"<<endl;  
        cout<<"\t\t\t[11H]  [12H]  [13H]  [14H]  [15H]  [16H]  [17H]  [18H]  [19H]  [20H]  [21H]  [22H]  [23H]  [24H]  [25H]"<<endl; 
        cout<<endl;
        cout<<"\t\t\tSelect Your Seat: ";
        cin>>s;
        
        d.setdseat(s);
        cout<<endl;
        cout<<"\t\t\tDo you want to Add Meals?  Y/N :";
        cin>>s;
        int i=0;
        string mel[6]={"Chicken Tikka Sandwich","Masala Twist Cuppa Noodles","Sugar Free Cookies","Alphonso Aamras Juice","Paneer Butter Masala Rice","Budweiser Non-alcoholic Beer"};
        int amm[6]={400,350,150,250,500,200};
        
        if(s=="y" || s=="Y"){
            while(i!=1){
                system("cls");
                cout<<"\t\t\t1.Chicken Tikka Sandwich       - 400"<<endl;
                cout<<"\t\t\t2.Masala Twist Cuppa Noodles   - 350"<<endl;
                cout<<"\t\t\t3.Sugar Free Cookies           - 150"<<endl;
                cout<<"\t\t\t4.Alphonso Aamras Juice        - 250"<<endl;
                cout<<"\t\t\t5.Paneer Butter Masala Rice    - 500"<<endl;
                cout<<"\t\t\t6.Budweiser Non-alcoholic Beer - 200"<<endl;
                cout<<endl;
                cout<<"\t\t\tHow many food items do you want to add:";
                cin>>n;
                int t=n;
                while(n--){
                    cout<<"\t\t\tSelect your "<<t-n<<" food item : ";
                    cin>>i;
                    if(i==1||i==2||i==3||i==4||i==5||i==6){
                        
                        l=l+amm[i-1]; 
                        
                        i=0;i++;
                    }else{
                        n++;
                    }
                }
            }
            d.setdamount(l);
            cout<<endl;
            cout<<"\t\t\tPress 0 to continue.. :             ";
            cin>>n;
        }
        system("cls");
        string sa;
        
        cout<<"\t\t\t** PERSONAL DETAILS **"<<endl;
        cout<<endl;
        cout<<"\t\t\tEnter Full name      :";
        
        cin>>sa;
        d.setname(sa);
        cout<<"\t\t\tCreate your Password :";
        cin>>sa;
        d.setpassword(sa);
        cout<<"\t\t\tEnter Age            :";
        
        cin>>age;
        cout<<"\t\t\tSelect Gender(M/F)   :";
        cin>>gen;
        cout<<"\t\t\tEnter Gmail          :"    ;
        cin>>gmail;
        cout<<"\t\t\tEnter Contact        :";

        cin>>contact;
        cout<<endl;
        cout<<"\t\t\tPress 0 to continue.. :             ";
        cin>>n;
    
    store *dome;
    dome->storedata(d);
    

    }    
    void domestic::cancel(){
        string s,s1;
        cout<<"\t\t\tEnter Your Name :";
        cin>>s;
        cout<<"\t\t\tPassword :";
        cin>>s1;
        store *ssq1;
        ssq1->canceldata(1,s,s1);

    }
    void domestic::change(){
        int m;
        //system("cls");
        cout<<"\t\t\t1.Change Destination"<<endl;
        cout<<"\t\t\t2.Change Date"<<endl;
        cout<<"\t\t\t3.Change Class"<<endl;
        cout<<"\t\t\t4.Change Seat"<<endl;
        cout<<endl;
        cout<<"\t\t\tchoose:";
        cin>>m;

        string s,s1;
        cout<<"\t\t\tEnter Your Name :";
        cin>>s;
        cout<<"\t\t\tPassword :";
        cin>>s1;
        store *ssq1;
        ssq1->change(1,m,s,s1);
    }
    void domestic::disticketd(){
        string s,s1;
        cout<<"\t\t\tEnter Your Name :";
        cin>>s;
        cout<<"\t\t\tPassword :";
        cin>>s1;
        store *ssq1;
        ssq1->searchdata(1,s,s1);
    }
    
    
    }
     
    