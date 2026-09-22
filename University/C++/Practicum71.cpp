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

    // ---------------- Sequential Search ----------------
    int found = 0;
    int seqComparisons = 0;

    for (int i = 0; i < n; i++) {
        seqComparisons++;

        if (arr[i] == key) {
            cout << "\nSequential Search:";
            cout << "\nElement found at position: " << i + 1;
            cout << "\nComparisons: " << seqComparisons << endl;
            found = 1;
            break;
        }
    }

    if (found == 0) {
        cout << "\nSequential Search:";
        cout << "\nElement not found";
        cout << "\nComparisons: " << seqComparisons << endl;
    }
}