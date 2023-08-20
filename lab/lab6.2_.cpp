#include <iostream>

using namespace std;

class Matrix {
public:
    Matrix() {
        for (int i = 0; i < 2; ++i) {
            for (int j = 0; j < 2; ++j) {
                data[i][j] = 0;
            }
        }
    }

    Matrix(int arr[2][2]) {
        for (int i = 0; i < 2; ++i) {
            for (int j = 0; j < 2; ++j) {
                data[i][j] = arr[i][j];
            }
        }
    }

    friend Matrix operator-(const Matrix& m1, const Matrix& m2);

    void display() const {
        for (int i = 0; i < 2; ++i) {
            for (int j = 0; j < 2; ++j) {
                cout << data[i][j] << " ";
            }
            cout << endl;
        }
    }

private:
    int data[2][2];
};

Matrix operator-(const Matrix& m1, const Matrix& m2) {
    Matrix result;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            result.data[i][j] = m1.data[i][j] * m2.data[i][j];
        }
    }
    return result;
}

int main() {
    using namespace std;

    int values1[2][2] = {{1, 2}, {3, 4}};
    Matrix M1(values1);

    int values2[2][2];
    cout << "Enter values for M2 (4 integers): ";
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            cin >> values2[i][j];
        }
    }
    Matrix M2(values2);

    Matrix M3 = M1 - M2;

    cout << "Matrix M1:" << endl;
    M1.display();

    cout << "Matrix M2:" << endl;
    M2.display();

    cout << "Matrix M3 = M1 - M2:" << endl;
    M3.display();

    return 0;
}
