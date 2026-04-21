#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	
	for(int i=0; i<t; i++) {
		int n, m;
		scanf("%d %d", &n, &m);
		
		int x[m], xsum = 0;
		for(int j=0; j<m; j++)
			scanf("%d", &x[j]);
			
		for(int j=0; j<m; j++)
			xsum = xsum*10+x[j];
			
		int y[m], ysum = 0;
		for(int j=0; j<m; j++)
			scanf("%d", &y[j]);
		
		for(int j=0; j<m; j++)
			ysum = ysum*10+y[j];
		
		int spin[n];
		for(int j=0; j<n; j++)
			scanf("%d", &spin[j]);
		
		int cnt = 0;
		for(int j=0; j<n; j++) {
			int zsum = 0;
			for(int k=j; k<j+m; k++) {
				if(k<n)
					zsum = zsum*10+spin[k];
				else
					zsum = zsum*10+spin[k-n];
			}	
			
			if(xsum<=zsum && zsum<=ysum)
				cnt++;
		}
		
		printf("%d\n", cnt);
	}
	
	return 0;
}
