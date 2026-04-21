#include <stdio.h>
#include <stdbool.h>

int main() {
    char w[100];
    scanf("%s", w);
    
    int len;
    for(int i=0; i<=100; i++) {
		if(w[i] == '\0') {
			len = i-1;
			break;
		}    	
	}
    
    bool is = true;
    for(int i=0; i<len; i++) {
    	if(w[i] != w[len-i])
    		is = false;
	}
	
	printf("%d", is);
    return 0;
}
