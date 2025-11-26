#include <stdio.h>
int main()
{
    int days;
    do{
    printf("The program calculates the total hours worked during\na specific period and the average length of a day.\n");
    printf("How many days:");
    scanf("%d",&days);
    } while(days > 30);
    int i;
    float total=0;
    float hours[days];
    for(i=1;i<=days;i++){
        printf("Enter the working hours for day %d:", i);
        scanf("%f", &hours[i]);
        total += hours[i];
    }
    printf("\nTotal hours worked: %.1f\n", total);
    printf("Average length of day: %.1f\n",total/days);
    return 0;
}
