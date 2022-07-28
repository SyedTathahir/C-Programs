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

// variable scope :
local variable: will be  in function block only
it cannot be used outside a function hence we have 
to make new variable and assign the function to it.

Global variable : example given.


int result;// global variable.

void addNumbers(int num1,int num2){

    result = num1 + num2;
    printf("Result  = %d ", result);
}

int main (){

     addNumbers (99,1);

    return 0;
}
// declaration / protype:

void printHello();

int main (){
    printHello();// function call
    printHello();
    printHello();
     
    return 0;
}
//function defination:

void printHello(){
    printf("Hello!\n");
    printf("My name is Jonny\n");
}

//Q. write 2 functions "hello" & "goodbye"?

void printHello();
void printGoodbye();

int main(){

    printHello();
    printGoodbye();

    return 0;
}

void printHello(){

    printf("Hello!\n");
}
void printGoodbye(){

    printf("Goodbye\n");
}

//Q. if user hola for spanish bonjour for french?

void hola();
void bonjour();

int main(){
    printf("enter s for spanish & f for french:");
    char ch;
    scanf("%c",&ch);
    if (ch == 's'){
        hola();
    }else{
       bonjour();
    }
    return 0;


}
void hola(){
    printf("Hola!\n");
}
void bonjour(){
    printf("Bonjour!\n");

}

//properties:

-execution always starts from main

-a function gets called directly or indirectly from
main

-there can be multiple functions in a program



// Passing Arguments:
-Functions can take value called as parameter & 
give some value called as return value.
ex:
void printHello();

void printTable(int n);

int sum (int a, int b);



int sum (int a ,int b);


int main ( ){
    int a , b;
    printf("Enter First number: ");
    scanf("%d", &a);
    printf("Enter Second number: ");
    scanf("%d",&b);

    int s = sum (a,b);
    printf("Sum is %d ",s);


    return 0;
}

int sum (int x,int y){
    return x + y;
}

int sum (int a ,int b);
void printTable(int n);


int main ( ){
    int n;
    printf("Enter  number: ");
    scanf("%d", &n);
    
    printTable(n);//argument / actual parameter

    return 0;
}

int sum (int x,int y){
    return x + y;
}
void printTable(int n){//parameter/formal parameter
    for(int i=1;i<=10;i++) {
        printf("%d\n",i*n);
    }
}

// Arguments vs Parameters:
  1. values that are passed in function call
  1. values in function declaration & definition

  2. used to send values.
  2. used to receive values.

  3. actual parameter.
  3. formal parameter.

  Notes:
  1. function can only return one value at a time
  2. change to parameter in function don't change
     values in calling function.
     because a copy of argument is passed to function.


//ex:

void calculatePrice(float value);

int main (){
    float value = 100.0;
    calculatePrice(value);
    printf("Value is : %f \n",value);


    return 0;
}
void calculatePrice(float value){
    value = value + (0.18 * value);
    printf("Final price is: %f \n",value);
}

//Q.library function calculate sqaure of number?
// math.h pow(number,2)= number^2

int main(){
int n = 4;
printf("%f",pow(n,2));


return 0;
}
*/
//Q. calculate area of square,circle & rectangle.

float sqareArea(float side);
float circleArea(float rad);
float rectangleArea(float a ,float b);
int main (){
     float a = 5.0;
     float b = 10.0;
     printf("Area is : %f",rectangleArea(a,b));


    return 0;
}

float squareArea(float side){

    return side * side;
}
float circleArea(float rad){

    return 3.14 * rad * rad;
}
float rectangleArea(float a,float b){

    return a * b;
}