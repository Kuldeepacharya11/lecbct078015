#include<iostream>
using namespace std;

class area{
 private:
 double length;
 double breadth;

    public:
    area (){
        length=1;
        breadth=2;

    }

     area(area &obj){
      
      length=obj.length;
     breadth=obj.breadth;
     
    


    }
    area(double a , double b){
        length=a;
        breadth=b;

    }
    area(double c){
         length=c;
    breadth=1;
    }
double calculateArea(){
     return length*breadth;


}
 
};
int main(){
    area floor, room(2.5,4.5), office(4),;
   
area school=area room;


 cout<<"\narea of floor: "<< floor.calculateArea()<<endl;
    cout<<"\narea of room :"<< room.calculateArea()<<endl;
    cout<<"\narea of office:"<< office.calculateArea()<<endl;
cout<<"\narea of school:"<<school.calculateArea()<<endl;
  
    return 0;
    
}
