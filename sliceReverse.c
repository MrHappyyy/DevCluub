#include <stdio.h>

void arrayReverse(int array[], int size, int lo, int hi) {
	int k;
	for (int i = 0; i < size; i++) {
		
		if (i >= lo && i <= hi){
			k = array[i];
			array[i] = array[hi];
			array[hi] = k;
			hi--;
		}
	}
}

int main() {
	int array[] = {1, 2, 3, 4, 5};

	for (int i = 0; i < 5; i++) {
		printf("%d\n", array[i]);
	}
	arrayReverse(array, 5, 1, 3);

	for (int i = 0; i < 5; i++) {
		printf("%d\n", array[i]);
	}
	return 0;
}