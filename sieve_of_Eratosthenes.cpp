#include <stdio.h>

int number = 100000;
int a[100001];

void primeNumberSieve() {
	for(int i = 2; i <= number; i++) {
		a[i] = i;
	}
	for(int i = 2; i <= number; i++) {
		if(a[i] == 0) continue;
		for(int j = i + i; j <= number; j += i) {
			a[j] == 0;
		}
	}
	for(int i = 2; i <= number; i++) {
		if(a[i] != 0) printf("%d ", a[i]);
	}
} 

int main(void) {
	primeNumberSieve();
}
