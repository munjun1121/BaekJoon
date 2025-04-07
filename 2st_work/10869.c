#include <stdio.h>

int main() {
	int A, B;
	int pl, mi, mu, qu, re;

	scanf("%d %d", &A, &B);
	pl = A + B;
	mi = A - B;
	mu = A * B;
	qu = A / B;
	re = A % B;
	printf("%d\n%d\n%d\n%d\n%d", pl, mi, mu, qu, re);
	return 0;
}