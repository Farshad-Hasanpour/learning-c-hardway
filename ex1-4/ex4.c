#include <stdio.h>

int main(int argc, char *argv[]){

	/* ex4: This code is wrong of purpose to test the valgrind */
	int age = 10;
	int height;
	printf("I am %d years old.\n");
	printf("I am %d inches tall.\n", height);

	return 0;
}