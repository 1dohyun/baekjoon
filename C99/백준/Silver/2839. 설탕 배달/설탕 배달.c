#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int cnt = n/5;
    while(cnt>=0) {
    	int r = n-cnt*5;
    	if(r%3==0) {
    		printf("%d\n", r/3+cnt);
    		return 0;
		}
		
		cnt--;
	}
	
	puts("-1");
    return 0;
}
