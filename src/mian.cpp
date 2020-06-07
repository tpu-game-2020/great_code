/* 問題：1から順番に数字を発言するのだけれども、その数字が3で割り切れれはFizzと発言して、5ならBuzz、１５でならFizzBuzzと発言する */

/* header Files */
#include <stdio.h>
#include <stdlib.h>

//char mojiretsu[1000];
//int mojisuu = 0;
//int count = 1000;

/*  */
#define _CRT_SECURE_NO_WARNINGS
#define MAXCOUNT 1000
#ifdef this_is_a_great_codo

#endif
/* main */
int main() { 
    //while (mojisuu++ < count) 
    for (int i = 0; i < MAXCOUNT; i++)
    {
        //sprintf(mojiretsu, "%d", mojisuu); 
        if (i % 15 == 0) printf("FizzBuzz");
        else if (i % 5 == 0) printf("Buzz");
        else if (i % 3 == 0) printf("Fizz");
        else printf("%d, ",i);
    }
    system("PAUSE"); 
    // }