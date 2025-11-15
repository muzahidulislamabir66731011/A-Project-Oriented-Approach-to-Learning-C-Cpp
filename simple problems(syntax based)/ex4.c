#include <stdio.h>

void addition(float num1,float num2){
  printf("%f+%f=%.2f",num1 ,num2 , num1+num2);
}
void subtraction(float num1,float num2){
    printf("%f-%f=%.2f",num1 ,num2 , num1-num2);
}
void multiplication(float num1,float num2){
    printf("%fx%f=%.2f",num1 ,num2 , num1*num2);
}

void division(float num1,float num2){
    printf("%f/%f=%.2f",num1 ,num2 , num1/num2);
}

int main(void){
    float num1;
    float num2;
    char operator;
    printf("Enter number 1:");
    scanf("%f",&num1);
    printf("Enter number 2:");
    scanf("%f",&num2);
    printf("Select your operator:");
    scanf(" %c",&operator);
    if(operator =='+'){
        addition(num1,num2);
    }
    else if(operator =='-'){
        subtraction(num1,num2);
    }
    else if(operator =='*'){
        multiplication(num1,num2);
    }
    else if(operator =='/'){
        division(num1,num2);
    }
  return 0;
}
