#include<stdio.h>

int main(){
    /*
    //ARRAYS:
    int luckyNumber[6] = {4, 8, 15, 16, 23, 42};
    //           indexes- 0  1  2   3   4   5 
    //modify arrays:
    luckyNumber[0] = 60;
    printf("%d \n",luckyNumber[0]);
    printf("%d \n",luckyNumber[1]);
    */
    // N Dimensional  ARRAYS:
    int numberGrid[3][4] = {{1,2,3,1},{4,5,6,4},{7,8,9,7}};
    numberGrid[1][3] = 64;
    printf("%d\n",numberGrid[0][2]);
    printf("%d \n",numberGrid[1][3]);


    return 0;
}