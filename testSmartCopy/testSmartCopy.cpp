// ---- Program Info Start----
//FileName:     testSmartCopy.cpp
//
//Author:       Fuchen Duan
//
//Email:        slow295185031@gmail.com
//
//CreatedAt:    2016-05-30 09:59:02
// ---- Program Info End  ----


#include <memory.h>
#define DUMBCOPY for(i=0; i<65536; ++i) \
              dest[i] = src[i];

#define SMARTCOPY memcpy(dest, src, 65536);

int main(int argc, char *argv[])
{
    char src[65536], dest[65536];
    int i,j;
    for(j=0; j<1000; ++j)
        //SMARTCOPY
        DUMBCOPY
    return 0;
}
