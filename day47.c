#include <stdio.h>
#include <string.h>
#include <ctype.h>

void toLowerCase(char str[]) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}

int main() {
    char str1[100], str2[100];
    int count1[256] = {0}, count2[256] = {0};

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    toLowerCase(str1);
    toLowerCase(str2);

    for (int i = 0; str1[i] != '\0'; i++)
        count1[(int)str1[i]]++;

    for (int i = 0; str2[i] != '\0'; i++)
        count2[(int)str2[i]]++;

    int flag = 1;
    for (int i = 0; i < 256; i++) {
        if (count1[i] != count2[i]) {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("✅ The strings are anagrams.\n");
    else
        printf("❌ The strings are not anagrams.\n");

    return 0;
}
