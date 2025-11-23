#include <stdio.h>

int main()
{
    int number;
    int factorial=1;
    int i;
    printf("Enter an integer :\n");
    scanf("%d",&number);
    for(i=1;i<=number;i++){
        factorial *=i;
    }
   printf("The factorial of %d is %d\n", number, factorial);
   return 0;
}
