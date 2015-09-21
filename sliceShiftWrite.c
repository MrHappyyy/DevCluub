#include <stdio.h>

void sliceShiftWrite(int array[], int start, int end) {
	int k = array[end];;

	for (int i = end; i > start; i--) {
		array[i] = array[i - 1];
	}
	array[start] = k;
}

int main() {
	int array[] = {1, 2, 3, 4, 5, 6, 7, 8};

	for (int i = 0; i < 8; i++) {
		printf("%d\n", array[i]);
	}
	sliceShiftWrite(array, 2, 6);

	for (int i = 0; i < 8; i++) {
		printf("%d\n", array[i]);
	}
}