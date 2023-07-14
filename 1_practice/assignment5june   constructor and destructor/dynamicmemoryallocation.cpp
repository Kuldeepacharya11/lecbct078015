#include<iostream>
using namespace std;

int *roll=new int;
char *name =new char [10];
  

  void scanrollandname(){
    cout<<"enter your name :" <<endl;
    cin>>name;
    cout<<"enter your roll no:"<<endl;
    cin>>*roll;

  }



  void freememory(){
    delete roll;
    delete [] name;


  }
  void printrollandname(){
    cout<<"name:" <<name<<endl;
    cout<<"rollno:"<<*roll<<endl;

  }
  int main(){
    scanrollandname();
    cout<<endl<<"memory allocated dynamically for name and roll";
    cout<<endl<<"value of namme and roll before dellocation";
    printrollandname();
    freememory();
    cout<<"\n after dellocation";
    printrollandname();
    return 0;

  }
