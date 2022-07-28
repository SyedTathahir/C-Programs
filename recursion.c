#include<stdio.h>

/*
void printHW(int count);

int main(){
    printHW(5);

    return 0;
}

//recursive function:
void printHW(int count){

    if(count == 0 ){
        return;
    }

    printf("Hello World\n");
    printHW(count- 1);
}

//Recursion maths:
  f(x) = x^2
  f(f(f(x))) for x = 2
  f(2) = 2^2 = 4
  f(4) = 4^2 = 16
  f(16) = 16 ^ 2 = 256
//Normal function call:
function call another function and do task and return
to main function.
//Recursion function call:
it calls itself.
// base case.

*/

//Q.sum of n natural numbers?

int  sum(int n );

int main (){
    printf("Sum is : %d ",sum (5));

    return 0;
}
//recursive function

int sum(int n){
    if (n==1){
        return 1;
    }
    int sumNm1 = sum (n-1); // sum of 1 to n
    int sumN = sumNm1 + n;
    return sumN;
}
