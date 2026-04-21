#include <stdio.h>

int main() {
    char s[100];
    
    for(int i=1; i<=100; i++) {
        if(gets(s) == NULL)
        	break;
        printf("%s\n", s);
    }
    return 0;
}
