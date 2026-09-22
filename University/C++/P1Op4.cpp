#include <iostream>
using namespace std;
int main() {
    int arr2[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    int row, column, newValue;
    cout << "Enter row, column and new value: ";
    cin >> row >> column >> newValue;
    arr2[row][column] = newValue;
    cout << "Updated 2D Array:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}