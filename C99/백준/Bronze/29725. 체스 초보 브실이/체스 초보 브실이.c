#include <stdio.h>

int main() {
	int w = 0, b = 0;
	for(int i=0; i<8; i++) {
		for(int j=0; j<8; j++) {
			char c;
			scanf(" %c", &c);
			
			switch(c) {
				case 'P': w++; break;
				case 'p': b++; break;
				case 'N': case 'B': w+=3; break;
				case 'n': case 'b': b+=3; break;
				case 'R': w+=5; break;
				case 'r': b+=5; break;
				case 'Q': w+=9; break;
				case 'q': b+=9; break;
			}
		}
	}
	
	printf("%d\n", w-b);
    return 0;
}
