#include <stdio.h>

int main() {
    char word[1000000];
	scanf("%s", word);
	
	for(int i=0; word[i]!='\0'; i++) {
		if(word[i]>'Z')
			word[i] -= ('a'-'A');
	}
	
	int freq[26] = {0,};
	for(int i=0; word[i]!='\0'; i++)
		freq[word[i]-'A']++;
	
	int max = 0;
	for(int i=0; i<26; i++) {
		max = freq[max]>freq[i] ? max : i;
	}
	
	for(int i=0; i<26; i++) {
		if(freq[max] == freq[i] && max != i) {
			printf("?");
			return 0;	
		}
	}
	
	printf("%c", max+'A');
    return 0;
}
