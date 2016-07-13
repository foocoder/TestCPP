// ---- Program Info Start----
//FileName:     testPerm.cpp
//
//Author:       Fuchen Duan
//
//Email:        slow295185031@gmail.com
//
//CreatedAt:    2016-07-13 10:28:45
// ---- Program Info End  ----

#include <iostream>

using namespace std;

#define N 5
static int num[N];

void swap( int & a, int & b ){
    if( &a == &b )
        return;
    a = a+b;
    b = a-b;
    a = a-b;
    //int c;
    //c = a;
    //a = b;
    //b = c;
}

void print(){
    for(auto i:num){
        cout<<i<<" ";
    }
    cout<<endl;
}
void perm( int k ){
    if( k==N-1 ){
        print();
        return;
    }
    for(int i=k; i<N; ++i){
        swap(num[k], num[i]);
        perm(k+1);
        swap(num[k], num[i]);
    }
}

int main(int argc, char *argv[])
{
    for(int i=0; i<N; ++i)
        num[i] = i;
    perm(0);
    return 0;
}
