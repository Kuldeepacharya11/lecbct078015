#include <iostream>
#include <fstream>

using namespace std;

int main() {
    char data[100];
    ofstream outfile;
    
    outfile.open("secondfile.txt");
    cout << "Writing to the file" << endl;
    cout << "Enter name: ";
    cin.getline(data, 100);
    outfile << data << endl;
    cout << data << endl;
    outfile.close();
    
    ifstream infile;
    infile.open("secondfile.txt");
    cout << "Reading from the file" << endl;
    infile >> data;
    cout << data << endl;
    infile >> data;
    cout << data << endl;
    infile.close();
    
    return 0;
}
