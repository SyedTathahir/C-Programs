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
    */
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
    return 0;
}