#include <stdio.h>

int main() {
    char w[100] = {'\0',};
    scanf("%s", w);
    
    int len;
    for(int i=0; i<=100; i++) {
        if(w[i] == '\0') {
        	len = i;
        	break;
		}
    }
    
    printf("%d", len);
    return 0;
}
