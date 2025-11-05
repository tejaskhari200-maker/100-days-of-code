#include <stdio.h>
#include <string.h>

int main() {
    char s[100005];
    if (scanf("%100004s", s) != 1) return 0;  // read single token (no spaces)

    int last[256];              // store last index of each ASCII char
    for (int i = 0; i < 256; ++i) last[i] = -1;

    int n = strlen(s);
    int maxLen = 0;
    int start = 0;             // start index of current window

    for (int i = 0; i < n; ++i) {
        unsigned char c = (unsigned char)s[i];
        if (last[c] >= start) {
            // character repeated inside current window -> move start
            start = last[c] + 1;
        }
        last[c] = i;           // update last seen index
        int curLen = i - start + 1;
        if (curLen > maxLen) maxLen = curLen;
    }

    printf("%d\n", maxLen);
    return 0;
}
