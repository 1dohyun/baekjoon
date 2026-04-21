#include <stdio.h>

int main() {
    int n, count = 0;
    char str[101];
    
    scanf("%d %s", &n, str);
    char c = str[0];
    
    for(int i=0; i<n; i++) {
    	if(str[i]==c)
    		count++;
	}
	
	printf("%s\n", n==count ? "Yes" : "No");
    return 0;
}
