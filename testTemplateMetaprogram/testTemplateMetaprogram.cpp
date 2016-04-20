// ---- Program Info Start----
//FileName:     testTemplateMetaprogram.cpp
//
//Author:       Fuchen Duan
//
//Email:        slow295185031@gmail.com
//
//CreatedAt:    2016-04-20 10:52:12
// ---- Program Info End  ----

#include <iostream>
#include <ctime>
using namespace std;

int normalFactorial(int n){
    int nLast    = 1;
    int nCurrent = 1;
    int nRes;
    if(n == 0) return nLast;
    if(n == 1) return nCurrent;
    for(int i=2; i<=n; ++i){
        nRes     = nCurrent + nLast;
        nLast    = nCurrent;
        nCurrent = nRes;
    }
    return nRes;
}

int recursiveFactorial(int n){
    if(n == 0) return 1;
    if(n == 1) return 1;
    return recursiveFactorial(n-1) + recursiveFactorial(n-2);
}

template<unsigned n>
struct TMPFactorial{
    enum{ value = TMPFactorial<n-2>::value + TMPFactorial<n-1>::value };
};
template<>
struct TMPFactorial<0>{
    enum{ value = 1 };
};
template<>
struct TMPFactorial<1>{
    enum{ value = 1 };
};

int main(int argc, char *argv[])
{
    clock_t startClock = clock();
    cout<<"normalFactorial:"<<normalFactorial(30)<<endl;
    cout<<"Time spend:"<<(clock() - startClock)<<endl;

    startClock = clock();
    cout<<"recursiveFactorial:"<<recursiveFactorial(30)<<endl;
    cout<<"Time spend:"<<(clock() - startClock)<<endl;

    startClock = clock();
    cout<<"TMPFactorial:"<<TMPFactorial<30>::value<<endl;
    cout<<"Time spend:"<<(clock() - startClock)<<endl;
    return 0;
}
