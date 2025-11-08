#include <stdio.h>
#include <ctype.h> // for toupper()

int main() {
    FILE *in, *out;
    char ch;

    in = fopen("input.txt", "r");
    out = fopen("output.txt", "w");

    if (in == NULL || out == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    while ((ch = fgetc(in)) != EOF) {
        if (ch >= 'a' && ch <= 'z')
            ch = ch - 32;   // convert to uppercase manually
        fputc(ch, out);
    }

    fclose(in);
    fclose(out);

    printf("Conversion completed! Check output.txt\n");
    return 0;
}
