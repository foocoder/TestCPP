// ---- Program Info Start----
//FileName:     testEnum.cpp
//
//Author:       Fuchen Duan
//
//Email:        slow295185031@gmail.com
//
//CreatedAt:    2016-03-27 13:47:54
// ---- Program Info End  ----

#include <iostream>
using namespace std;

enum test_type{
    test_one,
    test_two,
    test_three=0,
    test_four
};

int main(int argc, char *argv[])
{
    test_type a = test_one;
    test_type b = test_two;
    test_type c = test_three;
    bool ba = a == b;
    bool bb = a == c;
    //test_type d = static_cast< test_type >(0) ;
    //cout<<d<<endl;
    return 0;
}
