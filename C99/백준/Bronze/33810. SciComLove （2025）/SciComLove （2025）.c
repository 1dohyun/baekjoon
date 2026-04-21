#include <stdio.h>

char view[11] = "SciComLove";

int main() {
	int cnt = 0;
	char str[11];
	
	scanf("%s", str);
	for(int i=0; str[i]!='\0'; i++) {
		if(str[i]!=view[i])
			cnt++;
	}
	
	printf("%d\n", cnt);
	return 0;
}
