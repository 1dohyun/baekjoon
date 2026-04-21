#include <stdio.h>

int main() {
    int s, k, h;
    scanf("%d %d %d", &s, &k, &h);
    
    if(s+k+h<100) {
    	int min = s<k ? s : k;
    	min = min>h ? h : min;
    	
    	if(min==s)
    		puts("Soongsil");
    	else if(min==k)
    		puts("Korea");
    	else
    		puts("Hanyang");
	} else
		puts("OK");
	
    return 0;
}
