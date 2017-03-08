// ---- Program Info Start----
//FileName:     teststrcpy.cpp
//
//Author:       Fuchen Duan
//
//Email:        slow295185031@gmail.com
//
//CreatedAt:    2017-03-08 14:17:09
// ---- Program Info End  ----

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

char * strcpy( char * strDestination, const char * strSource ){
    assert( strDestination != NULL && strSource != NULL );
    char * strD = strDestination;
    while( (*strDestination++ = *strSource++) != '\0' );
    return strD;
}

int main(int argc, char *argv[])
{
    char b[2] = {0};
    char * p = NULL;
    strcpy(p, "aaa");
    return 0;
}
