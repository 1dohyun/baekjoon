#include <stdio.h>

int main() {
    int age, kg;
    char name[11];
    
    scanf("%s %d %d", name, &age, &kg);
    while(name[0]!='#') {
    	if(age>17 || kg>=80)
    		printf("%s Senior\n", name);
    	else
    		printf("%s Junior\n", name);
    		
    	scanf("%s %d %d", name, &age, &kg);
	}
    
    return 0;
}
