// ---- Program Info Start----
//FileName:     testBusErr.cpp
//
//Author:       Fuchen Duan
//
//Email:        slow295185031@gmail.com
//
//CreatedAt:    2016-05-30 17:30:00
// ---- Program Info End  ----


int main(int argc, char *argv[])
{
    //long int i[5];
    //long int j;
    //i[0] = 65536+2;
    //i[1] = 65536*3 + 4;
    //j = * ((long int *) ((char *)i + 3));

    short arr[16];

    int *p =(int *) & arr[1];
    *p = 1;
    return 0;
}
