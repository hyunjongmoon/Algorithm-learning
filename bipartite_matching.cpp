#include <iostream>
#include <vector>
#define MAX 101

using namespace std;

vector<int> a[MAX];
int d[MAX];
bool c[MAX];
int n = 3, m;

// ��Ī�� ������ ��� True,  ������ ��� False
bool dfs(int x) {
	// ����� ��� ��忡 ���ؼ� �� �� �ִ� �õ�
	for(int i = 0; i < a[x].size(); i++) {
		int t = a[x][i];
		// �̹� ó���� ���� �� �̻� �� �ʿ䰡 ����
		if(c[t]) continue;
		c[t] = true;
		// ����ְų� ���� ��忡 �� �� ������ �ִ� ���
		if(d[t] == 0 || dfs(d[t])) {
			d[t] = x;
			return true;
		}
	}
	return false;
} 

int main(void) {
	a[1].push_back(1);
	a[1].push_back(2);
	a[1].push_back(3);
	a[2].push_back(1);
	a[3].push_back(2);
	int count = 0;
	for(int i = 1; i <= n; i++) {
		fill(c, c + MAX, false);
		if(dfs(i)) count++;
	}
	printf("%d���� ��Ī�� �̷�������ϴ�.\n", count);
	for(int i = 1; i < MAX; i++) {
		if(d[i] != 0) {
			printf("%d -> %d\n", d[i], i);
		}
	}
	return 0;
}
