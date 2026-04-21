#include <stdio.h>

int main() {
    int n, sum = 0;
    scanf("%d", &n);
    
    char str[101];
    scanf("%s", str);
    
    for(int i=0; i<n; i++) {
    	char c = str[i];
    	
    	if(c=='j') sum += 2;
    	if(c=='o') sum++;
    	if(c=='i') sum += 2;
	}
   
   	printf("%d\n", sum);
    return 0;
}
