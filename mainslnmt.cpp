#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int numRows, numCols;
    cout << "Nhap so hang va so cot: ";
    cin >> numRows >> numCols;

    int matrix[numRows][numCols];
    srand(time(NULL)); 
    
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++) {
            matrix[i][j] = rand() % 100; 
        }
    }

  
    cout << "ma tran la:" << endl;
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

 
    int maxVal = matrix[0][0];
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++) {
            if (matrix[i][j] > maxVal) {
                maxVal = matrix[i][j];
            }
        }
    }

    cout << "Phan tu lon nhat cua ma tran la: " << maxVal << endl;

    return 0;

}
