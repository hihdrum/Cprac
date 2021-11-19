#include<stdio.h>
#include <stdlib.h>

/* セグメント違反が起きる。*/

int main(void)
{
   char *x = "abcde";
//    char y[] = { 'a', 'b', 'c', 'd', 'e', '\0'};
//    *x = *x + 1;
//    x[0] = 'b';
//    y[0] = y[0];


//    char *x = malloc(32);
    x[0] = 'b';

    return 0;
}

#if 0
int main(void)
{
    char *x = "abcde";

    int i;
    char c = 'c';
    int result = -1; //最初から入れておく

    char *check = x;

    i = 0;
    while( '\0' != *check)
    {
       if( c == *check)
       {
            result = i+1;
            printf("break\n");
            break;
        }

        printf("i=%d\n",i);
        i = i+1;

        *check = *check + 1;
        check = check + 1;
    }

    printf("cは%d文字目です。\n", result);

    return 0;
}

#endif
