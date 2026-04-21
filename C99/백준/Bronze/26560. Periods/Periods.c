#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    getchar();
    
    for(int i=0; i<n; i++) {
    	char str[101];
    	gets(str);
    	
    	if(str[strlen(str)-1]!='.')
    		printf("%s.\n", str);
    	else
    		printf("%s\n", str);
	}
	
    return 0;
}
