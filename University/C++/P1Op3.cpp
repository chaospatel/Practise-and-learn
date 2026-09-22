#include <iostream>
using namespace std;
int main() {
    int m, n;
    cin >> m >> n;
    int arr2[10][10];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr2[i][j];
        }
    }
    cout << "2D Array:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}