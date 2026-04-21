#include <stdio.h>

int main() {
    int n, r;
    scanf("%d", &n);
    
    char s[20];
    for(int i=1; i<=n; i++) {
        scanf("%d %s", &r, s);
        for(int j=0; s[j]!='\0'; j++) {
            for(int k=1; k<=r; k++)
                printf("%c", s[j]);
        }
        printf("\n");
    }
    return 0;
}
