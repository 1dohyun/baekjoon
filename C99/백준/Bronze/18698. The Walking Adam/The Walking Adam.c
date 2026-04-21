#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	
	for(int i=0; i<t; i++) {
		char str[101];
		scanf("%s", str);
		
		int cnt = 0;
		for(int j=0; str[j]!='\0'; j++) {
			if(str[j]=='D')
				break;
			else
				cnt++;
		}
		
		printf("%d\n", cnt);
	}
	
	return 0;
}
