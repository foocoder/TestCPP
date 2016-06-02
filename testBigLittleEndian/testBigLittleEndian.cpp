// ---- Program Info Start----
//FileName:     testBigLittleEndian.cpp
//
//Author:       Fuchen Duan
//
//Email:        slow295185031@gmail.com
//
//CreatedAt:    2016-06-02 17:12:59
// ---- Program Info End  ----

#include <cstdio>

struct S{
    unsigned short a:4;
    unsigned short b:5;
    unsigned short c:7;
};

typedef unsigned char * char_ptr;

void show_bytes(char_ptr start, int len){
    int i;
    for(i=0; i<len; ++i)
        printf(" 0x%.2x", start[i]);
    printf("\n");
}

int main(int argc, char *argv[])
{
    struct S task;
    task.a = 2;
    task.b = 3;
    task.c = 0;

    printf("%d \n", *((short *)&task));
    show_bytes((char_ptr)&task, sizeof(task)/sizeof(char));

    return 0;
}
