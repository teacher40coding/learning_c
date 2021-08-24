#include <stdio.h>

int main() {
	float one=50, two=200;
	//scanf("%f %f", &one, &two);
	int get = 60 < 50 <= 0;  //1
	int get2 = 10 < 50 <= 0;  //0
	int get3 = 60 < 50; //0
	int get4 = 10 <= 50;  //1
	printf("\n %d %d %d %d", get, get2, get3, get4);
	if(get)
		printf("\ntrue1.");
	if(get2)
		printf("\ntrue2.");
	if(get3)
		printf("\ntrue3.");
	if(get4)
		printf("\ntrue4.");
    return 0;
}

//for i in $(seq 1 5); do ./main; done