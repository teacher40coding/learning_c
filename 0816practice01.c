#include <stdio.h>

int main() {
	float one, two;
	scanf("%f %f", &one, &two);
    //printf("Hello, world!");
	printf("%f + %f = %f", one, two, one + two);
	printf("%f - %f = %f", one, two, one - two);
	printf("%f * %f = %f", one, two, one * two);
	printf("%f / %f = %f", one, two, one / two);
	printf("%f %% %f = %f", one, two, one % two);
    return 0;
}