// ---- Program Info Start----
//FileName:     testClassDelete.cpp
//
//Author:       Fuchen Duan
//
//Email:        slow295185031@gmail.com
//
//CreatedAt:    2016-03-30 14:51:55
// ---- Program Info End  ----

#include <iostream>
using namespace std;

class Based{
    int _val;
    public:
    Based():_val(0){}
    ~Based(){
        cout<<"Destructor Invoked!"<<endl;
    }
    void Release(){
        delete this;
        cout<<"Release() Invoked Finish!"<<endl;
    }
    int Get_Value(){
        return _val;
    }
};

int main(int argc, char *argv[])
{
    Based *test = new Based;
    cout<<test->Get_Value()<<endl;
    (*test).Release();
    cout<<test->Get_Value();
    return 0;
}
