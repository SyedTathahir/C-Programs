#include<stdio.h>

int main(){
    
    int age = 22;
    int *ptr = &age;
    //int _age = *ptr;
    /*
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

    */
    // values at address print:

    printf("%d\n",age);
    
    printf("%d\n",*ptr);

    printf("%d\n",*(&age));
    


    return 0;
}