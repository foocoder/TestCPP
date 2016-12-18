// ---- Program Info Start----
//FileName:     testBacktrace.cpp
//
//Author:       Fuchen Duan
//
//Email:        slow295185031@gmail.com
//
//CreatedAt:    2016-12-18 11:11:46
// ---- Program Info End  ----
#include <execinfo.h>
#include <stdlib.h>
#include <stdio.h>
void do_gnu_backtrace()
{
#define BACKTRACE_SIZ 100
    void *array[BACKTRACE_SIZ];
    size_t size, i;
    char **strings;

    size = backtrace(array, BACKTRACE_SIZ);
    strings = backtrace_symbols(array, size);

    for (i = 0; i < size; ++i) {
        printf("%p : %s\n", array[i], strings[i]);
    }

    printf("---------------------------------------------------------\n");
    free(strings);
}
int foo()
{
    do_gnu_backtrace();
    return 0;
}
int bar( void )
{
    foo();
    return 0;
}
int boo( void )
{
    bar();
    return 0;
}
int baz( void )
{
    boo();
    return 0;
}
int main( void )
{
    baz();
    return 0;
}
