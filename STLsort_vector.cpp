#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
	vector<pair<int, string> > v;
	v.push_back(pair<int, string>(90, "������ "));
	v.push_back(pair<int, string>(85, "������ "));
	v.push_back(pair<int, string>(82, "������ "));
	v.push_back(pair<int, string>(98, "Ȳâ�� "));
	v.push_back(pair<int, string>(79, "����� "));
	
	sort(v.begin(), v.end()); 
	for(int i = 0; i < v.size(); i++) {
		cout << v[i].second << ' '; 
	} 
	return 0;
}
