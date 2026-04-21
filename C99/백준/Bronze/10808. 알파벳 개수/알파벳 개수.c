#include <stdio.h>

int main() {
    char str[101];
    scanf("%s", str);
    
    for(int i='a'; i<='z'; i++) {
    	int count = 0;
    	for(int j=0; str[j]!='\0'; j++) {
    		if(str[j] == i)
    			count++;
		}
		printf("%d ", count);
	}
    
    return 0;
}
