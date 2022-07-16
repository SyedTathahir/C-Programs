#include <stdio.h>
#include <math.h>

int main (){
    /*
    int a = (int)1.999999;
    printf("%d\n",a);

    // operator precedence
    //*,/,%
    //+,-
    //= 'assignment'
    
    printf("%f\n", 4 / 2.0);
    printf("%d\n", 2 / 3);
    printf("%f \n", 3.0 / 2);
    
    int a = (int) 1.999999;
    printf("%d \n", a);

printf("%d\n",4==4);
printf("%d\n",3==4);
printf("%d\n",3>4);
printf("%d\n",3>=3);
printf("%d\n",4>3);
printf("%d\n",4>5);
printf("%d\n",4>=4);
printf("%d\n",4>=5);
printf("%d\n",4 == 4);
printf("%d\n",4 != 4);
printf("%d\n",4 != 3);

// logical operators
// && AND logical operator ,& bitwise operator
printf("%d \n", 4>3 && 5>2);
printf("%d \n",4>3 && 2>5);
// || OR logical operator only one true o/p = true
printf("%d\n", 3>4 || 5>2);
// ! NOT logical operator Reverses output

printf("%d\n",!( (5>3) && (3>4)));

// operator precedence
1. ! not operator
2. *,/,% " "
3. +,-   " "
4. <,<=,>,>= relational operators
5. == , != equal to , not equal to
6. &&, || logical operators
7. = 

Assignment operator
=
+=
-=
*=
/=
%=
short hand operators




int a = 1;
int b = 4;

//a -= b;
a %= b;

printf("%d\n",a);

// number divisible by 2 :
int x ;
printf("Enter a Number : ");
scanf("%d",&x);

printf("%d", x % 2 == 0);

// even or odd:
// valid or not:
// XOR ^ we have to use pow ()

printf("%d", 8^8);

terminator ';'
int x; int y = x;

char  stars = '* ';// invalid

int isSunday = 1;
int isSnowing = 1;
printf("%d\n", isSunday && isSnowing);

int isMonday = 1 ;
int isRaining = 0;

printf("%d\n", isMonday || isRaining);


// if a number is greater than 9 and less than 100
int x ;
printf("Enter the number : ");
scanf("%d",&x);
printf("%d", (x>9) && (x<100));

// average and  of 3 no.
int a,b,c; 
float d;

printf("Enter 3 number: ");
scanf("%d%d%d",&a,&b,&c);

d = (a+b+c)/3;
printf("\n Average is : %f",d);

// average and sum of 5 numbers
int a,b,c,d,e,sum;
float f;
printf("Enter 5 numbers");
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
sum = a+b+c+d+e;
f   = (a+b+c+d+e)/5;
printf("\nSum is : %d",sum);
printf("\n Average is : %f",f);

// Smallest Number:?
? = (condition)? (true ): (false)
*/
int num1,num2;
printf("Enter the number 1: ");
scanf("%d",&num1);
printf("Enter the number 2: ");
scanf("%d",&num2);
printf("\nSmallest number is:\n%d ",num2>num1 ? num1:num2);


    return 0;
}