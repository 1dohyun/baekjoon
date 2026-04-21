#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    char s[101], t[101];
    scanf("%s %s", s, t);
    
    int diff = 0;
    for(int i=0; i<n; i++) {
    	if(s[i]!=t[i])
    		diff++;
	}
	
	printf("%d\n", diff);
    return 0;
}
