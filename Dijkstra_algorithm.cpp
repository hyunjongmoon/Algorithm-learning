#include <stdio.h>

int number = 6;
int INF = 1000000000;

// ��ü �׷����� �ʱ�ȭ 
int a[6][6] = {
	{0, 2, 5, 1, INF, INF},  
	{2, 0, 3, 2, INF, INF},
	{5, 3, 0, 3, 1, 5},
	{1, 2, 3, 0, 1, INF},
	{INF, INF, 1, 1, 0, 2},
	{INF, INF, 5, INF, 2, 0}
};

bool v[6]; // �湮�� ��� 
int d[6];  // �ִ� �Ÿ� 

// ���� �ּ� �Ÿ��� ������ ������ ��ȯ�մϴ�.
int getSmallIndex() {
	
} 
