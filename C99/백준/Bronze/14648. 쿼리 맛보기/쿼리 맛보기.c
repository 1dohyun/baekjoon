#include <stdio.h>

int main() {
	int n, q;
	scanf("%d %d", &n, &q);
	
	int seq[n];
	for(int i=0; i<n; i++)
 		scanf("%d", &seq[i]);
 	
 	for(int i=0; i<q; i++) {
 		int type;
 		scanf("%d", &type);
 		
 		if(type==1) {
 			int a, b;
 			scanf("%d %d", &a, &b);
 			
 			long long sum = 0;
 			for(int j=a-1; j<b; j++)
 				sum += seq[j];
 			
 			printf("%lld\n", sum);
 			
 			int tmp = seq[a-1];
 			seq[a-1] = seq[b-1];
 			seq[b-1] = tmp;
		} else {
			int a, b, c, d;
			scanf("%d %d %d %d", &a, &b, &c, &d);
			
			long long sum1 = 0;
			for(int j=a-1; j<b; j++)
				sum1 += seq[j];
			
			long long sum2 = 0;
			for(int j=c-1; j<d; j++)
				sum2 += seq[j];
			
			printf("%lld\n", sum1-sum2);
		}
	}
	
	return 0;
}
