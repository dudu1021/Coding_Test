#include <stdio.h>

int main() {
	int t, a, b;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%d %d", &a, &b);
		int r = 1;
		for (int j = 0; j < b; j++) {
			r *= a;
			r %= 10;
	
		}
		if (r == 0) 
			printf("10\n");
		else 
			printf("%d\n", r);
		
	}
	
}