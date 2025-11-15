#include <stdio.h>

int main(void){
    int num;
    printf("Enter your number: ");
    scanf("%d", &num);
    if(num%2==0){
        printf("The number is Even");
    }
    else{
        printf("The number is Odd");
    }
  return 0;
}
