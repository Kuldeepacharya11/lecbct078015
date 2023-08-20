#include <iostream>

using namespace std;

class Course {
public:
    Course(const string& name) : courseName(name) {}

    virtual void showInfo() {
        cout << "Course: " << courseName << endl;
    }

private:
    string courseName;
};

class Mathematics : public Course {
public:
    Mathematics(const string& name) : Course(name) {}
};

class Science : public Course {
public:
    Science(const string& name) : Course(name) {}
    void showInfo() override {
        cout << "Science Course: " << Course::courseName << endl;
    }
};

class Engineering : public Course {
public:
    Engineering(const string& name) : Course(name) {}
};

class Physics : public Science {
public:
    Physics(const string& name) : Science(name) {}
    void showInfo() override {
        cout << "Physics Course: " << Course::courseName << endl;
    }
};

class Chemistry : public Science {
public:
    Chemistry(const string& name) : Science(name) {}
    void showInfo() override {
        cout << "Chemistry Course: " << Course::courseName << endl;
    }
};

int main() {
    Mathematics math("Mathematics");
    Science science("Science");
    Engineering engineering("Engineering");
    Physics physics("Physics");
    Chemistry chemistry("Chemistry");

    Course* courses[] = { &math, &science, &engineering, &physics, &chemistry };

    for (Course* course : courses) {
        course->showInfo();
    }

    return 0;
}
