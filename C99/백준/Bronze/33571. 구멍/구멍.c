#include <stdio.h>

char view[] = "AabDdegOoPpQqR@";

int main() {
	char str[1001];
	gets(str);
	
	int cnt = 0;
	for(int i=0; str[i]!='\0'; i++) {
		int found = 0;
		
		for(int j=0; view[j]!='\0'; j++) {
			if(str[i]==view[j]) {
				found = 1;
				break;
			}
		}
		
		if(str[i]=='B')
			cnt += 2;
		else if(found == 1)
			cnt++;
	}
	
	printf("%d\n", cnt);
	return 0;
}
