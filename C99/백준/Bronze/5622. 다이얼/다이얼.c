#include <stdio.h>

int main() {
    char s[15];
    scanf("%s", s);
    
    int total = 0;
    for(int i=0; s[i]!='\0'; i++) {
		if(s[i] < 'S')
			total += (s[i] - 'A')/3 + 3;
		else if(s[i] < 'Z')
			total += (s[i] - 'A' - 1)/3 + 3;
		else
			total += 10;
	}
	
	printf("%d", total);
    return 0;
}
