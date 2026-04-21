#include <stdio.h>

int main() {
    char n[36];
    int b, len, add, sum = 0;

    scanf("%s %d", n, &b);
    for(int i=0; i<36; i++) {
        if(n[i] == '\0') {
            len = i;
            break;
        }
    }

    for(int i=len-1; i>=0; i--) {
        int pow = 1;

        for(int j=0; j<len-1-i; j++)
            pow *= b;

        if(n[i] >= 'A')
            add = n[i] - 'A' + 10;
        else
            add = n[i] - '0';

        sum += add * pow;
    }

    printf("%d\n", sum);
    return 0;
}
