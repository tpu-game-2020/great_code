/* 問題：1から順番に数字を発言するのだけれども、その数字が3で割り切れれはFizzと発言して、5ならBuzz、１５でならFizzBuzzと発言する */

/* header Files */
#include <stdio.h>
#include <stdlib.h>


/*  */
#define _CRT_SECURE_NO_WARNINGS
#define MAXCOUNT 1000
#ifdef this_is_a_great_codo

#endif
/* main */
int main()
 { 
    //while (mojisuu++ < count) 
    for (int i = 1; i < MAXCOUNT; i++)
    {   int mojisu = i;
        if (mojisu % 15 == 0) printf("FizzBuzz, ");
        else if (mojisu % 5 == 0) printf("Buzz, ");
        else if (mojisu % 3 == 0) printf("Fizz, ");
        else printf("%d, ",mojisu);
    }
    system("PAUSE"); 
}
