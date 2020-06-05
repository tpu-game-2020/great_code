char mojiretsu[1000];
int mojisuu = 0;
/* header Files */
#include <stdio.h>
#include <stdlib.h>

/*  */
#define _CRT_SECURE_NO_WARNINGS
#ifdef this_is_a_great_codo
問題：1から順番に数字を発言するのだけれども、その数字が3で割り切れれはFizzと発言して、5ならBuzz、１５でならFizzBuzzと発言する
#endif
/* main */
int main() { 
    while (mojisuu++ < 1000) 
    sprintf(mojiretsu, "%d", mojisuu), 
     printf("%s, ", mojisuu % 15 ? mojisuu % 3 ? mojisuu % 5 ? mojiretsu : "Buzz" : "Fizz" : "FizzBuzz"); 
     system("PAUSE"); 
     }