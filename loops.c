#include<stdio.h>
int main(){
    /*
    for(float i = 1.0 ; i <= 5.0;i++){
        printf("%f \n",i);
    }

    for(char ch='a'; ch<='z';ch++){
        printf("%c \n",ch);
    }
    
    //while loop:
    int i = 1;
    while (i<=7){
        printf("Hello world\n");
        i++;
    }
    
    int n;
    printf("Enter number: ");
    scanf("%d",&n);

    // int i =0;
    // while(i<=n){
    //     printf("%d\n",i);
    //     i++;
    // }
    for(int i = 0;i<=n;i++){
        printf("%d\n",i); 
    }
       
    // do while:
    // int i = 1;
    // do {
    //     printf("%d\n ",i);
    //     i++;

    // }while(i<=5);

     int i = 5;
    do {
        printf("%d \n",i);
        i--;

    }while(i>=1);
    
    // print sum of first n natural numbers:

    int n;
    printf("Enter number: ");
    scanf("%d",&n);

    int sum = 0;
    for(int j = n ; j >= 1;j--){
        sum = sum + j;
        printf("%d\n",j);

    }
     printf("Sum is %d \n",sum);
    // // reverse them
    // for(int i =n;i>= 1;i--){
    //     printf("%d\n",i);
    // }
    
    int n ;
    printf("Enter Number: ");
    scanf("%d",&n);

    for(int i = 1;i<=10;i++){
        printf("%d\n", n*i);
    }
    
   // break :
//    for (int i = 1;i<=5;i++){
//         if(i==3){
//             break;
//         }

//         printf("%d\n",i);

//    }
//    printf("end\n");
//Q.keep taking numbers as input from user until user
// enter an odd number:
   int n;
    printf("Enter number : ");

   do{scanf("%d",&n);
      printf("%d\n",n);
     if (n%2 != 0){
        break;
     }

   }while(1);
   printf("Thankyou!!");
    
   // multiple of 7 :
   int n;
   

   do{
    printf("Enter number: ");
    scanf("%d",&n);
    printf("%d\n",n);
    if( n % 7 == 0){
        break;
    }

   }
   while(1);
   printf("Thankyou!!!!!!!!!");
    
   // continue:skip to next iteration.
   for (int i = 1;i<=5;i++){
    if(i == 3){
        continue;
    }
    printf("%d\n",i);
    
   }
   
  // print all no. from 1 to 10 except 6?
   for(int i =1 ; i<=10 ; i++){
       if (i == 6){
        continue;
       }
    printf("%d\n",i);
   }
   
   // print all odd no. from 5 to 50?
    for (int i = 5 ; i<= 50;i++ ){
        if(i%2 != 0 ){
            printf("%d\n",i);
        }
    }
    
    //Q. print factorial number n?
    // 1! = 1
    //2! = 1*2 = 2
    //3! =  1*2*3 = 6
    // sum = 0 , multiply = 1
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    int fact = 1;
    for(int i = 1;i<=n;i++){
        fact = fact * i;
    }
    printf("final factorial is %d",fact);
    
    //    Q. reverse table of 2?
    
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    // reverse of table 
    // for (int i = 10 ; i>=1; i--){
    //     printf("%d\n",n*i);
    // }
    for(int i = 1;i<=10;i++){
        printf("%d\n",n* i);
    }
   */
   //Q. sum of 5 to 50 ?
   int sum = 0;
   for (int i = 5 ;i<=50;i++){
    sum += i;
   }
   printf("Sum : %d\n",sum);
   
   


    return 0;
}
