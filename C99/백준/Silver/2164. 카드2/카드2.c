#include <stdio.h>

int queue[1000000];
int start = 0, end = 0;

void push(int i) {
	queue[end++] = i;
}

int pop() {
	return queue[start++];
}
	

int main() {
	int n;
	scanf("%d", &n);
	
	for(int i=1; i<=n; i++)
		push(i);
	
	while(end-start>1) {
		pop();
		push(pop());
	}
	
	printf("%d", pop());
	return 0;
}