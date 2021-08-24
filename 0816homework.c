#include <stdio.h>

int main() {
	int get;
	scanf("%d", &get);
	if(get % 2 == 0)
		printf("even.\n");
	else
		printf("odd.\n");

	if(get == 0)
		printf("the number equal to zero\n");

	if(get*get>100)
		printf("2 times bigger than 100\n");
    return 0;
}
  