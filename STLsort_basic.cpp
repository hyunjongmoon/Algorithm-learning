#include <iostream>
#include <algorithm>

using namespace std;

bool compare(int a, int b) {
	return a > b; // a < b 이면 오름차순이고, sort함수 default 오름차순이다. 
}

int main(void) {
	int a[10] = {9, 3, 5, 4, 1, 10, 8, 6, 7, 2};
	sort(a, a + 10, compare);
	for(int i = 0; i < 10; i++) {
		cout << a[i] << ' ';
	}
}
