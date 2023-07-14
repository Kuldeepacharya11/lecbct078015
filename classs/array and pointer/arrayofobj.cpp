#include<iostream>
using namespace std;
class student{
    public:
    int roll;
     char name[20];
     void getdata(){
        cout<<"enter the name :";
        cin>>name;
        cout<<"enter roll no:"<<roll;
        cin>>roll;

     }
    void showdata(){
        cout<<"your name :";
        cout<<"roll no:";

    }
    
    };
    int main(){
        student s[100];
        int i,n;
        cout<<"how many student";
        cin>>n;
       
        for (i=0;i<n;i++){

        
        s[i].getdata();
        cout<<"student data:"<<endl;
        }

        

        for (i=0;i<n;i++) {
        s[i].showdata();
        }
        return 0;
    }
