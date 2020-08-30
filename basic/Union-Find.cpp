#include <stdio.h>

// #UNION FIND 그래프 알고리즘 - '합집합 찾기' 
// 특정 노드들을 선택했을때, 그 노드가 같은 그래프에 속해
// 있는지 아닌지 알려주는 것
 
// 부모 노드를 찾는 함수 
 int getParent(int parent[], int x) {
 	if(parent[x] == x) return x;
 	return parent[x] = getParent(parent, parent[x]);
	
}

// 두 부모 노드를 합치는 함수
int unionParent(int parent[], int a, int b) {
	a = getParent(parent, a);
	b = getParent(parent, b);
	if(a < b) parent[b] = a;
	else parent[a] = b;
} 

// 같은 부모를 가지는지 확인
int findParent(int parent[], int a, int b) {
	a = getParent(parent, a);
	b = getParent(parent, b);
	if(a == b) return 1;
	return 0;
} 

int main(void) {
	int parent[11];
	for(int i = 1; i <= 10; i++) {
		parent[i] = i;
	}
	unionParent(parent, 1, 2);
	unionParent(parent, 2, 3);
	unionParent(parent, 3, 4);
	unionParent(parent, 5, 6);
	unionParent(parent, 7, 8);
	
	printf("1과 5는 연결되어 있는가? %d\n", findParent(parent, 1, 5));
	unionParent(parent, 1, 5);
	printf("1과 5는 연결되어 있는가? %d\n", findParent(parent, 1, 5));
}
