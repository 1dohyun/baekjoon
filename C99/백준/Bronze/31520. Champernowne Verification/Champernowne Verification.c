#include <stdio.h>

int main() {
    char str[11];
    scanf("%s", str);
    
    int i = 1;
    char word[21] = "";
    
    while(1) {
    	char buffer[11];
    	sprintf(buffer, "%d", i);
    	strcat(word, buffer);
    	
    	if(strlen(word)>strlen(str))
    		break;
    	
    	if(strcmp(word, str)==0) {
    		printf("%d\n", i);
    		return 0;
		}
		
		i++;
	}
    
    puts("-1");
    return 0;
}
