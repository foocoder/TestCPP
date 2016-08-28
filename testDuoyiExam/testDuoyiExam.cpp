// ---- Program Info Start----
//FileName:     testDuoyiExam.cpp
//
//Author:       Fuchen Duan
//
//Email:        slow295185031@gmail.com
//
//CreatedAt:    2016-08-28 16:32:53
// ---- Program Info End  ----

#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main(int argc, char *argv[])
{
    int * int_val = new int;
    *int_val = 0xFFFFFFF0;
    delete int_val;
    int_val = (int *) malloc(sizeof(int));
    char * char_point = (char *)int_val;
    *int_val = 0x6100;
    *char_point = (char) 0xffab00ff;
    char_point ++;
    printf("%d, %s\n", *int_val, char_point);
    return 0;
}
