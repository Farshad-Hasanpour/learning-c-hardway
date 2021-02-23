#include <stdio.h>

int main(int argc, char *argv[]){
	// let's make our own array of strings (a two dimensional array)
	int num_states = 7;
	char *states[] = {
		"California", "Oregon", "Washington", NULL, 0, '\0', "Texas"
	};
	// assigning states to argv and vice versa
	argv[3] = states[0];
	states[0] = "another value"; // This does not change argv[3]
	

	int i, j = 0;
	// go through each string in argv
	for(i = 0; i<argc; i++) printf("arg %d: %s\n", i, argv[i]);
	printf("+++++++++++\n");
	// print states
	for(i=0; i< num_states; i++) printf("state %d: %s\n", i, states[i]);
	printf("+++++++++++\n");
	// usage of comma between semicolon
	for(i=0, j=0; i<4 && j<2 ; i++, j++) printf("i: %d, j: %d\n", i, j);

	return 0;
}