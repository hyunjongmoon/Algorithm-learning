#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
// ������ ���� 3�� �̻��� �Ѿ�ٸ�, ������ �� �����ϱ⋚���� 
// class�� ����ϴ°� ����. 
bool compare(pair<string, pair<int, int> > a,
			 pair<string, pair<int, int> > b) {
	if(a.second.first == b.second.first) {
		return a.second.second > b.second.second;
	} else {
		return a.second.first > b.second.first;
	}		 	
}

int main(void) {
	vector<pair<string, pair<int, int> > > v;	
	v.push_back(pair<string, pair<int, int> >("������", pair<int,int>(90, 19921006)));
	v.push_back(pair<string, pair<int, int> >("Ȳâ��", pair<int,int>(97, 19940409)));
	v.push_back(pair<string, pair<int, int> >("�����", pair<int,int>(95, 19900623)));
	v.push_back(pair<string, pair<int, int> >("������", pair<int,int>(90, 19980505)));
	v.push_back(pair<string, pair<int, int> >("������", pair<int,int>(88, 19931226)));
	sort(v.begin(), v.end(), compare); 
	for(int i = 0; i < v.size(); i++) {
		cout << v[i].first << ' '; 
	} 
	return 0;
}
