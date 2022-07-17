#include<stdio.h>

int main(){
    /*
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
    
    // Ternary conditions:
    int age ;
    printf("Enter age: ");
    scanf("%d",&age);

    age>=18 ? printf("Adult\n") : printf("Not Adult\n");
    
//Switch conditions:
    int day ; // m-mon;t-tues;w-wed
    printf("Enter day (1-7) : ");
    scanf("%S",&day);

    switch (day) {
        case 'm' : printf("Monday \n");
            break;
        case 't' : printf("Tuesday \n");
            break;
        case 'w' : printf("Wednesday \n");
            break;
        case 'T' : printf("Thursday \n");
            break;
        case 'f' : printf("Friday \n");
            break;
        case 's': printf("Satday \n");
            break;
        case 'S': printf("Sunday \n");
            break;
    default : printf("Not a Valid Day!! \n");
    }
    
    // Nested if statements:

    int number;
    printf("Enter a Number: ");
    scanf("%d",&number);
    
    if (number >= 0){
        printf("Positive number \n");
        if (number % 2 == 0){
            printf("Even number \n");
            }
            else {
                printf("Odd number \n");
            }

        }

    else {
        printf("Negatie number \n");
    }
// marks if case:

    int marks;
    printf("Enter marks (0 - 100) : ");
     scanf("%d",&marks);

    // if(marks >= 0 && marks <= 30 ){
    //     printf("Fail \n");
    // } 
    // else if (marks > 30 && marks <= 100){
    //     printf("Pass \n");
    // }else {
    //     printf("Wrong marks \n");
    // }
    // ternary conditions:

   //marks <= 30 ? printf("Fail \n") : printf(" Pass \n");
   
    if (marks < 30){
        printf("C \n");

    }
    else if (marks >= 30 && marks < 70 ){
        printf(" B \n");
    }
    else if (marks >= 70 && marks <90 ){
        printf(" A \n");
    }
    else{
        printf("A+ \n");
    }
    
    int x = 2;
    
    if (x = 0){

        printf("x is equal to 1 \n");
        printf("%d \n", x);
    }
    else {
        printf(" x is not equal to 1 \n");
    }
    
    char ch;
    printf("Enter a character : ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z'){
        printf("Upper case \n");
    }
    else if (ch >= 'a' && ch <= 'z'){
        printf("Lower case \n");
    }
    else {
        printf("Not English character");
    }

   */
    // check number is whole number or not:
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    if(n > 0){
        printf("Natural number \n");
    }
    else {
        printf("Whole number");
    }



    return 0;
}