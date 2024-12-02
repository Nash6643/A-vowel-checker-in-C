#include <stdio.h>
void isVowel(int word,int *array1){
    printf("Enter a character: ");
    scanf("%c",&word);
    for(int i = 0;i<5;i++)
    if(word==array1[i]){
        printf("yh, its a vowel");
    }else{
    }
            printf("Its not a vowel");
}
int main() {
    int word;
    int array1[] = {'a','e','i','o','u'};
isVowel(word,array1);

    return 0;
}
