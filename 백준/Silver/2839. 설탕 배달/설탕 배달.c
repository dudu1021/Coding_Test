#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	int n, cnt = 0;
	scanf("%d", &n);
	while (1) {
		if (n % 5 == 0) {
			cnt = cnt + n / 5;
			break;
	}
		n -= 3;
		cnt++;
		if (n <= 0)
			break;
	
	}
	if (n < 0)
		printf("-1");
	else
		printf("%d", cnt);
	
}
