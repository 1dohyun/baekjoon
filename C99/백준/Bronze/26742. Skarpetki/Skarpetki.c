#include <stdio.h>

int main() {
	char s[1000001];
	scanf("%s", s);
    
	int b = 0, c = 0;
    
	for(int i=0; s[i]; i++) {
        if(s[i]=='B')
            b++;
		else
            c++;
    }
		
	printf("%d\n", b/2+c/2);
	return 0;
}
