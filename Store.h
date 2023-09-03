#ifndef _store
#define _store

#include "Domestic.h"
#include "International.h"
namespace example{

    class store:public international,public domestic{
     
        public:

        void storedata(domestic d);
        void storedatai(international i);
        void searchdata(int a,string,string);
        void canceldata(int a,string,string);
        void change(int a,int m,string,string);

    };

}

#endif