#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    
    for(int i=0; i<t; i++) {
    	char str[101];
    	scanf("%s", str);
    	
    	int a = 0, b = 0;
    	for(int j=0; str[j]!='\0'; j++) {
    		if(str[j]=='a')
    			a++;
    		else
    			b++;
		}
		
		printf("%d\n", a<b ? a : b);
	}
	
    return 0; 
}
