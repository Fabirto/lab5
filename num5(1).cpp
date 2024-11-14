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

vector<Student> VectorMathExcellent(const vector<Student>& students)
{
    
    
    
vector<Student> mathematics;  //массив для вывода
    for (int i=0; i<students.size(); i++){

        for (int j=0; j<students[i].Subjects.size(); j++)  // перебираем предмет и оценку 
        {
            if (students[i].Subjects[j]=="Math")
            {
                if (students[i].Ratings[j]==5)
                {
                    mathematics.push_back(students[i]); // если оценка 5 то добавляем в массив
                }
            }
        }
    }
    
    return mathematics;
}
	
int main() {
	    
	    
	    
Student anna = {
    "Anna",
    "Ivanova",
    {5, 2, 5, 5},
    {"Math","Fath","Bath","Hatch"}
};

Student ivan = {
    "Ivan",
    "Petrov",
    {2, 5, 5, 5},
    {"Math","Fath","Bath","Hatch"}
};
Student divan = {
    "Divan",
    "Petrov",
    {5, 5, 5, 5},
    {"Math","Fath","Bath","Hatch"}
};

const vector<Student> people = {ivan, anna, divan};
vector<Student> result = VectorMathExcellent(people);

for (auto i: result)
{
    cout << i.Name << ", ";
}
}