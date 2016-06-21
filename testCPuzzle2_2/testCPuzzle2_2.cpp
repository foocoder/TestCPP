// ---- Program Info Start----
//FileName:     testCPuzzle2_2.cpp
//
//Author:       Fuchen Duan
//
//Email:        slow295185031@gmail.com
//
//CreatedAt:    2016-06-21 10:49:05
// ---- Program Info End  ----

#include <cstdio>

#define PR(x) printf(#x " = %.8g\t", (double)x)
#define NL putchar('\n')
#define PRINT4(x1, x2, x3, x4) PR(x1);PR(x2);PR(x3);PR(x4);NL

int main(int argc, char *argv[])
{
    double d;
    float f;
    long l;
    int i;

    i = l = f = d = 100/3; PRINT4(i,l,f,d);
    d = f = l = i = 100/3; PRINT4(i,l,f,d);
    i = l = f = d = 100/3.; PRINT4(i,l,f,d);
    d = f = l = i = (float)100/3; PRINT4(i,l,f,d);

    i = l = f = d = (double)(100000/3); PRINT4(i,l,f,d);
    d = f = l = i = (100000/3); PRINT4(i,l,f,d);
    return 0;
}
