#include <stdio.h>

size_t int_to_string(int value, int base, char buffer[], size_t buffer_size){

	// problably we need count the number of digits from value first

	char base_caracter [] = {'0','1','2','3','4','5','6','8','9',
							'A','B','C','D','E','F'};
	int v = value;

	while (v > 0){
		printf("n: %c \n",base_caracter[(v % base)]);
		v = v/base;
	}

	return 0;
}

int main (void){
	size_t buffer_size = 100;
	char buffer [buffer_size];
	int_to_string(627,10,buffer,buffer_size);
	return 0;
}
