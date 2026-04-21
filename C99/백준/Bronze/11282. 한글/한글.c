#include <stdio.h>

void print(int cp) {
    unsigned char b1, b2, b3;

    b1 = 0xE0 | ((cp >> 12) & 0x0F);
    b2 = 0x80 | ((cp >> 6) & 0x3F);
    b3 = 0x80 | (cp & 0x3F);

    putchar(b1);
    putchar(b2);
    putchar(b3);
}

int main() {
    int n;
    scanf("%d", &n);

    int cp = 0xAC00+n-1;
    print(cp);
    putchar('\n');

    return 0;
}
