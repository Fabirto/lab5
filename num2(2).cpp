using namespace std;
#include <iostream>
#include<string>
#include <vector>
struct Student
{
	string Name;
	string GroupId;
	vector<unsigned> Ratings;
	vector<string> Subjects;
	double avg() {
		double sum = 0;
		for (unsigned i : Ratings) {
			sum += i;
		}
		return sum / Ratings.size();
	}
};

void SortByName(vector<Student>& students) {
	int lenght =students.size();
	for (int i =0; i < lenght; ++i) {//отсортировать
		for (int j =0; j<lenght-1; j++) {
			if (students[j].avg() >students[j+1].avg()) {
				auto replace=students[j].Ratings;
				students[j].Ratings=students[j+1].Ratings;
				students[j+1].Ratings=replace;
			}
		}
	}
}
	
int main() {
	    
	    
	    
Student anna = {
    "Anna",
    "Ivanova",
    {4, 5, 5, 2}
};

Student ivan = {
    "Ivan",
    "Petrov",
    {2, 2, 2, 3}
};
Student divan = {
    "Divan",
    "Petrov",
    {4, 5, 5, 5}
};

vector<Student> people = {ivan, anna, divan};
SortByName(people);

for (int numa = 0; numa< people.size();numa++) {
    cout << people[numa].Name << ": " <<people[numa].avg() << ", ";
}
	    return 0;
}