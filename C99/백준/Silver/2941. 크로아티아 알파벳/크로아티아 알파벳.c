#include <stdio.h>
#include <string.h>

int main() {
    char s[101];
    scanf("%s", s);

    int cnt = 0;
    int i = 0;

    while (s[i] != '\0') {
        if (s[i] == 'd' && s[i+1] == 'z' && s[i+2] == '=') {
            i += 3;
        }
        else if ((s[i] == 'c' && (s[i+1] == '=' || s[i+1] == '-')) ||
                 (s[i] == 'd' && s[i+1] == '-') ||
                 (s[i] == 'l' && s[i+1] == 'j') ||
                 (s[i] == 'n' && s[i+1] == 'j') ||
                 (s[i] == 's' && s[i+1] == '=') ||
                 (s[i] == 'z' && s[i+1] == '=')) {
            i += 2;
        }
        else {
            i += 1;
        }
        cnt++;
    }

    printf("%d\n", cnt);
    return 0;
}
