#include<stdio.h>
#include<math.h>

   // returnType functionName(){
   // .....
   // .....
   //}
/*
void greet(){
    printf("Good morning\n");
   }

int main(){  

    greet();
    greet();
    greet();
    greet();
    printf("Print After function call");



    return 0;
}
// Function parameter:

void calculateSquare(int number){
    int square = number * number;
    printf("Square of  %d is %d ",number , square);
}
int main(){
    calculateSquare(7);

    return 0;
}

void addNumber(int number1, int  number2){
    int sum = number1 + number2;
    printf("Sum of %d and %d is %d", number1 ,  number2, sum);

}
int main (){

    addNumber(6,9);

    return 0;
}

// return functions:

int addNumbers(int number1,int number2){

    int sum =  number1 + number2;
    return sum;
    printf("After return statement");// it will not
    // executed

}

int main (){

    int result = addNumbers(34,10);
    printf("Result is %d ", result);

    return 0;
}

// function prototype:

int addNumbers(int number1, int nubmer2);

int main (){

       int result = addNumbers(34,10);
    printf("Result is %d ", result); 

    return 0;
}
int addNumbers(int number1,int number2){

    int sum =  number1 + number2;
    return sum;
    printf("After return statement");

}

//standard library funcions:
<math.h>
sqrt() square root function.


int main(){

    float result = sqrt(25);
    printf("Square root is %f",result);

    return 0;
}


int multiplyTwo(int number1, int number2){
    
    printf("Enter Two number: ");
    scanf("%d,%d",&number1,&number2);

    int multiply = number1 * number2;
    printf("Multiplication of %d , %d is %d ",number1 ,number2,multiply);
}

int main (){
    
    int result = multiplyTwo(1,1);
   



    return 0;
}
*/

int productNumbers(int num1,int num2);

int main (){

    int result = productNumbers(4,7);
    printf("Result is %d ",result);


    return 0;
}
int productNumbers(int num1,int num2){

    int product = num1 * num2;
    return product;
    printf("After Return");
}