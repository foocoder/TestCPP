// ---- Program Info Start----
//FileName:     testClassFunction.cpp
//
//Author:       Fuchen Duan
//
//Email:        slow295185031@gmail.com
//
//CreatedAt:    2016-05-19 19:40:25
// ---- Program Info End  ----

#include <iostream>

using namespace std;

class Based{
    private:
        int _val;
    public:
        Based():_val(0){}
        void fun(){
            cout<<_val;
        }
};

int main(int argc, char *argv[])
{
    Based a;
    a.fun();
    return 0;
}
