#include <stdio.h>
#include <ctype.h>
int main()
{
    int score;
    int sum=0;
    int count=0;
    char option;
    do {
        printf("Enter the score (4-10): ");
        scanf("%d", &score); 
        
        if(score >= 4 && score <= 10) {
            sum += score;
            count++;
        }
        
        printf("Do you have more scores left? (y/n): ");
        scanf(" %c", &option);
        option = tolower(option);
        
    } while(option == 'y');
    
    float average = 1.0f * sum / count;

    printf("You entered %d scores.\nAverage score: %.2f\n", count, average);
    
}
