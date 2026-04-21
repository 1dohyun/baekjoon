#include <stdio.h>

int main() {
	char str[1001];
	scanf("%s", str);
	
	int cnt = 0;
	char *p = str;
	
	while((p = strstr(p, "DKSH"))!=NULL) {
		cnt++;
		p++;
	}
	
    printf("%d\n", cnt);
    return 0;
}
