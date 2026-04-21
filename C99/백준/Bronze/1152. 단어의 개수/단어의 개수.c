#include <stdio.h>

int main() {
    char s[1000001];
    gets(s);

    int cnt = 0;
    int in = 0;

    for (int i=0; s[i]!='\0'; i++) {
        if (s[i]==' ' || s[i]=='\n') {
            in=0;
        } else {
            if (!in) {
                cnt++;
                in=1;
            }
        }
    }

    printf("%d\n", cnt);
    return 0;
}
