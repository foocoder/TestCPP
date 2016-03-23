// ---- Program Info Start----
//FileName:     test.cpp
//
//Author:       Fuchen Duan
//
//Email:        slow295185031@gmail.com
//
//CreatedAt:    2016-02-13 13:53:27
// ---- Program Info End  ----

#include <iostream>
#include <cstring>
#include <cmath>
#include <ctime>

using namespace std;

int Fn_Get_First_By_String(unsigned long n){
    return ((int) (to_string(n)[0])) - '0';
}

int Fn_Get_First_By_MathFunc(unsigned long n){
    return n <= 0 ? 0 : (int)(n / pow(10, floor(log10(n))));
}

int Fn_Get_First_By_Looping(unsigned long n){
    while(n >=10)
        n /= 10;
    return n;
}

int Fn_Get_First_By_Conditional(unsigned long n){
    int digit = 0;
    if( n<10 )
        digit = n;
    else if( n<100 )
        digit = n/10;
    else if( n<1000 )
        digit = n/100;
    else if( n<10000 )
        digit = n/1000;
    else if( n<100000 )
        digit = n/10000;
    else if( n<1000000 )
        digit = n/100000;
    else if( n<10000000 )
        digit = n/1000000;
    else if( n<100000000 )
        digit = n/10000000;
    else if( n<1000000000 )
        digit = n/100000000;
    else
        digit = n/1000000000;
    return digit;
}

int Fn_Get_First_By_Unrolled_Optimized(unsigned long n){
    if( n>=100000000 ) n /= 100000000;
    if( n>=10000 ) n /= 10000;
    if( n>=100 ) n /= 100;
    if( n>=10 ) n /= 10;
    return n;
}

int main(int argc, char *argv[])
{
    unsigned long result = 0;
    clock_t start, end;
    start = clock();
    for(unsigned long i = 0; i<=1e9; i+=5)
        result += Fn_Get_First_By_Unrolled_Optimized(i);
    end = clock();
    cout<<"Fn_Get_First_By_Unrolled_Optimized Result: "<<result<<", Time: "<<(double)(end-start)/CLOCKS_PER_SEC<<endl;

    result = 0;
    start = clock();
    for(unsigned long i = 0; i<=1e9; i+=5)
        result += Fn_Get_First_By_Conditional(i);
    end = clock();
    cout<<"Fn_Get_First_By_Conditional Result: "<<result<<", Time: "<<(double)(end-start)/CLOCKS_PER_SEC<<endl;

    result = 0;
    start = clock();
    for(unsigned long i = 0; i<=1e9; i+=5)
        result += Fn_Get_First_By_Looping(i);
    end = clock();
    cout<<"Fn_Get_First_By_Looping Result: "<<result<<", Time: "<<(double)(end-start)/CLOCKS_PER_SEC<<endl;

    result = 0;
    start = clock();
    for(unsigned long i = 0; i<=1e9; i+=5)
        result += Fn_Get_First_By_MathFunc(i);
    end = clock();
    cout<<"Fn_Get_First_By_MathFunc Result: "<<result<<", Time: "<<(double)(end-start)/CLOCKS_PER_SEC<<endl;

    result = 0;
    start = clock();
    for(unsigned long i = 0; i<=1e9; i+=5)
        result += Fn_Get_First_By_String(i);
    end = clock();
    cout<<"Fn_Get_First_By_String Result: "<<result<<", Time: "<<(double)(end-start)/CLOCKS_PER_SEC<<endl;

    return 0;
}
