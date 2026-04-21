#include <stdio.h>

int main() {
	char str[20];
	scanf("%s", str);
	
	for(int i=0; str[i]!='\0'; i++) {
		int max = i;
		
		for(int j=i; str[j]!='\0'; j++) {
			if(str[j]>str[max])
				max = j;
		}
		
		char tmp = str[i];
		str[i] = str[max];
		str[max] = tmp;
	}
	
	printf("%s", str);
	return 0;
}