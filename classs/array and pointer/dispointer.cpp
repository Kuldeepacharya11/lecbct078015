#include<iostream>
using namespace std;
class A{
    int x;
    public:
    void getnum(int x){
        this->x=x;
    


    }
    void shownum(){
        cout<<"the value of x:"<<x;

    }
};
int main(){
    A obj;
    int x=5;
    obj.getnum(x);
    obj.shownum();
    obj.getnum(7);
    obj.shownum();
    return 0;
}