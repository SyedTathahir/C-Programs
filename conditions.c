#include<stdio.h>

int main(){

    int age ;
    printf("Enter age : ");
    scanf("%d",&age);

    if(age > 18){
        printf("\nAdult");
        printf("\nThey can Vote");
        printf("\nThey can Drive");
    }
    else{
        printf("\nNot Adult");
    }
    printf("\nThank You");

    return 0;
}