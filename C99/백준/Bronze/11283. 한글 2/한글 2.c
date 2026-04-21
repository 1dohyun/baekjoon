#include <stdio.h>

int main() {
	char ch[4];
	scanf("%s", ch);
	
    int cp = ((ch[0] & 0x0F) << 12) | ((ch[1] & 0x3F) << 6) | (ch[2] & 0x3F);
    printf("%d", 1+cp-0xAC00);
    
    return 0;
}