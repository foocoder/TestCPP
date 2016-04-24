// ---- Program Info Start----
//FileName:     testDataMemberAddress.cpp
//
//Author:       Fuchen Duan
//
//Email:        slow295185031@gmail.com
//
//CreatedAt:    2016-04-24 14:38:34
// ---- Program Info End  ----

#include <cstdio>

using namespace std;

class Base{
    static int privateVal;
    public:
    int a;
    int b;
    static int c;
    virtual void virtFunc(){};
    static int getPrivateVal(){
        return privateVal;
    }
};

int Base::c = 0;
int Base::privateVal = 1;

struct Base1{
    int val1;
};
struct Base2{
    int val2;
};
struct Dervied:Base1, Base2{
    int val;
};
int main(int argc, char *argv[])
{
    Base test, test2;
    Base1 b1;

    printf("%p\n", &test);
    printf("%p\n", &test.a);
    printf("%p\n", &test.b);
    printf("%p\n", &test.c);
    printf("%p\n", &test2);
    printf("%p\n", &test2.a);
    printf("%p\n", &test2.b);
    printf("%p\n", &test2.c);
    printf("%p\n", &Base::a);
    printf("%p\n", &Base::b);
    printf("%p\n", &Base::c);
    printf("%p\n", &Base::virtFunc);
    printf("\n%p\n", &Base1::val1);
    printf("%p\n", &Base2::val2);
    printf("%p\n", &Dervied::val1);
    printf("%p\n", &Dervied::val2);
    printf("%p\n", &Dervied::val);
    printf("%d\n", ((Base*) 0)->getPrivateVal());
    //cout<<&test.a<<endl;
    //cout<<&test.b<<endl;
    //cout<<&test2.a<<endl;
    //cout<<&test2.b<<endl;
    //cout<<&Base::a<<endl;
    //cout<<&Base::b<<endl;
    //cout<<&Base::virtFunc<<endl;
    return 0;
}
