// ---- Program Info Start----
//FileName:     testCondTransfer.cpp
//
//Author:       Fuchen Duan
//
//Email:        slow295185031@gmail.com
//
//CreatedAt:    2016-07-20 09:08:01
// ---- Program Info End  ----

#include <stdio.h>

#define print( x ) printf(#x " is %d\n", x)

int absdiff( int x, int y )
{
    return x<y ? y-x : x-y;
}

int cmovdiff( int x, int y ){
    int tval = y-x;
    int rval = x-y;
    int test = x < y;
    if(test)
        rval = tval;
    return rval;
}

int main(int argc, char *argv[])
{
    print(absdiff(3,5));
    print(absdiff(5,3));
    print(cmovdiff(3,5));
    print(cmovdiff(5,3));
    return 0;
}
