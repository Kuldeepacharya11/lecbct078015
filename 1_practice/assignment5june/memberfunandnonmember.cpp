#include <iostream>
using namespace std;
class member

{
public:
    void memberFunction() 
    {
        cout << "This is a member function."<<endl;
    }
};

void nonMemberFunction() 
{
    cout << "This is a non-member function."<<endl;
}

int main() 
{
    member a1 ;
    a1.memberFunction();
    nonMemberFunction();
    return 0;
}