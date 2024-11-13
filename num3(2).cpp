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

size_t CountTwoness(const vector<Student>&students) {
	int sum = 0; 
	for (auto stud : students) {     // перебираю оценки
		for(unsigned rating: stud.Ratings){
			if (rating < 3) {
				sum ++;
				break;   //если есть 1 двойка то дальше не проверяем
			}
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
    {5, 2, 5, 3}
};
Student divan = {
    "Divan",
    "Petrov",
    {2, 5, 5, 5}
};

const vector<Student> people = {ivan, anna, divan};
cout<<CountTwoness(people);
}
