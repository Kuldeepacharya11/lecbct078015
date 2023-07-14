#include<iostream>
using namespace std;
class member{
    private:
    int a,b,c;
    public:
    member(int x,int y,int z){
        a=x;
        b=y;
        c=z;

    }
    void operator-(){
        a=-a;
        b=-b;
        c=-c;
    }
    void display(){

        cout<<"the result:"<<a<<endl<<b<<endl<<c<<endl;

    }
        
    };
    int main(){
        
        member obj(-4,5,6);
        obj.operator-();
        obj.display();
      
        return 0;
    }