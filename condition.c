#include <stdio.h>
int main() {
    int number;
    printf("enter the number:");
    scanf("%d",&number);
    if (number>0 && number % 2 ==0){
        printf("this number even\n");
    }else  (number >0 && number % 2==3){
        printf("this number oden\n");
    }
    return 0;
    
}