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
};

void SortByName(vector<Student>& students) {
	int lenght =students.size();
	for (int i =0; i < lenght; ++i) {//отсортировать
		for (int j =0; j<lenght-1; j++) {
			if (students[j].Name>students[j+1].Name) {
				auto replace=students[j].Name;
				students[j].Name=students[j+1].Name;
				students[j+1].Name=replace;
			}
		}
	}
}
	
int main() {
	    
	    
	    
Student anna = {
    "Anna",
    "Ivanova",
    {4, 5, 5, 3}
};

Student ivan = {
    "Ivan",
    "Petrov",
    {4, 5, 5, 3}
};
Student divan = {
    "Divan",
    "Petrov",
    {4, 5, 5, 3}
};

vector<Student> people = {ivan, anna, divan};
SortByName(people);

for (int numa = 0; numa< people.size();numa++) {
    cout << people[numa].Name << " ";
}
	    return 0;
}