#include <stdio.h>

void sort(int data[], int length) {
	for(int i = 0; i < length; i++) {
		for(int j = 0; j < length - 1; j++) {
			if(data[j] > data[j + 1]) {
				int temp = data[j + 1];
				data[j + 1] = data[j]; 
				data[j] = temp;
			}
		}
	}
}

void print(int data[], int length) {
	for(int i = 0; i < length; i++) {
		printf("%d ", data[i]);
	}
	printf("\n");
}


int main(){
	int array[] = { 34, 1, 13, 3, 7 };
	int length = sizeof(array) / sizeof(array[0]);

	print(array, length);
	sort(array, length);
	print(array, length);

	return 0;
}
