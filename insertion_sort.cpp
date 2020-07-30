#include <stdio.h>

int n;
int array[101];

int main(void) {
	int i, j, temp, n;
	scanf("%d", &n);
	for(i = 0; i < n; i++) {
		scanf("%d", &array[i]);
	}
	for(i = 0; i < n; i++) {
		j = i; 
		while(j > 0 && array[j - 1] > array[j]){
			temp = array[j - 1];
			array[j - 1] = array[j];
			array[j] = temp;
			j--;
		}
		for(j = 0; j <= i; j++) {
			printf("%d ", array[j]);
		}
		printf("\n");
	}
	return 0;
}
