#include<iostream>
using namespace std;
class complex {
    private:
    float real;
    float imag;
    public:
    void readvalue(){
        cout<<"\n enter real part: "<<endl;
        cin>>real;

        cout<<"\n enter imaginary part: "<<endl;
        cin>>imag;

    }
    void showvalue(){
        cout<<"("<<real<<","<<imag<<")";

    }
    void add(complex c1,complex c2){
        real=c1.real+c2.imag;
        img=c1.img+c2.imag;

    }

};
int main()
[
    complex c1,c2,c3;
    cout<<"enter the first complex no:  "<<endl;
    c1.readvalue();
    cout<<"enter the second complex no:  "<<endl;
    c2.readvalue();
    c1.showvalue();
    cout<<" + ";
    c2.showvalue();
    c3.add(c1,c2);
    cout<<" = ";
    c3.showvalue();
    return 0;


    
]