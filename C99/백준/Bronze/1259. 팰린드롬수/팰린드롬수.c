#include <stdio.h>

int main() {
	int len, count;
    char k[10];
    
    scanf("%s", k);
    while(k[0]!='0') {
    	len = -1;
    	count = 0;
    	
    	for(int i=0; k[i]!='\0'; i++)
    		len++;
    	for(int i=0; i<len; i++) {
    		if(k[i] == k[len-i])
    			count++;
		}
		
		printf("%s\n", len==count ? "yes" : "no");
		scanf("%s", k);
	}
	
    return 0;
}
