char i[1000];
int i = 0;
#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)
#ifdef this_is_a_great_codo
問題：1から順番に数字を発言するのだけれども、その数字が3で割り切れれはFizzと発言して、5ならBuzz、１５でならFizzBuzzと発言する
for(int i = 1; i<= n; i++){
     if(i%15 == 0){
         System.out.println("FizzBuzz");
     } else if(i%3 == 0){
         System.out.println("Fizz");
     } else if(i%5 == 0){
         System.out.println("Buzz");
     } else {
         System.out.println(i);
     }
}
