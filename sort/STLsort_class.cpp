#include <iostream>
#include <algorithm>

using namespace std;

class Student {
	public :
		string name;
		int score;
	Student(string name, int score) {
		this->name = name;
		this->score = score;
	}
	// 정렬 기준은 '점수가 작은 순서'
	bool operator < (Student &student) {
		return this->score < student.score;
	} 
};

int main(void) {
	Student students[] = {
		Student("문현종 ", 90),
		Student("김은성 ", 93),
		Student("박준태 ", 96),
		Student("황창욱 ", 92),
		Student("강명수 ", 87) 
	};
	sort(students, students + 5);
	for(int i = 0; i < 5; i++) {
		cout << students[i].name << ' ';
	}
}
