// ---- Program Info Start----
//FileName:     testTailCall.cpp
//
//Author:       Fuchen Duan
//
//Email:        slow295185031@gmail.com
//
//CreatedAt:    2016-09-18 10:13:33
// ---- Program Info End  ----

#include <iostream>
#include <ctime>

using namespace std;

int nonTailFactorial( int n ){
    if(n<=1) return 1;
    return nonTailFactorial(n-1)+nonTailFactorial(n-2);
}

int tailFactorial( int n, int tmp,int total ){
    if( n==1  ) return total;
    return tailFactorial(n-1, total, tmp+total);
}

int main(int argc, char *argv[])
{
    clock_t start, end;
    start = clock();
    int rs = nonTailFactorial(20);
    end = clock();
    cout<<"rs = "<<rs<<" time = "<<(double)(end-start) <<endl;

    start = clock();
    rs = tailFactorial(20,1,1);
    end = clock();
    cout<<"rs = "<<rs<<" time = "<<(double)(end-start) <<endl;
    return 0;
}
