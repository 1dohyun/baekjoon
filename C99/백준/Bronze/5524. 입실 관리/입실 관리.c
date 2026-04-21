#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    char str[21];
    for(int i=0; i<n; i++) {
    	scanf("%s", str);
    	
    	for(int i=0; str[i]!='\0'; i++) {
    		if(str[i]<'a')
    			printf("%c", str[i]+('a'-'A'));
    		else
    			printf("%c", str[i]);
		}
		
		putchar('\n');
	}

    return 0;
}