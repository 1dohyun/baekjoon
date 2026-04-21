#include <stdio.h>
#include <string.h>

int main() {
	char str[9];
	scanf("%s", str);
	
	if(strcmp(str, "fdsajkl;")==0 || strcmp(str, "jkl;fdsa")==0)
		puts("in-out");
	else if(strcmp(str, "asdf;lkj")==0 || strcmp(str, ";lkjasdf")==0)
		puts("out-in");
	else if(strcmp(str, "asdfjkl;")==0)
		puts("stairs");
	else if(strcmp(str, ";lkjfdsa")==0)
		puts("reverse");
	else
		puts("molu");
	
    return 0;
}
