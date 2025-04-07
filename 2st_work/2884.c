#include <stdio.h>

int main() {
	int H, M, H1, M1;
	scanf("%d %d", &H, &M);
	if (M >= 45) {
		M1 = M - 45;
		H1 = H;
	}
	else if (M < 45 && H >= 1) {
		M1 = M + 15;
		H1 = H - 1;
	}
	else {
		M1 = M + 15;
		H1 = 23;
	}
	printf("%d %d", H1, M1);
	return 0;

}