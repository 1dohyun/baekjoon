#include <stdio.h>

int main() {
		int list[28];
		int check[31] = {0};
	
		for(int i = 0; i < 28; i++) {
		    scanf("%d", &list[i]);
				check[list[i]] = 1;
		}

		for(int n = 1; n <= 30; n++) {
			  if(check[n] == 0) printf("%d\n", n);
		}
    return 0;
}