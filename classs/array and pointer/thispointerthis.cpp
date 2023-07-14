#include<iostream>
using namespace std;
class mobile{
int x=10,m=5;  //this pointer ma dherai jasoo private hunxa attribute 
public:

void display(){
    cout<<"value of m is :"<<m<<endl;
cout<<"value of ? is :"<<x<<endl;
cout<<"the address of correct address is :"<<this<<endl;
cout<<"the address of correct address is :"<<this<<m<<endl;

}

};
int main(){
    mobile a1,a3;
    a1.display();
    a3.display();
    return 0;       
}   