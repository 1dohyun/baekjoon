#include <stdio.h>
#include <string.h>

int queue[20000];
	
int main() {
	int front = 0, back = 0;
	int n, opr, size;
	scanf("%d", &n);
	
	char opc[10];
	for(int i=0; i<n; i++) {
		scanf("%s", opc);
		size = back-front;
		
		if(strcmp(opc, "push")==0) {
			scanf("%d", &opr);
			queue[back++] = opr;
		}
		
		if(strcmp(opc, "pop")==0)
			printf("%d\n", size==0 ? -1 : queue[front++]);
		
		if(strcmp(opc, "front")==0)
			printf("%d\n", size==0 ? -1 : queue[front]);
		
		if(strcmp(opc, "back")==0)
			printf("%d\n", size==0 ? -1 : queue[back-1]);
		
		if(strcmp(opc, "size")==0)
			printf("%d\n", size);
		
		if(strcmp(opc, "empty")==0)
			printf("%d\n", size==0 ? 1 : 0);
	}
	
	return 0;
}
