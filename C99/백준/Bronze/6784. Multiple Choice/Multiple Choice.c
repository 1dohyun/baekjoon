#include <stdio.h>

int main() {
	int n, cnt = 0;
	scanf("%d", &n);
	
	char s[10001];
	
	for(int i=0; i<n; i++)
		scanf(" %c", &s[i]);
	
	for(int i=0; i<n; i++) {
		char c;
		scanf(" %c", &c);
		
		if(s[i]==c)
			cnt++;
	}
	
	printf("%d\n", cnt);
	return 0;
}
