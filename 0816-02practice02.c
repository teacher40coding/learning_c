#include <stdio.h>

int main() {
	float one, two;
	scanf("%f %f", &one, &two);
	if(one != two)
		printf("Different.\a");
    return 0;
}