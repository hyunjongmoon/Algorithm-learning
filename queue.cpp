#include <iostream>
#include <queue>

using namespace std;

int main(void) {
	queue<int> q;
	q.push(4);
	q.push(5);
	q.push(7);
	q.pop();
	q.push(8);
	q.pop();
	while(!q.empty()) {
		cout << q.front() << ' ';
		q.pop();
	}
	return 0;
}
