#include <stdio.h>
int main() {
    int number;
    printf("enter the number:");
    scanf("%d",&number);
    if (number>0) {
        if (number % 2 ==0){
            printf("positive and even\n");
        }else{
            printf("postive and odd\n");
        }
    else if(number <0){
        printf("negative number\n");
        }
    else{
        printf("zero?");
    }
    return 0;
    
}
