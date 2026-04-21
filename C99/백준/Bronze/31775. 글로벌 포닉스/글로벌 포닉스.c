#include <stdio.h>

char global[] = "lkp";

int main() {
	char s1[21], s2[21], s3[21];
	scanf("%s %s %s", s1, s2, s3);
	
	int cnt = 0;
	
	for(int i=0; i<3; i++) {
		if(s1[0] == global[i]) {
			cnt++;
			global[i] = "";
		}
	}
	
	for(int i=0; i<3; i++) {
		if(s2[0] == global[i]) {
			cnt++;
			global[i] = "";
		}
	}
	
	for(int i=0; i<3; i++) {
		if(s3[0] == global[i]) {
			cnt++;
			global[i] = "";
		}
	}
	
	printf("%s\n", cnt==3 ? "GLOBAL" : "PONIX");
    return 0;
}
