#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int cmp(const void *a, const void *b);

int main() {
	int n;
	scanf("%d", &n);
	
	char words[20000][51];
	for(int i=0; i<n; i++)
		scanf("%s", words[i]);
		
	qsort(words, n, sizeof(words[0]), cmp);
	
	printf("%s\n", words[0]);
	for(int i=1; i<n; i++) {
		if(strcmp(words[i], words[i-1]) != 0)
			printf("%s\n", words[i]);
	}
	
	return 0;
}

int cmp(const void *a, const void *b) {
	const char *str1 = (const char*)a;
	const char *str2 = (const char*)b;
	
	if(strlen(str1) != strlen(str2))
		return strlen(str1) - strlen(str2);
		
	return strcmp(str1, str2);
}
