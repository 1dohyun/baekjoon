#include <stdio.h>

int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	
	int mp = 1e9, me = 1e9;
	for(int i=0; i<m; i++) {
		int pack, each;
		scanf("%d %d", &pack, &each);
		
		if(mp>pack)
			mp = pack;
			
		if(me>each)
			me = each;
	}
	
	int total = mp*(n/6)+me*(n%6);
	
	int total2 = ((n+5)/6)*mp;
	
	total = total<total2 ? total : total2;
	total = total<n*me ? total : n*me;
	
	printf("%d\n", total);
	return 0;
}
