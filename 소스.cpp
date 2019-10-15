#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {

	int v[6] = { 0,0,0,0,0,0 };

	int i, a;

	srand(time(NULL));
	for (i = 0; i < 600; i++) {

		a = rand() % 6;

		v[a] = v[a] + 1;



	}

	for (i = 0; i < 6; i++)

		printf("[%d]=%d\n", i + 1, v[i]);



}