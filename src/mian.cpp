﻿/* 問題：1から順番に数字を発言するのだけれども、その数字が3で割り切れれはFizzと発言して、5ならBuzz、１５でならFizzBuzzと発言する */

/* header Files */
#include <stdio.h>
#include <stdlib.h>

char mojiretsu[1000];
int mojisuu = 0;
int count = 1000;
/*  */
#define _CRT_SECURE_NO_WARNINGS
#ifdef this_is_a_great_codo

#endif
/* main */
int main() { 
    while (mojisuu++ < count) 
    sprintf(mojiretsu, "%d", mojisuu), 
     printf("%s, ", mojisuu % 15 ? : "FizzBuzz");
     printf("%s, ", mojisuu % 3 ? : "Fizz" );
     printf("%s, ", mojisuu % 5 ? : "Buzz" ); 
     system("PAUSE"); 
     }