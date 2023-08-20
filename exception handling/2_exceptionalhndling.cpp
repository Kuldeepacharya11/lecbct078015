#include<iostream>
using namespace std;
int main (){
    int a,b;
    cout<<"enter the value of a and b:";
    cin>>a>>b;
    int x={a-b};
    
     try{
        if(x!=0){
            cout<<"\n result:"<<(a/(a-b));

        }
        else{
            throw(x);

        }
     }
     catch(int i){
        cout<<"dividible by zero is not allowed as it is not :"<<endl;

     }
     cout<<"\nnext statement"<<endl;
return 0;
}


