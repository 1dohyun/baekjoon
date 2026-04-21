#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    getchar();
    
    for(int i=0; i<n; i++) {
    	char str[1001];
    	scanf("%s", str);
    	
    	int j, k;
    	scanf("%d %d", &j, &k);
    	
    	for(int x=0; x<strlen(str); x++) {
    		if(x<j || x>=k)
    			putchar(str[x]);
		}
		putchar('\n');
	}
	
    return 0;
}
