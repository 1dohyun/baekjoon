#include <stdio.h>

int main() {
	int n, cnt = 0;
	scanf("%d", &n);
	
	for(int i=0; i<n; i++) {
		char str[501];
		scanf("%s", str);
		
		if(strstr(str, "01")!=NULL || strstr(str, "OI")!=NULL) 
			cnt++;
	}
	
	printf("%d\n", cnt);
    return 0;
}
