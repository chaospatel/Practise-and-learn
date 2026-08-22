#include <iostream>
#include <string>
using namespace std;
// --------------------------------------------------
// 1. Maximum size of the stack
// --------------------------------------------------
const int MAX = 5;
// --------------------------------------------------
// 2. Declare the array-based stack
// --------------------------------------------------
string historyStack[MAX];
// Top pointer
int top = -1;
// --------------------------------------------------
// 3. Check whether the stack is full
// --------------------------------------------------
bool isFull()
{
    return top == MAX - 1;
}
// --------------------------------------------------
// 4. Check whether the stack is empty
// --------------------------------------------------
bool isEmpty()
{
    return top == -1;
}
// --------------------------------------------------
// 5. Return the current size of the stack
// --------------------------------------------------
int size()
{
    return top + 1;
}
// --------------------------------------------------
// 6. Visit a new page - PUSH operation
// --------------------------------------------------
void visitPage()
{
    string page;
    // Check whether stack is full
    if (isFull())
    {
        cout << "\nBrowser history is full! "
             << "Cannot visit a new page." << endl;
        return;
    }
    // Read page name
    cout << "\nEnter the page name or URL: ";
    cin >> page;
    // Move top to the next position
    top++;
    // Insert page at top
    historyStack[top] = page;
    cout << "Visited page: " << historyStack[top] << endl;
}
//---------------------------------------------------
// 7. Go Back - POP operation
// --------------------------------------------------
void goBack()
{
    // Check whether stack is empty
    if (isEmpty())
    {
        cout << "\nBrowser history is empty! "
             << "Cannot go back." << endl;
        return;
    }

    // Display page being removed
    cout << "\nGoing back from: "
         << historyStack[top] << endl;

    // Remove the current page logically
    top--;

    // Check whether another page exists
    if (!isEmpty())
    {
        cout << "Current page is now: "
             << historyStack[top] << endl;
    }
    else
    {
        cout << "No previous page exists." << endl;
    }
}

// --------------------------------------------------
// 8. Show Current Page - TOP operation
// --------------------------------------------------

void showCurrentPage()
{
    // Check whether stack is empty
    if (isEmpty())
    {
        cout << "\nNo current page. "
             << "Browser history is empty." << endl;
        return;
    }

    // Display the topmost page
    cout << "\nCurrent page: "
         << historyStack[top] << endl;
}

// --------------------------------------------------
// 9. Display complete browser history
// --------------------------------------------------

void displayHistory()
{
    // Check whether stack is empty
    if (isEmpty())
    {
        cout << "\nBrowser history is empty." << endl;
        return;
    }

    cout << "\nBrowser History "
         << "(Current page to oldest page):" << endl;

    // Start from top
    for (int i = top; i >= 0; i--)
    {
        cout << i << " : "
             << historyStack[i] << endl;
    }
}

// --------------------------------------------------
// 10. Main function
// --------------------------------------------------

int main()
{
    int choice;

    do
    {
        // --------------------------------------------------
        // Display menu
        // --------------------------------------------------

        cout << "\n====================================" << endl;
        cout << "       BROWSER HISTORY STACK        " << endl;
        cout << "====================================" << endl;

        cout << "1. Visit New Page" << endl;
        cout << "2. Go Back" << endl;
        cout << "3. Show Current Page" << endl;
        cout << "4. Display Full History" << endl;
        cout << "5. Show History Size" << endl;
        cout << "6. Check if History is Empty" << endl;
        cout << "7. Check if History is Full" << endl;
        cout << "8. Exit" << endl;

        cout << "\nEnter your choice: ";
        cin >> choice;

        // --------------------------------------------------
        // Perform selected operation
        // --------------------------------------------------

        switch (choice)
        {
            case 1:
                visitPage();
                break;

            case 2:
                goBack();
                break;

            case 3:
                showCurrentPage();
                break;

            case 4:
                displayHistory();
                break;

            case 5:
                cout << "\nNumber of pages in history: "
                     << size() << endl;
                break;

            case 6:
                if (isEmpty())
                {
                    cout << "\nHistory is EMPTY." << endl;
                }
                else
                {
                    cout << "\nHistory is NOT EMPTY." << endl;
                }
                break;

            case 7:
                if (isFull())
                {
                    cout << "\nHistory is FULL." << endl;
                }
                else
                {
                    cout << "\nHistory is NOT FULL." << endl;
                }
                break;

            case 8:
                cout << "\nExiting Browser History..." << endl;
                break;

            default:
                cout << "\nInvalid choice! "
                     << "Please select a valid option." << endl;
        }

    } while (choice != 8);

    return 0;
}
