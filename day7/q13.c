//Write a program to input a year and check whether it is a leap year or not using conditional statements.
#include <stdio.h>
int main(){
    int a;
    printf("Write year number");
    scanf("%d", &a);
    if (a % 4 == 0){
        printf("Its a leap year");
    }
    else{
        printf("Not a leap year");
    }
}
