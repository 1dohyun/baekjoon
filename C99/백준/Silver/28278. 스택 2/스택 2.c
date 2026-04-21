#include <stdio.h>

int stack[1000000];
	
int main() {
	int n, opc, opr, size = 0;
	scanf("%d", &n);
	
	for(int i=0; i<n; i++) {
		scanf("%d", &opc);
		
		switch(opc) {
			case 1: scanf("%d", &opr); stack[size++] = opr; break;
			case 2: printf("%d\n", size==0 ? -1 : stack[--size]); break;
			case 3: printf("%d\n", size); break;
			case 4: printf("%d\n", size==0 ? 1 : 0); break;
			case 5: printf("%d\n", size==0 ? -1 : stack[size-1]); break;
		}
	}
	
	return 0;
}
