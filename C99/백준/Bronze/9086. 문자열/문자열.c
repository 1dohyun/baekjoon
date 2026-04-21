#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    
    char s[100];
    for(int i=1; i<=t; i++) {
        scanf("%s", s);
        for(int j=0; j<=100; j++) {
            if(s[j] == '\0') {
            	printf("%c%c\n", s[0], s[j-1]);
            	break;
			}
        }
    }
    
    return 0;
}
