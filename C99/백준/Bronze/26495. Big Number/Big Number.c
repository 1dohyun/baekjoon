#include <stdio.h>

int main() {
	char str[101];
	scanf("%s", str);
	
	for(int i=0; str[i]!='\0'; i++) {
		switch(str[i]) {
			case '0': printf("0000\n0  0\n0  0\n0  0\n0000\n"); break;
			case '1': printf("   1\n   1\n   1\n   1\n   1\n"); break;
			case '2': printf("2222\n   2\n2222\n2\n2222\n"); break;
			case '3': printf("3333\n   3\n3333\n   3\n3333\n"); break;
			case '4': printf("4  4\n4  4\n4444\n   4\n   4\n"); break;
			case '5': printf("5555\n5\n5555\n   5\n5555\n"); break;
			case '6': printf("6666\n6\n6666\n6  6\n6666\n"); break;
			case '7': printf("7777\n   7\n   7\n   7\n   7\n"); break;
			case '8': printf("8888\n8  8\n8888\n8  8\n8888\n"); break;
			case '9': printf("9999\n9  9\n9999\n   9\n   9\n"); break;
		}
		
		putchar('\n');
	}
	
	return 0;
}
