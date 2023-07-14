#include <iostream>
using namespace std;

class Time {
private:
    int hr;
    int min;
    int sec;

public:
    // Default constructor
    Time()  {
        
     hr=12;
    min=0; 
    sec=0;
    }

    // Parameterized constructor
    Time(int seconds) {
        hr = seconds / 3600;
        seconds %= 3600;
        min = seconds / 60;
        sec = seconds % 60;
    }

    // Copy constructor
    Time(const Time& other) {
         hr=other.hr;
          min=other.min;
           sec=other.sec; 
    }

    // Function to display the time
    void displayTime() {
        cout << hr << " hr " << min << " min " << sec << " sec" <<endl;
    }
};

int main() {
    // Using default constructor
    Time t1;
    cout << "Default constructor: ";
    t1.displayTime();

    // Using parameterized constructor
    int userInput;
    cout << "Enter the time in seconds: ";
   cin >> userInput;
    Time t2(userInput);
    cout << "Parameterized constructor: ";
    t2.displayTime();

    // Using copy constructor
    Time t3 = t2;
    cout << "Copy constructor: ";
    t3.displayTime();

    return 0;
}
