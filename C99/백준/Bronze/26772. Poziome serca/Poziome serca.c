#include <stdio.h>

char *heart[9] = {
    " @@@   @@@ ",
    "@   @ @   @",
    "@    @    @",
    "@         @",
    " @       @ ",
    "  @     @  ",
    "   @   @   ",
    "    @ @    ",
    "     @     "
};

int main() {
    int n;
    scanf("%d", &n);
    
    for(int i=0; i<9; i++) {
    	for(int j=0; j<n; j++) {
    		if(j>0)
    			putchar(' ');
    		printf("%s", heart[i]);
		}
		putchar('\n');
	}
	
    return 0;
}
