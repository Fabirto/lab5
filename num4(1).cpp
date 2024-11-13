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

size_t CountExcellent(const std::vector<Student>&students) {
	int sum = 0;
	for (auto stud : students) {
		bool pass = 1; // если не 5 то  слетает
		for (unsigned rating : stud.Ratings) {
			if (rating != 5) {    
				pass = 0;  //слетает
			}
		}
		if (pass ==1) {   //если за все не слетел значит все 5
			sum++;
		}
	}
	return sum;
}
	
int main() {
	    
	    
	    
Student anna = {
    "Anna",
    "Ivanova",
    {4, 2, 5, 5}
};

Student ivan = {
    "Ivan",
    "Petrov",
    {5, 5, 5, 5}
};
Student divan = {
    "Divan",
    "Petrov",
    {5, 5, 5, 5}
};

const vector<Student> people = {ivan, anna, divan};
cout<<CountExcellent(people);
}
