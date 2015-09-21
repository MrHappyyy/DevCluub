#include <stdio.h>

int arraySearch(int array[], int size, int needle) {

	for (int i = 0; i < size; i++) {
		
		if (array[i] == needle) {
			return i;
		}
	}
	return -1;
}

int main() {
	int array[] = {1, 3, 5, 4, 2};
	int count = 0;
	count = arraySearch(array, 5, 2);
	printf("%d\n", count);
	return 0;
}