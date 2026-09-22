#include <iostream>
#include <string>
using namespace std;

const int MAX = 5;

string historyStack[MAX];
int top = -1;

// Check if stack is full
bool isFull()
{
    return top == MAX - 1;
}

// Check if stack is empty
bool isEmpty()
{
    return top == -1;
}

// Return stack size
int size()
{
    return top + 1;
}

// Visit a new page - PUSH
void visitPage()
{
    string page;

    if (isFull())
    {
        cout << "\nBrowser history is full!"
             << "\nCannot visit a new page." << endl;
        return;
    }

    cout << "\nEnter the page name or URL: ";
    cin >> page;

    top++;
    historyStack[top] = page;

    cout << "Visited page: " << historyStack[top] << endl;
}

// Go back - POP
void goBack()
{
    if (isEmpty())
    {
        cout << "\nBrowser history is empty!"
             << "\nCannot go back." << endl;
        return;
    }

    cout << "\nGoing back from: "
         << historyStack[top] << endl;

    top--;

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

// Show current page - PEEK
void showCurrentPage()
{
    if (isEmpty())
    {
        cout << "\nNo current page."
             << "\nBrowser history is empty." << endl;
        return;
    }

    cout << "\nCurrent page: "
         << historyStack[top] << endl;
}

// Display complete history
void displayHistory()
{
    if (isEmpty())
    {
        cout << "\nBrowser history is empty." << endl;
        return;
    }

    cout << "\nBrowser History "
         << "(Current page to oldest page):" << endl;

    for (int i = top; i >= 0; i--)
    {
        cout << historyStack[i] << endl;
    }
}

int main()
{
    int choice;

    do
    {
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
                    cout << "\nHistory is EMPTY." << endl;
                else
                    cout << "\nHistory is NOT EMPTY." << endl;
                break;

            case 7:
                if (isFull())
                    cout << "\nHistory is FULL." << endl;
                else
                    cout << "\nHistory is NOT FULL." << endl;
                break;

            case 8:
                cout << "\nExiting Browser History..." << endl;
                break;

            default:
                cout << "\nInvalid choice!"
                     << "\nPlease select a valid option." << endl;
        }

    } while (choice != 8);

    return 0;
}