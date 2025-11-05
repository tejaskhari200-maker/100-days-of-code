#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char s[100005], t[100005];

    // Read two whitespace-separated strings (assumes lowercase letters as stated)
    if (scanf("%100004s %100004s", s, t) != 2) return 0;

    int n = strlen(s);
    int m = strlen(t);

    if (n != m) {
        printf("Not Anagram\n");
        return 0;
    }

    int freq[26] = {0};

    for (int i = 0; i < n; ++i) {
        freq[s[i] - 'a']++;
    }
    for (int i = 0; i < m; ++i) {
        freq[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; ++i) {
        if (freq[i] != 0) {
            printf("Not Anagram\n");
            return 0;
        }
    }

    printf("Anagram\n");
    return 0;
}
