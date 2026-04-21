#include <stdio.h>

int main() {
	int lv, score;
	char str[10];
	
	scanf("%d %s", &lv, &str);
	
	if(strcmp(str, "miss")==0)
		score = 0;
	if(strcmp(str, "bad")==0)
		score = 200*lv;
	if(strcmp(str, "cool")==0)
		score = 400*lv;
	if(strcmp(str, "great")==0)
		score = 600*lv;
	if(strcmp(str, "perfect")==0)
		score = 1000*lv;
	
	printf("%d\n", score);
    return 0;
}
