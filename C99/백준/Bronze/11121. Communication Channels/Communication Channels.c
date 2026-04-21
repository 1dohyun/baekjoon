#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);
    
    char in[121], out[121];
    
    for(int i=0; i<t; i++) {
    	scanf("%s %s", in, out);
    	if(strcmp(in, out)==0)
    		puts("OK");
    	else
    		puts("ERROR");
	}
	
    return 0;
}
