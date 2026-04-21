#include <stdio.h>

int main() {
	char str[51];
	scanf("%s", str);
	
	int vowel = 0, y = 0;
	for(int i=0; str[i]!='\0'; i++) {
		char c = str[i];
		
		if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
			vowel++;
		else if(c=='y')
			y++;
	}
	
	printf("%d %d\n", vowel, vowel+y);
	return 0;
}
