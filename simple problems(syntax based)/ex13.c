#include <stdio.h>
int main()
{
    FILE *mata =fopen("mata.txt","r");
    FILE *matb =fopen("matb.txt","r");
    FILE *sum =fopen("sum.txt","w");
    if (mata == NULL || matb == NULL) {
      printf("Unable to open files for reading.");
      return 0;
    }else{
        int a,b,i,j;
        for(i=0;i<10;i++){
            for(j=0;j<10;j++){
                fscanf(mata, "%d", &a);
                fscanf(matb, "%d", &b);
                if(j==9){
                    fprintf(sum, "%d\n", a + b);
                }
                else{
                    fprintf(sum, "%d\t", a + b);
                }
            }
        }
        printf("The sum of the matrices has been calculated into the file sum.usr.");
        fclose(mata);
        fclose(matb);
        fclose(sum);
    }
    return 0;
}
