#include<stdio.h>

size_t int_to_string(int value, int base, char buffer[], size_t buffer_size){

	int v = value;

	while (v > 0){
		printf("n: %d \n",(v % base));
		v = v/base;
	}

	return 0;
}

int main (void){
	size_t buffer_size = 100;
	char buffer [buffer_size];
	int_to_string(17689,2,buffer,buffer_size);
	return 0;
}
