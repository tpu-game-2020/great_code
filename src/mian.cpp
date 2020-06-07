/* 問題：1から順番に数字を発言するのだけれども、その数字が3で割り切れれはFizzと発言して、5ならBuzz、１５でならFizzBuzzと発言する */

/* header Files */
#include <stdio.h>
#include <stdlib.h>

/*  */
#ifdef this_is_a_great_codo

#endif
/* main */
int main()
 { 
     const int MAX_COUNT = 1000 ;
    for (int i = 1; i < MAX_COUNT; i++)
    {  
        if (i % 15 == 0) printf("FizzBuzz, ");
        else if (i % 5 == 0) printf("Buzz, ");
        else if (i % 3 == 0) printf("Fizz, ");
        else printf("%d, ",i);
    }
    system("PAUSE"); 
}
