#include <stdio.h>
int main()
{
    char firstname[16],lastname[21],filename[13];
    printf("The program saves your first and last name into a file.");
    printf("Enter your first name: ");
    scanf("%s",firstname);
    printf("Enter your last name: ");
    scanf("%s",lastname);
    printf("File where you want to save your name: ");
    scanf("%s",filename);
    FILE *file = fopen(filename, "w");
    fprintf(file, "%s %s", firstname, lastname);
    printf("Successfully saved the data!");
    fclose(file);
    return 0;
}
