#include<iostream>
using namespace std;
class student{
    public:
    double marks1 , marks2;
};
 student pawan(){
    student S;
    S.marks1=90;
    S.marks2=80;

    cout<<"marks 1="<<S.marks1<<endl;
    cout<<"marks 2="<<S.marks2<<endl;
    return S;
 }

 int main(){
    student S1,S2;
    S1=pawan();
    S2=pawan();
    return 0;
 }