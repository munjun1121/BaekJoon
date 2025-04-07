#include <stdio.h>

int main() {
	int res;
	scanf("%d", &res);

	if (res >= 90) printf("A");
	else if (res >= 80) printf("B");
	else if (res >= 70) printf("C");
	else if (res >= 60) printf("D");
	else printf("F");
	return 0;
}