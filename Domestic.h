#ifndef __Domestic
#define __Domestic

#include <string>
#include "Personal.h"
using namespace std;
namespace example{

class domestic:virtual public personal{

private:
    string dfrom,dto,ddate,dtime1,dtime2,dflightname,dflightno,dclass,dseat;
    int damount;
public:
    void setdfrom(string from);
    void setdto(string to);
    void setddate(string date);
    void setdtime1(string time);
    void setdtime2(string time);
    void setdflightname(string flightname);
    void setdflightno(string number);
    void setdclass(string class_);
    void setdseat(string seat);
    void setdamount(int amount);
     
    string getdfrom();
    string getdto();
    string getddate();
    string getdtime1();
    string getdtime2();
    string getdflightname();
    string getdflightno();
    string getdclass();
    string getdseat();
    int getdamount();

    void searchflight();
    void bookflight();
    void cancel();
    void change();
    void disticketd();
};


}




#endif