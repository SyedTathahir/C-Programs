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
    */
    int n;
    printf("Enter number: ");
    scanf("%d",&n);

    int i =0;
    while(i<=n){
        printf("%d\n",i);
        i++;
    }
     



    return 0;
}
