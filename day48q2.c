#include <stdio.h>
#include <string.h>

void reverse(char *start, char *end) {
    char temp;
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char sentence[200];
    printf("Enter a sentence: ");
    gets(sentence);

    char *word_start = sentence;
    char *temp = sentence;

    while (*temp) {
        if (*temp == ' ') {
            reverse(word_start, temp - 1);
            word_start = temp + 1;
        }
        temp++;
    }
    // Reverse last word
    reverse(word_start, temp - 1);

    printf("Reversed each word: %s\n", sentence);
    return 0;
}
