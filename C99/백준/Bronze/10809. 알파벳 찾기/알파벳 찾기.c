#include <stdio.h>

int main() {
    char s[100];
    scanf("%s", s);
    
    int len;
    for(int i=0; i<=100; i++) {
    	if(s[i] == '\0') {
    		len = i;
    		break;
		}
	}
    
    for(int i='a'; i<='z'; i++) {
    	for(int j=0; j<len; j++) {
    		if(s[j] == i) {
    			printf("%d ", j);
    			break;
			}
    		else if(j == len-1)
    			printf("-1 ");
		}
	}
	
    return 0;
}
