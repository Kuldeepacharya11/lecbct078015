#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    char name;
    int age;

public:
    Person( char n, int a) : name(n), age(a) {}

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age <<endl;
    }
};

class Student : public Person {
private:
    std::string university;

public:
    Student(char n, int a, s u)
        : Person(n, a), university(u) {}

    void display() {
        Person::display();
        cout << "University: " << university <<endl;
    }
};

int main() {
    Student student("John Doe", 20, "ABC University");
    student.display();

    return 0;
}
