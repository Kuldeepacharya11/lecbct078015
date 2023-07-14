// #include<iostream>
// using namespace std;
// class complex{
//     private:
//     float real,img;
    
// }


#include<iostream>
using namespace std;
class friends {
    private:
    char name ;
    int phone;

    public:
    void name ()
    {
        cout<<"my friends name is :  "<<endl;
        cin>>name;


    }
    void phone_no(){
        cout<<"enter phone no:"<<endl;
        cin>>phone;

    }
void display(){
    cout<<"name="<<name;
    cout<<"phone no =   "<<phone;

}

};
int main(){
    friends p;
    p.name();
    p.phone();
    p.display();
    return 0;
}