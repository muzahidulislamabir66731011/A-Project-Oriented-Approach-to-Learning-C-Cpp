#include <stdio.h>
int largest(int num1,int num2,int num3){
    int result=num1;
    if (num2>result) result=num2;
    if (num3>result) result=num3;
    return result;
}
int smallest(int num1,int num2,int num3){
    int result=num1;
    if (num2<result) result=num2;
    if (num3<result) result=num3;
    return result;
}
int main()
{
    int num1;
    int num2;
    int num3;
    printf("Enter the 1. number: ");
    scanf("%d",&num1);
    printf("Enter the 2. number: ");
    scanf("%d",&num2);
    printf("Enter the 3. number: ");
    scanf("%d",&num3);
    printf("Among the numbers you entered,\nthe largest was %d and the smallest was %d.", largest(num1,num2,num3), smallest(num1,num2,num3));

    return 0;
}
