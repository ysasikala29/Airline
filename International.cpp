#include <iostream>
#include <string>
#include "International.h"
#include "Store.h"
namespace example{
    void international::setifrom(string from){this->ifrom = from;}
    void international::setito(string to){this->ito = to;}
    void international::setidate(string date){this->idate = date;}
    void international::setitime1(string time){this->itime1 = time;}
    void international::setitime2(string time){this->itime2 = time;}
    void international::setiflightname(string flightname){this->iflightname = flightname;}
    void international::setiflightno(string number){this->iflightno = number;}
    void international::seticlass(string class_){this->iclass = class_;}
    void international::setiseat(string seat){this->iseat = seat;}
    void international::setiamount(int amount){this->iamount = amount;}
     
    string international::getifrom(){ return this->ifrom;}
    string international::getito(){ return this->ito;}
    string international::getidate(){return this->idate;}
    string international::getitime1(){return this->itime1;}
    string international::getitime2(){return this->itime2;}
    string international::getiflightname(){return this->iflightname;}
    string international::getiflightno(){return this->iflightno;}
    string international::geticlass(){return this->iclass;}
    string international::getiseat(){return this->iseat;}
    int international::getiamount(){ return this->iamount;}

   international i;
   //store ssss;
   //ssss.getname();
   void international::searchflighti(){
        int n,n1;
        string ss;
        
        cout<<"\t\t\t1.Canada    2.Portugal  3.Japan   4.Saudi_Arabia   5.Germany"<<endl;
        cout<<"\t\t\t6.Thailand  7.Morocco   8.Brazil  9.United_states  10.Australia"<<endl;
        cout<<endl;
    
        cout<<"\t\t\tSelect the departure point : ";
        cin>>n;
        cout<<"\t\t\tSelect your destination    : ";
        cin>>n1;
        
        if(n==n1){    
            cout<<"\t\t\tTRY AGAIN";
        }
        else{
            cout<<"\t\t\tEnter Valid Date(DD/MM/YYYY) : ";
            cin>>n;
        }
        cout<<endl;

        cout<<"\t\t\tFlight       time1    tim2    flightno  amount"<<endl;
        cout<<"\t\t\t1.IndiGo     09:00    11:00    FI23      4000 "<<endl;
        cout<<"\t\t\t2.AirIndia   20:35    22:35    FA34      4120 "<<endl;
        cout<<"\t\t\t3.Spicejet   03:45    05:55    FS41      4300 "<<endl;
        cout<<"\t\t\t4.Vistata    15:00    17:10    FV12      4100 "<<endl;
        cin>>n;
    }
   void international::bookflighti(){
        int n;
        char c;
        string ss;
        cout<<"\t\t\t1.Canada    2.Portugal  3.Japan   4.Saudi_Arabia   5.Germany"<<endl;
        cout<<"\t\t\t6.Thailand  7.Morocco   8.Brazil  9.United_states  10.Australia"<<endl;
        cout<<endl;
        
        string arr[10]={"Canada","Portugal","Japan","Saudi_Arabia","Germany","Thailand","Morocco","Brazil","United_states","Australia"};
        
        cout<<"\t\t\tSelect the departure point : ";
        cin>>n;
        i.setifrom(arr[n-1]);
        
        cout<<"\t\t\tSelect your destination    : ";
        cin>>n;
        i.setito(arr[n-1]);
        if(i.getifrom()==i.getito()){    
            cout<<"\t\t\tTRY AGAIN";
        }
        else{
            cout<<"\t\t\tEnter Valid Date(DD/MM/YYYY) : ";
            cin>>ss;
            i.setidate(ss);
        }
        cout<<endl;
        cout<<"\t\t\tPress 0 to continue.. :             ";
        cin>>c;
        
        cout<<endl;
        system("cls");
        cout<<"\t\t\tFlight       Time1    Time2    Flightno   Amount"<<endl;
        cout<<"\t\t\t1.IndiGo     09:00    11:00     FI23       4000"<<endl;
        cout<<"\t\t\t2.AirIndia   20:35    22:35     FA34       4120"<<endl;
        cout<<"\t\t\t3.Spicejet   03:45    05:55     FS41       4300"<<endl;
        cout<<"\t\t\t4.Vistata    15:00    17:10     FV12       4100"<<endl;
        int x;
        
        string fli[4]={"IndiGo","Airline","Spicejet","Vistata"};
        string time[8]={"09:00","11:00","20:35","22:35","03:45","05:55","15:00","17:10"};
        string flnoo[4]={"FI23","FA34","FS41","FV12"};
        cout<<endl;
        cout<<"\t\t\t"<<i.getifrom()<<"-->-->-->-->"<<i.getito()<<endl;
        cout<<endl;
        cout<<"\t\t\tSelect Flight :";
        cin>>x;
        
        cout<<endl;
            i.setiflightname(fli[x-1]);
            i.setiflightno(flnoo[x-1]);
            i.setitime1(time[2*(x-1)]);
            i.setitime2(time[2*x-1]);
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
        i.seticlass(cla[n-1]);
        i.setiamount(a1[x-1][n-1]);
        int l=i.getiamount();
        
        cout<<"\t\t\tPress 0 to continue.. :             ";
        cin>>c;
    

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
    
        cout<<endl;
        cout<<"\t\t\tSelect Your Seat:";
        cin>>s;
        cout<<endl;
       
        i.setiseat(s);
        cout<<endl;
        cout<<"Do you want to Add Meals?  Y/N :";
        cin>>s;
        int io=0;
        string mel[6]={"Chicken Tikka Sandwich","Masala Twist Cuppa Noodles","Sugar Free Cookies","Alphonso Aamras Juice","Paneer Butter Masala Rice","Budweiser Non-alcoholic Beer"};
        int amm[6]={400,350,150,250,500,200};
        
        if(s=="y" || s=="Y"){
            while(io!=1){
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
                cout<<endl;
                int t=n;
                while(n--){
                    cout<<"\t\t\tSelect your "<<t-n<<" food item : ";
                    cin>>io;
                    if(io==1||io==2||io==3||io==4||io==5||io==6){
                        
                        l=l+amm[io-1]; 
                        
                        io=0;io++;
                    }else{
                        n++;
                    }
                }
            }
            i.setiamount(l);
            cout<<endl;
            cout<<"\t\t\tPress 0 to continue.. :             ";
            cin>>n;
        }
        system("cls");
        string sa;
        
        cout<<"\t\t\t** PERSONAL DETAILS **"<<endl;
        cout<<endl;
        cout<<"\t\t\tEnter Full name   :";
        //cin>>name;
        cin>>sa;
        i.setname(sa);
        cout<<"\t\t\tCreate your Password:";
        cin>>sa;
        i.setpassword(sa);
        cout<<"\t\t\tEnter Age         :";

        cin>>age;
        cout<<"\t\t\tSelect Gender(M/F):";
        
        cin>>gen;
        cout<<"\t\t\tEnter Gmail       :";     

        cin>>gmail;
        cout<<"\t\t\tEnter Contact     :";
    
        cin>>contact;
        cout<<endl;
        cout<<"\t\t\tPress 0 to continue.. :             ";
        cin>>n;

    store *inter;
    inter->storedatai(i);
    
   }

   void international::canceli(){
        string s,s1;
        cout<<"\t\t\tEnter Your Name :"<<endl;
        cin>>s;
        cout<<"\t\t\tPassword :";
        cin>>s1;
        store *ssq1;
        ssq1->canceldata(2,s,s1);

    }
    void international::changei(){
        int m;
        system("cls");
        cout<<"\t\t\t1.Change Destination"<<endl;
        cout<<"\t\t\t2.Change Date"<<endl;
        cout<<"\t\t\t3.Change Class"<<endl;
        cout<<"\t\t\t4.Change Seat"<<endl;
        cin>>m;

        string s,s1;
        cout<<"\t\t\tEnter Your Name :"<<endl;
        cin>>s;
        cout<<"\t\t\tPassword :";
        cin>>s1;
        store *ssq1;
        ssq1->change(2,m,s,s1);
    }
    void international::disticketi(){
        string s,s1;
        cout<<"\t\t\tEnter Your Name :"<<endl;
        cin>>s;
        cout<<"\t\t\tPassword :";
        cin>>s1;
        store *ssq1;
        ssq1->searchdata(2,s,s1);
    }
    

}