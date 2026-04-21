#include <stdio.h>
#include <string.h>

char shorten[12][21] = {"CU", ":-)", ":-(", ";-)", ":-P", "(~.~)", "TA", "CCC", "CUZ", "TY", "YW", "TTYL"};
char translation[12][51] = {"see you", "I’m happy", "I’m unhappy", "wink", "stick out my tongue", "sleepy", "totally awesome", "Canadian Computing Competition", "because", "thank-you", "you’re welcome", "talk to you later"};

int main() {
	char str[101];
	
	while(scanf("%s", str)!=EOF) {
		int translated = 0;
		
		for(int i=0; i<12; i++) {
			if(strcmp(str, shorten[i])==0) {
				printf("%s\n", translation[i]);
				translated = 1;
				
				break;
			}	
		}
		
		if(!translated)
			printf("%s\n", str);
		
		if(strcmp(str, "TTYL")==0)
			break;
	}
	
	return 0;
}
