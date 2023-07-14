#include<iostream>
using namespace std;
class iteminfo 
 {
    private:
    int itemid;
    float cost;
    public:
    void setdata(int it ,float cst)
    {
    itemid=it;
    cost=cst;

    }
   
    void showdata()
    {
    cout<<"\nitemid:"<<itemid;
    cout<<"\ncost:"<<cost<<endl;

    }
    
        };
        int main(){
            
        iteminfo i1,i2;
        i1.setdata(55,35.5);
        i2.setdata(555,135.2);
        cout<<"\ninformation on first item";
        i1.showdata();
        cout<<"\ninformation of second item";
        i2.showdata();
        return 0;
    }
    
   
   


    

    



