// ---- Program Info Start----
//FileName:     testThreadSharing.c
//
//Author:       Fuchen Duan
//
//Email:        slow295185031@gmail.com
//
//CreatedAt:    2016-07-30 15:11:22
// ---- Program Info End  ----

#include <pthread.h>
#include <stdio.h>

#define N 2

void * thread( void * vargp );

char ** ptr;

int main(int argc, char *argv[])
{
    int i;
    pthread_t tid;
    char * msg [N] = {
        "Hello from foo",
        "Hello from bar"
    };

    ptr = msg;
    for(i=0; i<N; ++i)
        pthread_create(&tid, NULL, thread, (void *) i);
    pthread_exit(NULL);

    return 0;
}

void * thread( void * vargp ){
    long myid = (long) vargp;
    static int cnt = 0;
    printf("[%x]: %s (cnt=%d)\n",& myid, ptr[myid], ++cnt);
    return NULL;
}
