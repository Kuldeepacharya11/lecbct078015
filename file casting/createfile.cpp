

#include<iostream>
#include<fstream>
using namespace std;


int main() {
    fstream file;
    file.open("createfile.txt",ios::out);
    if (!file) {
        cout<<"error in creating file!!";
        return 0;
    }
    cout<<"file created successfully";
    file.close();
    return 0;


    }
