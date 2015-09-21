#include <stdio.h>

void arrayExchange(int array[], int size) {
	int k;

	for (int i = 0; i < size; i++) {
		
		if (array[i] % 2 == 0 && i != size - 1) {
			k = array[i + 1];
			array[i + 1] = array[i];
			array[i] = k;
			i++;
		}
	}
}

int main() {
	int array[] = {1, 2, 3, 4, 5};

	for (int i = 0; i < 5; ++i) {
		printf("%d\n", array[i]);
	}
	arrayExchange(array, 5);

	for (int i = 0; i < 5; ++i) {
		printf("%d\n", array[i]);
	}
}