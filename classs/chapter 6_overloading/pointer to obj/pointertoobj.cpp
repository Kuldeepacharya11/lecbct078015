#include<iostream>
using namespace std;
class employee{
    private:
    char name[44];
    float salary;
    public:
    void getdata(){
        cout<<"enter the name :"<<endl;
        cin>>name;

        cout<<"enter the salary:"<<endl;
        cin>>salary;
    
    }
    void display(){
        cout<<"name:"<<name<<endl;
        cout<<"salary:"<<salary<<endl;

    }
};
int main(){
    employee *s1;
    employee s2;
    s1=&s2;
    s1->getdata();
    cout<<"accessing data through pointer variable:"<<endl;
    s1->display();
    return 0;


}