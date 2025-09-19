#include<stdio.h>
#include<ctype.h>

int Vowel(const char *str)
{ 
    
    int count=0;

    while(*str)
    {
        char ch = tolower(*str);
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        {
            count++;
        }
        str++;
    }
    return count;
}

int main()
{
   
    char str[100];
    printf("Input : ");
    scanf("%[^\n]*c",str);
    printf("Output : NUmber of vowels : %d\n",Vowel(str));
    return 0;
}
