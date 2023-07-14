#include<iostream>
using namespace std;
class number{
    private:
    
    static int a;
    int b;
    public:
    void display(){
        a++;
        b=5;
        cout<<"\n the value of a is :"<<a<<endl;
        cout<<"\n the value of b is :"<<b<<endl;

    }
    void showdata(){
        cout<<"the final value of a is:"<<a<<endl;
    }
    static void show(){
        cout<<"the final value of the a: "<<a<<endl;  //static finction

    }
};
        int number:: a=0;
int main(){
    number n1,n2,n3;
    n1.display();
    n2.display();
    n3.display();
    n1.display();
    n1.showdata();
    number::show();      //static function call
    return 0;


}