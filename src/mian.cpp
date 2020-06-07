char i[1000];
int n = 0;
#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)
#ifdef this_is_a_great_codo
問題：1から順番に数字を発言するのだけれども、その数字が3で割り切れれはFizzと発言して、5ならBuzz、１５でならFizzBuzzと発言する
#endif
int main() 
{
  while (n++ < 1000)sprintf(i, "%d", n), 
  printf("%s, ", n % 15 ? n % 3 ? n % 5 ? i : "Buzz" : "Fizz" : "FizzBuzz");
}
