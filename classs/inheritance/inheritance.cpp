#include<iostream>
using namespace std;
class vehicle{
    public:
    void print(){
        cout<<"it run and roar:\n";

    }
};
class car:public vehicle{
    public:
    void display(){
        cout<<"it has four wheel: \n";
    }



};

class bike:public vehicle{
    public:
    void show(){
        cout<<"it has two wheel: \n";
    }

};
int main(){
    car c1;
    vehicle v2;
    bike b1;
    c1.display();
    
    
    v2.print();
    b1.show();
    return 0;
}