#include<stdio.h>

int main(){

    /*
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
    */
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

    return 0;
}