#include <stdio.h>

int main() {
	char s[26];
	scanf("%s", s);
    
	int present[26] = {0,};
    
	for(int i=0; i<25; i++)
		present[s[i]-'A'] = 1;
    
	for(int i=0; i<26; i++) {
        if(!present[i])
			printf("%c\n", 'A'+i);
    }	
    
	return 0;
}
