#include <stdio.h>

void print(int data[], int length) {
	for(int i = 0; i < length; i++) {
		printf("%d ", data[i]);
	}
	printf("\n");
}
