#include <stdio.h>
#include <string.h>

int main() {
	char mbti[5];
	scanf("%s", &mbti);
	
    int n, cnt = 0;
    scanf(" %d", &n);
    
    for(int i=0; i<n; i++) {
    	char f[5];
    	scanf("%s", f);
    	
    	if(strcmp(mbti, f)==0)
    		cnt++;
	}
	
	printf("%d\n", cnt);
    return 0;
}
