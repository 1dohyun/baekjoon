#include <stdio.h>

int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	
	char origin[101][101], fixed[101][101];
	for(int i=0; i<n; i++)
		scanf("%s", origin[i]);
	
	char none;
	scanf("%c", &none);
	
	for(int i=0; i<n; i++)
		scanf("%s", fixed[i]);
	
	int cnt = 0;
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			char want = origin[i][j]=='B' ? 'W' : 'B';
			
			if(fixed[i][j]!=want)
				cnt++;
		}
	}
	
	printf("%d\n", cnt);
	return 0;
}
