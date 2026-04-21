#include <stdio.h>

int main() {
    int n, num, s, m, t;
    scanf("%d", &n);
    
    for(int i=0; i<n; i++) {
    	scanf("%d %d %d %d", &num, &s, &m, &t);
    	if(s+m+t<55 || s<10.5 || m<7.5 || t<12)
    		printf("%d %d FAIL\n", num, s+m+t);
    	else
    		printf("%d %d PASS\n", num, s+m+t);
	}
    	
    return 0;
}
