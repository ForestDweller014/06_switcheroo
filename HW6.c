#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int arr[10];
	int i;
	srand(time(NULL));
	for (i = 0; i < 9; i++) {
		arr[i] = rand();
	}
	arr[9] = 0;

	for (i = 0; i < 9; i++) {
		printf("%d, ", arr[i]);
	}
	printf("%d\n", arr[9]);

	int arr_2[10];
	int *arrp = arr;
	int *arr_2p = arr_2;
	for (i = 0; i < 10; i++) {
		*(arr_2p + i) = *(arrp + (9 - i));
	}
	for (i = 0; i < 9; i++) {
		printf("%d, ", *(arr_2p + i));
	}
	printf("%d\n", *(arr_2p + 9));

	return 0;
}