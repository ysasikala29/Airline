#ifndef __Personal
#define __Personal

#include <string>
using namespace std;

namespace example{

class personal{
    
protected:
    int choice1; 
    string name,gen,gmail,contact,age,password;
    string card,date,cvv,user_id;
    char b_password[20];
public:
    void setname(string name_);
    string getname();
    void setpassword(string name_);
    string getpassword();
    void pay_detail();
};
}

#endif