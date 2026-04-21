#include <stdio.h>
#include <string.h>

int main() {
	char n[1000001];
	scanf("%s", n);
	
	int s = 0;
	for(int i=0; n[i]; i++)
		s = (s*10+(n[i]-'0'))%20000303;
	
	printf("%d\n", s);
	return 0;
}
