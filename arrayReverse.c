#include <stdio.h>

void arrayReverse(int array[], int size) {
	int k;
	for (int i = 0; i < size; i++) {
		k = array[size - 1];
		array[size - 1] = array[i];
		array[i] = k;
		size--;
	}
}

int main() {
	int array[] = {1, 2, 3, 4, 5};

	for (int i = 0; i < 5; i++) {
		printf("%d\n", array[i]);
	}
	arrayReverse(array, 5);

	for (int i = 0; i < 5; i++) {
		printf("%d\n", array[i]);
	}
	return 0;
}