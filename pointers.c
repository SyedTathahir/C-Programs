#include<stdio.h>

void sqaure(int n);
void _square(int *n);

int main(){

    /*
    A variable that stores memory address of another
    variable is called variable.

    int age = 22;
    int *ptr = &age;
    //int _age = *ptr;
    
    printf("%d",_age);
    Declaring pointer:
    int *ptr
    char *ptr
    float *ptr

    Format Specifier:
    printf("%p", &age);
    printf("%p",ptr);
    printf("%p",&ptr);
    * = value at address

    //Address print:
   printf("%p\n",&age);

   printf("%u\n",ptr);

   printf("%u\n",&ptr);

    
    // values at address print:

    printf("%d\n",age);
    
    printf("%d\n",*ptr);

    printf("%d\n",*(&age));
    
    int x;
    int *ptr;

    ptr = &x;
    *ptr = 0;// x = 0

    printf("x is %d\n",x);// 0 
    printf("*ptr is %d\n",*ptr);// 0

    *ptr = 5;
    printf("x is %d\n",x);// x = 5
    printf("*ptr is %d\n",*ptr);// 5

    (*ptr)++;
    printf("x is %d\n",x);//x=6
    printf("*ptr is %d\n",*ptr);// 6
    
    // pointer to pointer:
   //A variable that stores the memory address of 
   //another pointer .
   int **pptr;

   char **pptr;

   float **pptr;

   
  float price = 100.00;
  float *ptr = &price;
  float **pptr = &*ptr;
  
 //Q.print value of i from its pointer to pointer?
    int i = 5;
    int *ptr = &i;
    int **pptr = &ptr;

    printf("%d\n",&pptr);//address of pptr
    printf("%d\n",*pptr);// adress of ptr
    printf("%d\n",**pptr);// value of pptr
    
   //Pointers in function call:
   1.call by value- we pass value of variables as
   arguements.
   2.call by Reference- we pass address of variables 
   as arguments.
 
   int number = 4;
   square(number);
   printf("number = %d\n ", number);
   
   _square(&number);
   printf("number = %d\n ", number);


    return 0;
}
*/
}
//call by value:
void square (int n ){

    n = n * n;
    printf("square = %d\n",n);
}
//call by Reference:
void _square(int *n){
   *n =(*n) * (*n);
    printf("square = %d\n",*n);
}  
//Q.swap 2 numbers a&b?

