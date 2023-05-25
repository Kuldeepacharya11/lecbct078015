#include<iostream>
using namespace std;
int main (){
    int a,b,c;
    cout<<"enter the value of a,b,c"<<endl;
    cin>>a>>b>>c;

if (a>b){
if (a>c)
cout<<"a is the greater no"<<endl;
else
cout<<"c is the greater no"<<endl;
}
else{
    if(b>c)
    cout<<"b is the largest one"<<endl;
    else
    cout<<"c is the largest one"<<endl;

}
return 0;
 
}