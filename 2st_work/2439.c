#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n - 1; j++) {
			printf(" ");
		}
		for (int x = 1; x <= i; x++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
