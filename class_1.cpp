#include <iostream>
#include <string>
using namespace std;
class student
{
public:
    int id;
    string name;
    float marks;



};

int main()
{
    student s1;
    student s2;

    s1.id = 1;
    s1.name = "John";
    s1.marks = 85.5;

    s2.id = 2;
    s2.name = "Jane";
    s2.marks = 90.0;

    cout<< "Student 1: " << s1.name << ", ID: " << s1.id << ", Marks: " << s1.marks << endl;
    cout<< "Student 2: " << s2.name << ", ID: " << s2.id << ", Marks: " << s2.marks << endl;
}
