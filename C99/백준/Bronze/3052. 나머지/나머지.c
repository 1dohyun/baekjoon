#include <stdio.h>

int main() {
    int temp, count = 0;
    int mods[42] = {0};
    
    for(int i=0; i<10; i++) {
        scanf("%d", &temp);
        mods[temp%42] = 1;
    }
    
    for(int j=0; j<42; j++) {
    	if(mods[j]==1)
    		count++;
	}
    
    printf("%d", count);
    
    return 0;
}
