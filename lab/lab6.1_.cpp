#include <iostream>

using namespace std;

class Design1 {
public:
    Design1(int c, int q, double p) : code(c), qty(q), price(p) {}

    int getCode() const {
        return code;
    }

    int getQty() const {
        return qty;
    }

    double getPrice() const {
        return price;
    }

private:
    int code;
    int qty;
    double price;
};

class Design2 {
public:
    Design2(const Design1& d1) : code(d1.getCode()), value(d1.getQty() * d1.getPrice()) {}

    int getCode() const {
        return code;
    }

    double getValue() const {
        return value;
    }

private:
    int code;
    double value;
};

int main() {
    using namespace std;

    // Create a Design1 object
    Design1 D1(123, 5, 10.0);

    // Convert Design1 to Design2 using constructor
    Design2 D2 = D1;

    cout << "Design1 - Code: " << D1.getCode() << ", Qty: " << D1.getQty() << ", Price: " << D1.getPrice() << endl;
    cout << "Design2 - Code: " << D2.getCode() << ", Value: " << D2.getValue() << endl;

    return 0;
}

