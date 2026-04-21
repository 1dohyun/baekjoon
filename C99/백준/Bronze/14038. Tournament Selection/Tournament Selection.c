#include <stdio.h>
#include <string.h>

int main() {
    char tmp;
    int cnt = 0;
    
    for(int i=0; i<6; i++) {
    	scanf(" %c", &tmp);
    	if(tmp=='W')
    		cnt++;
	}
	
	switch(cnt) {
		case 6: case 5: puts("1"); break;
		case 4: case 3: puts("2"); break;
		case 2: case 1: puts("3"); break;
		default: puts("-1");
	}
	
    return 0;
}
