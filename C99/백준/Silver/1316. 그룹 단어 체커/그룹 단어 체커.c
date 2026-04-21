#include <stdio.h>

int main() {
    int n, cnt = 0;
    scanf("%d", &n);

    while (n--) {
        char s[101];
        int alp[26] = {0,};
        int is = 1;
        char prev = 0;

        scanf("%s", s);

        for (int i=0; s[i]!='\0'; i++) {
            if (s[i]!=prev) {
                if (alp[s[i]-'a']) {
                    is = 0;
                    break;
                }
                alp[s[i]-'a'] = 1;
            }
            prev = s[i];
        }

        if(is == 1)
			cnt++;
    }

    printf("%d\n", cnt);
    return 0;
}
