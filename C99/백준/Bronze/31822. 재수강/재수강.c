#include <stdio.h>
#include <string.h>

int main() {
	char recode[11];
	scanf("%s", recode);
	
	char redigits[6];
	strncpy(redigits, recode, 5);
	redigits[5] = '\0';
	
	int n, cnt = 0;
	scanf("%d", &n);
	
	for(int i=0; i<n; i++) {
		char code[11];
		scanf("%s", code);
		
		char digits[6];
		strncpy(digits, code, 5);
		digits[5] = '\0';
		
		if(strcmp(redigits, digits)==0)
			cnt++;
	}
	
	printf("%d\n", cnt);
    return 0;
}
