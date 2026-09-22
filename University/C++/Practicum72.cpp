#include <iostream>
using namespace std;

int main() {
    int n, key;
    int arr[100];

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> key;
    // ---------------- Binary Search ----------------
    // Array must be sorted in ascending order

    int low = 0;
    int high = n - 1;
    int mid;
    int binaryComparisons = 0;
    int binaryFound = 0;

    while (low <= high) {
        mid = (low + high) / 2;
        binaryComparisons++;

        if (arr[mid] == key) {
            cout << "\nBinary Search:";
            cout << "\nElement found at position: " << mid + 1;
            cout << "\nComparisons: " << binaryComparisons << endl;
            binaryFound = 1;
            break;
        }
        else if (key < arr[mid]) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    if (binaryFound == 0) {
        cout << "\nBinary Search:";
        cout << "\nElement not found";
        cout << "\nComparisons: " << binaryComparisons << endl;
    }

    return 0;
}