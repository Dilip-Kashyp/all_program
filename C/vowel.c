#include <stdio.h>
int main(){
    int lowercase_vowel , uppercase_vowel ;
    char c ;

    printf("Enter the alphabet\n");
    scanf("%c",&c);

    lowercase_vowel = (c == 'a'|| c == 'e'||c == 'i'||c == 'o'||c == 'u');
    uppercase_vowel = (c == 'A' ||c == 'E' ||c == 'I' ||c == 'O' ||c == 'U' );

    if(lowercase_vowel  || uppercase_vowel)
        printf("%c alphabet is vowel\n",c);

    else 
        printf("%c alphabet is consonant\n",c);

        return 0 ;

        }