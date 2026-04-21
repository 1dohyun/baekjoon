#include <stdio.h>
#include <string.h>

int main() {
	int depth = 0;
	
    for(int i=0; i<4; i++) {
    	char str[6];
    	scanf("%s", str);
    	
    	int x;
    	scanf("%d", &x);
    	
    	if(strcmp(str, "Stair")==0)
    		depth += x*17;
    	else
    		depth += x*21;
	}
    
    printf("%d\n", depth);
    return 0;
}
