#include<stdio.h>
int main()
{
    int vowel = 0, consonant = 0, count;
    char letter;

    for(count = 0; count<10; count++){
        printf("\nEnter letter a-z; ");
        scanf("\n%c", &letter);

        if((letter == 'a')||(letter == 'e')||(letter == 'i')||(letter == 'o')||(letter == 'u'))
        vowel++;
        else
        consonant++;
        
    }
    printf("\n***result***\n");
    printf("vowel(aa,e,i,o,u) = %d\n", vowel);
    printf("consonant = %d\n", consonant);

    return 0;
}