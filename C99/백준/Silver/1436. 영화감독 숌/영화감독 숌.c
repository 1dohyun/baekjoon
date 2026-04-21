#include <stdio.h>
#include <string.h>
	
int main() {
	int n, count = 0;
	scanf("%d", &n);
	
	for(int i=666; ; i++) {
		char str[10];
		sprintf(str, "%d", i);
		
		if(strstr(str, "666") != NULL) {
			count++;
			
			if(count == n) {
				printf("%d\n", i);
				break;
			}
		}
	}
	return 0;
}
