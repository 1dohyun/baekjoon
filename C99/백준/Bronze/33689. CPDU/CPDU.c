#include <stdio.h>

int main() {
	int n, cnt = 0;
	scanf("%d", &n);
	
	for(int i=0; i<n; i++) {
		char str[21];
		scanf("%s", str);
		
		if(str[0]=='C')
			cnt++;
	}
		
	printf("%d\n", cnt);
	return 0;
}
