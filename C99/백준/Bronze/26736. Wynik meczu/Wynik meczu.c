#include <stdio.h>

int main() {
	char s[100001];
	scanf("%s", s);
    
	int a = 0, b = 0;
    
	for(int i=0; s[i]; i++) {
        if(s[i]=='A')
            a++;
		else
            b++;
    }
		
    
	printf("%d : %d\n", a, b);
	return 0;
}
