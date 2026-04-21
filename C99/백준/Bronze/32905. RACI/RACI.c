#include <stdio.h>

int main() {
	int n, m, vcnt = 0;
	scanf("%d %d", &n, &m);
	
	for(int i=0; i<n; i++) {
		int acnt = 0;
		
		for(int j=0; j<m; j++) {
			char c;
			scanf(" %c", &c);
			
			if(c=='A')
				acnt++;
		}
		
		if(acnt==1)
			vcnt++;
	}
	
	if(vcnt==n)
		puts("Yes");
	else
		puts("No");
		
    return 0;
}
