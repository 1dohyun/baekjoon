#include <stdio.h>

int main() {
	char str[4];
	scanf("%s", str);
	
	int u=0, a=0, p=0, c=0;
	
	for(int i=0; str[i]!='\0'; i++) {
		switch(str[i]) {
			case 'U': u=1; break;
			case 'A': a=1; break;
			case 'P': p=1; break;
			case 'C': c=1; break;
		}
	}
	
	if(u==0)
		printf("U");
	if(a==0)
		printf("A");
	if(p==0)
		printf("P");
	if(c==0)
		printf("C");
	
	return 0;
}
