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


int fact(int n);


int main(){

    printf("Factorial is %d",fact(5));

    return 0;
}
int fact(int n){
    if (n == 0 ){
        return 1;
    }

    int factNm1 = fact(n - 1);
    int factN   = factNm1 * n;
    return factN;
}
//Properties of Recursion:
1. anything that can be done with iteration/loops,
can be done with recursion and vice-versa.
2.recursion can sometimes give the most simple solutions
3.Base Case is the condition which stops recursion
4.iteration has infinite loop & recursion has STACK OVERFLOW.

//Q.convert celsius to fahrenheit?

float converTemp(float celsius);

int main (){
    float far = converTemp(37);
    printf("Far : %f",far);
    return 0;
}
float converTemp(float celsius){
    float far = celsius *(9.0/5.0) + 32;
    return far;
}

//Q.percentage of marks in science,maths,english?

int caclPercentage(int science,int math ,int english);

int main (){
    int science = 98;
    int math = 99;
    int english = 96;

    printf("Percentage is : %d ",calcPercentage(science,math,english));

    return 0;
}
int calcPercentage(int science,int math ,int english){
    return((science + math + english) / 3);
}
*/
//Q.print n terms of fibonacci series?

int fib(int n);

int main (){
    printf("Fibonacci is : %d",fib(6));


    return 0;
}
int fib (int  n){
    if (n == 0 || n == 1){//Base Case
        if (n == 0){
            return 0;
        }
        if (n == 1){
            return 1;
        }
    }

    int fibNm1 = fib(n - 1);
    int fibNm2 = fib(n - 2);
    int fibN = fibNm1 + fibNm2;
    //printf("Fib of %d is : ", n ,fibN);
    return fibN;

}