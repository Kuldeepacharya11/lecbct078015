 #include <iostream>
using namespace std;

class Student {

   public:
    double marks;
    Student(double m) {
        marks = m;
    }
};
void calculateAverage(Student s1, Student s2) {

    double average =(s1.marks + s2.marks)/2;

   cout<<"Average Marks = " <<average<<endl;

}

int main() {
    Student student1(100.0), student2(99.0);
    // Student pawan, kuldip;
    // pawan.marks = 400;
    // kuldip.marks=300;

    // calculateAverage(pawan, kuldeep);

 
   calculateAverage(student1, student2);

    return 0;
}