#include <stdio.h>

int main() {
    int n, cnt = 0;
    scanf("%d", &n);
    
    for(int i=0; i<n; i++) {
    	int date;
    	scanf(" D-%d", &date);
    	
    	if(date<=90)
    		cnt++;
	}
	
	printf("%d\n", cnt);
    return 0;
}
