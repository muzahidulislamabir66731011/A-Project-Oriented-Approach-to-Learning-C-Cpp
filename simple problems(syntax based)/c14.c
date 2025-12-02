#include <stdio.h>
int main()
{
    char word[16];
    printf("The program calculates the number of vowels.\nEnter a word: ");
    scanf("%s",word);
    int i;
    int vowel=0;
    for(i=0;i<16;i++){
        if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' || word[i] == 'y'){
            vowel++;
        }
    }
    printf("The word contains %d vowels.", vowel);
    return 0;
}
