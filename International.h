#ifndef __International
#define __International

#include <string>
#include "Personal.h"
using namespace std;
namespace example{

class international:virtual public personal{

private:
    string ifrom,ito,idate,itime1,itime2,iflightname,iflightno,iclass,iseat;
    int iamount;
public:
    void setifrom(string from);
    void setito(string to);
    void setidate(string date);
    void setitime1(string time);
    void setitime2(string time);
    void setiflightname(string flightname);
    void setiflightno(string number);
    void seticlass(string class_);
    void setiseat(string seat);
    void setiamount(int amount);
     
    string getifrom();
    string getito();
    string getidate();
    string getitime1();
    string getitime2();
    string getiflightname();
    string getiflightno();
    string geticlass();
    string getiseat();
    int getiamount();

    void searchflighti();
    void bookflighti();
    void canceli();
    void changei();
    void disticketi();

    
};
}
#endif
