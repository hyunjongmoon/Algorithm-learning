#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
// 조건이 만약 3개 이상이 넘어간다면, 오히려 더 복잡하기문에 
// class를 사용하는게 낫다. 
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
	v.push_back(pair<string, pair<int, int> >("문현종", pair<int,int>(90, 19921006)));
	v.push_back(pair<string, pair<int, int> >("황창욱", pair<int,int>(97, 19940409)));
	v.push_back(pair<string, pair<int, int> >("강명수", pair<int,int>(95, 19900623)));
	v.push_back(pair<string, pair<int, int> >("박준태", pair<int,int>(90, 19980505)));
	v.push_back(pair<string, pair<int, int> >("김은성", pair<int,int>(88, 19931226)));
	sort(v.begin(), v.end(), compare); 
	for(int i = 0; i < v.size(); i++) {
		cout << v[i].first << ' '; 
	} 
	return 0;
}
