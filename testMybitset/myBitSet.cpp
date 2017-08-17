// ---- Program Info Start----
//FileName:     myBitSet.cpp
//
//Author:       Fuchen Duan
//
//Email:        slow295185031@gmail.com
//
//CreatedAt:    2017-03-08 19:20:59
// ---- Program Info End  ----

#include <iostream>
#include <ctime>
#include "myBitSet.h"

using namespace std;

#define M 1000

int main(int argc, char *argv[])
{
    myBitSet<M> bitset;
    for( int i=0; i<M; ++i ){
        if( ((double)rand() / RAND_MAX ) < 0.01 )
            bitset.set( i );
    }
    clock_t tStart, tTimer;
    tStart = clock();
    for( int i=0; i<M; ++i ){
        if( bitset.test(i) )
            cout<<i<<" ";
    }
    cout<<endl;
    cout<<clock() - tStart<<endl;

    tStart = clock();
    vector<int> vIndex = bitset.getIndices();
    /* for( auto i : vIndex ){ */
    /*     cout<<i<<" "; */
    /* } */
    cout<<endl;
    cout<<clock() - tStart<<endl;

    return 0;
}

