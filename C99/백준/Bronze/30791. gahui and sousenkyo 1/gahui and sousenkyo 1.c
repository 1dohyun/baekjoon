#include <stdio.h>

int main() {
    int votes[5];
    for(int i=0; i<5; i++)
    	scanf("%d", &votes[i]);
    	
    int top16 = votes[0];
    int cnt = 0;
    
    for(int i=1; i<5; i++) {
    	if(top16-votes[i]<=1000)
    		cnt++;
	}
	
	printf("%d\n", cnt);
    return 0;
}
