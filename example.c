#include <stdio.h>
#include <ctype.h>

int main(void) {
    char x;
    printf("char: ");
    scanf("%c", &x);

    char vowels[] = {'a', 'e', 'i', 'o', 'u'};
    int i;
    int isVowel = 0;
    for (i = 0; i < 6; i++) {
        if (tolower(x) == vowels[i]) {
            isVowel = 1;
            break;
        }
    }

    if (isVowel == 1) {
        printf("%c is a vowel", x);
    } else {
        printf("%c is a consonant", x);
    }
}