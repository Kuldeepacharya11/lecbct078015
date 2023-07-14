#include<iostream>
using namespace std;
class sample{
    //friend
     float mean(sample s);

    private:
    float num1,num2;
    public:
    void getdata(){
        float a,b;
        cout<<"enter the two number a and b";
        cin>>a>>b;
        num1=a;
        num2=b;



    }
};   
    float mean(sample s){
        float m;
        m=(s.num1+s.num2)/2;
        return m;
    } 
    
    
    int main(){
        sample s;
        s.getdata();
        cout<<"mean:"<<mean(s)<<endl;
        return 0;
        
    }


