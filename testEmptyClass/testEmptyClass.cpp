// ---- Program Info Start----
//FileName:     testEmptyClass.cpp
//
//Author:       Fuchen Duan
//
//Email:        slow295185031@gmail.com
//
//CreatedAt:    2016-04-23 13:58:20
// ---- Program Info End  ----

#pragma pack(1)
#include <iostream>
using namespace std;

class EmptyA{
    int a;
};
class EmptyB{
    int b;
};

class DeveriedEmptyA:public EmptyA{

};
class DeveriedEmptyB:public EmptyA{

};
class MultiDeveriedEmpty:public EmptyA, public EmptyB{

};

class DeepestDeveried:public DeveriedEmptyA, public DeveriedEmptyB{

};

int main(int argc, char *argv[])
{
    cout<<"sizeof EmptyA"<<sizeof(EmptyA)<<endl;
    cout<<"sizeof EmptyB"<<sizeof(EmptyB)<<endl;
    cout<<"sizeof DeveriedEmptyA"<<sizeof(DeveriedEmptyA)<<endl;
    cout<<"sizeof DeveriedEmptyB"<<sizeof(DeveriedEmptyB)<<endl;
    cout<<"sizeof MultiDeveriedEmpty"<<sizeof(MultiDeveriedEmpty)<<endl;
    cout<<"sizeof DeepestDeveried"<<sizeof(DeepestDeveried)<<endl;

    return 0;
}
