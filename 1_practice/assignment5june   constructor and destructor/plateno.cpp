#include<iostream>
using namespace std;
 class vehicle{
    private:
    int plateno;
    public:
    int getnumber(int a,int b){
        plateno=a;
        plateno=b;
        cout<<"scooter number= "<<plateno<<endl;
        cout<<"scooyeer2="<<plateno<<endl;
        return plateno;
    }
 };
 int main (){
    vehicle scooter;
    scooter.getnumber(8634,8654);
    return 0;



 }