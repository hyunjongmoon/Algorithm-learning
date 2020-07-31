#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
	vector<pair<int, string> > v;
	v.push_back(pair<int, string>(90, "박준태 "));
	v.push_back(pair<int, string>(85, "김은성 "));
	v.push_back(pair<int, string>(82, "문현종 "));
	v.push_back(pair<int, string>(98, "황창욱 "));
	v.push_back(pair<int, string>(79, "강명수 "));
	
	sort(v.begin(), v.end()); 
	for(int i = 0; i < v.size(); i++) {
		cout << v[i].second << ' '; 
	} 
	return 0;
}
