#include<iostream>
#include<string>

using namespace std;
class product{
   private:
    char name[20];
    int productid;
    float cost;
    public:
    void setdata(int pid,char pname[], float cst){
        productid=pid;
        strcpy(name,pname);
        cost=cst;
    

    }
    void showdata()
    {
        cout<<"\n product id: "<<productid<<endl;
        cout<<"\n product cost:"<<cost<<endl;
        cout<<"\n product name:"<<name<<endl;

    }


};
int main()
{
    product p1,p2;
    p1.setdata(944,"cd-rom",1500.00);

    p2.setdata(987,"monitor",132.00);
    cout<<"\n first product"<<endl;

    p1.showdata();
    cout<<"\n second product"<<endl;
    
    p2.showdata();
    return 0;

}