//Variables rules:
//1. variables are case sensitive
//2. 1st character is alphabet or "_" only
//3. no comma / blank space
//4. no other symbol other than "_"
// input scanf("%d",&age )&=address,format specifier=%d
//age is variable


# include<stdio.h>


int main(){
    /*
    printf("Hello World!!\n");
    int number = 25;
    char star = '*';
    int age = 22;
    float pi = 3.14;
    
    int age;
    printf("Enter age ");
    scanf("%d",&age);
    printf("Age is : %d",age );

    int a, b;
    printf("Enter a ");
    scanf("%d",&a);

    printf("Enter b ");
    scanf("%d",&b);

    printf("Sum is : %d",a * b );
    
    // area of square
    float side;
    printf("Enter Side ");
    scanf("%f",&side);

    printf("Area is : %f", side * side);
    */
    float radius;
    printf("Enter radius ");
    scanf("%f",&radius);

    printf("Area is : %f",3.14 * radius * radius);




    return 0;
}