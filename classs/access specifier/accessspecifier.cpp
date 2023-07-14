#include <iostream>

class Base {
public:
    int publicVar;      // Public member

protected:
    int protectedVar;   // Protected member

private:
    int privateVar;     // Private member

public:
    void setValues(int a, int b, int c) {
        publicVar = a;
        protectedVar = b;
        privateVar = c;
    }

    void displayValues() {
        std::cout << "Public Variable: " << publicVar << std::endl;
        std::cout << "Protected Variable: " << protectedVar << std::endl;
        std::cout << "Private Variable: " << privateVar << std::endl;
    }
};

class Derived : public Base {
public:
    void accessBaseMembers() {
        publicVar = 1;              // Accessible (public member)
        protectedVar = 2;           // Accessible (protected member)
        // privateVar = 3;          // Not accessible (private member)
    }
};

int main() {
    Base obj;
    obj.setValues(10, 20, 30);
    obj.displayValues();

    std::cout << std::endl;

    Derived derivedObj;
    derivedObj.accessBaseMembers();
    derivedObj.displayValues();

    return 0;
}