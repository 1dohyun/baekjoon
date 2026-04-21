#include <stdio.h>

int main() {
	int cases;
	scanf("%d", &cases);
	
	for(int i=0; i<cases; i++) {
		int n, m, queue[1000];
		scanf("%d %d", &n, &m);
		
		int bot = 0, top = n, cnt = 0;
	
		for(int j=0; j<n; j++)
			scanf("%d", &queue[j]);
			
		while(1) {
			int move = 0;
			
			for(int j=bot+1; j<top; j++) {
				if(queue[j]>queue[bot]) {
					move = 1;
					break;
				}
			}
			
			if(move==1) {
				queue[top++] = queue[bot++];
				
				if(m==0)
					m = top-bot-1;
				else
					m--;
 			} else {
				cnt++;
				
				if(m==0)
					break;
				else
					m--;
				bot++;
			}
		}
		
		printf("%d\n", cnt);
	}
	
	return 0;
}
