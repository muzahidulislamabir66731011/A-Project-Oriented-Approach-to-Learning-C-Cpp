#include <iostream>
int main()
{
    char word[16];
    std::cout<<"The program calculates the number of vowels.\nEnter a word: ";
    std::cin>>word;
    int i;
    int vowel =0;
    for(i=0;i<16;i++){
        if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' || word[i] == 'y'){
            vowel++;
        }
    }
    std::cout<<"The word contains "<<vowel<<" vowels";
    return 0;
}
