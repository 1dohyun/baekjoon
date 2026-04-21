#include <stdio.h>
#include <string.h>

int main() {
    int m, x, s[20] = {0};
    scanf("%d", &m);
    
    char c[100];
    for(int i=0; i<m; i++) {
    	scanf("%s", c);
    	
    	if(strcmp(c, "all")==0) {
    		for(int i=0; i<20; i++)
    			s[i] = i+1;
		}
		
		if(strcmp(c, "check")==0) {
			scanf("%d", &x);
			printf("%d\n", s[x-1]!=0 ? 1 : 0);
		}
			
		if(strcmp(c, "toggle")==0) {
			scanf("%d", &x);
			s[x-1] = s[x-1]==0 ? x : 0;
		}
			
		if(strcmp(c, "add")==0) {
			scanf("%d", &x);
			s[x-1] = x;
		}
			
		if(strcmp(c, "remove")==0) {
			scanf("%d", &x);
			s[x-1] = 0;
		}
		
		if(strcmp(c, "empty")==0) {
			for(int i=0; i<20; i++)
				s[i] = 0;
		}
	}
	
    return 0;
}
