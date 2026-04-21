#include <stdio.h>

int main() {
    int n, len = 0;
	char temp[20], tar[20];
    scanf("%d", &n);
    
    int stk[10000] = {0};
    for(int i=0; i<n+1; i++) {
    	gets(temp);
    	
    	if(temp[0] == 's')
    		printf("%d\n", len);
    	
    	if(temp[0] == 'e')
    		printf("%d\n", len>0 ? 0 : 1);
    	
    	if(temp[0]=='t')
    		printf("%d\n", len==0 ? -1 : stk[len-1]);
    	
    	if(temp[0] == 'p') {
    		if(temp[1] == 'o') {
    			if(len==0)
    				printf("-1\n");
    			else {
    				printf("%d\n", stk[len-1]);
    				stk[--len] = 0;	
				}
			} else {
				int x;
				sscanf(temp+5, "%d", &x);
				stk[len++] = x;
			}
		}
	}

    return 0;
}
