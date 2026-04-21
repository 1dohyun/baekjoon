#include <stdio.h>
	
int main() {
	int t, cnt;
	scanf("%d", &t);
	
	char str[50];
	for(int i=0; i<t; i++) {
		scanf("%s", str);
		cnt = 0;
		
		for(int j=0; str[j]!='\0'; j++) {
			cnt += str[j]=='(' ? 1 : -1;
			cnt -= cnt<0 ? 50 : 0;
		}
		
		printf("%s\n", cnt==0 ? "YES" : "NO");
	}
	
	return 0;
}
