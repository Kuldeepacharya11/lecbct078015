#include<iostream>
using namespace std;
 class vehicle{
    private:
    int plateno;
    public:
    vehicle(){
        cout<<"register you platenumber first";
    }
    vehicle(int a,int b){
        plateno=a;
        plateno=b;
        cout<<"scooter number= "<<plateno<<endl;
        cout<<"scooter2="<<plateno<<endl;
    
    }
 };
 int main (){
    vehicle scooter1();
    vehicle scooter2(8634,8654);
    return 0;



 }