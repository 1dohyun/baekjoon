#include <stdio.h>

int main() {
    int n, m, total = 0;
    scanf("%d %d", &n, &m);
    
    for(int i=0; i<n; i++) {
    	int cnt = 0;
    	
    	for(int j=0; j<m; j++) {
    		char c;
    		scanf(" %c", &c);
    		
    		if(c=='O')
    			cnt++;
		}
		
		if(cnt>m/2)
			total++;
	}
    
    printf("%d\n", total);
    return 0;
}
