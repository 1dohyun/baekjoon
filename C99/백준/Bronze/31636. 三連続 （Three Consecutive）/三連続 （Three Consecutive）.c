#include <stdio.h>

int main() {
    int n;
    char str[100001];
    
    scanf("%d %s", &n, str);
    for(int i=0; i<n; i++) {
    	if(i+2>n)
    		break;
    	
    	if(str[i] == str[i+1] && str[i+1] == str[i+2] && str[i]=='o') {
    		printf("Yes\n");
    		return 0;
		}
	}
	
	printf("No\n");
    return 0;
}
