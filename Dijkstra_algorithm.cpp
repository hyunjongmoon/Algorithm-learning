#include <stdio.h>

int number = 6;
int INF = 1000000000;

// 전체 그래프를 초기화 
int a[6][6] = {
	{0, 2, 5, 1, INF, INF},  
	{2, 0, 3, 2, INF, INF},
	{5, 3, 0, 3, 1, 5},
	{1, 2, 3, 0, 1, INF},
	{INF, INF, 1, 1, 0, 2},
	{INF, INF, 5, INF, 2, 0}
};

bool v[6]; // 방문한 노드 
int d[6];  // 최단 거리 

// 가장 최소 거리를 가지는 정점을 반환합니다.
int getSmallIndex() {
	
} 
