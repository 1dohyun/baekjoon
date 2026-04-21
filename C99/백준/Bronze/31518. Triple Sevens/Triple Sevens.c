#include <stdio.h>

int main() {
    int n, cnt[3];
    scanf("%d", &n);
    
    for(int i=0; i<3; i++) {
    	for(int j=0; j<n; j++) {
    		char c;
    		scanf(" %c", &c);
    		
    		if(c=='7')
    			cnt[i] = 1;
		}
	}
	
	if(cnt[0]==1 && cnt[1]==1 && cnt[2]==1)
		puts("777");
	else
		puts("0");
		
    return 0;
}
