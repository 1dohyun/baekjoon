#include <stdio.h>
#include <string.h>

int main() {
	int l = 0, t = 0;
	
	for(int i=0; i<9; i++) {
		char str[6];
		scanf("%s", str);
		
		if(strcmp(str, "Lion")==0)
			l++;
		else
			t++;
	}
	
	printf("%s\n", l<t ? "Tiger" : "Lion");
	return 0;
}
