#include <iostream>
using namespace std;
class bctClass
{
private:
    int myNumber;

public:
    bctClass() 
    {
        myNumber = 0;
    }
    bctClass(int number) 
    {
        myNumber = number;
    }
    int getNumber()
    {
        return myNumber;
    }
};

int main() 
{
   bctClass obj1;
    cout << "Default Constructor: " << obj1.getNumber() << endl;
    bctClass obj2(10);
    cout << "Parameterized Constructor: " << obj2.getNumber() << endl;

    return 0;
}