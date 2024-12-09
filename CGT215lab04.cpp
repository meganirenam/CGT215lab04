#include <iostream>

using namespace std;

// Print out the menu of choices for the user to select from
void printMenu() {
    cout << "Please Select which operation to perform:" << endl;
    cout << "\t1. Factorial" << endl;
    cout << "\t2. Arithmetic Series" << endl;
    cout << "\t3. Geometric Series" << endl;
    cout << "\t4. Exit" << endl;
    cout << "Your Selection: ";
}

void factorial() {
    int n;
    do {
        cout << "Factorials: " << endl;
        cout << "Enter a number: ";
        cin >> n;
        if (n < 0) {
            cout << "Nice try, please enter a POSITIVE number . . ." << endl;
        }
    } while (n < 0);

    long long factorial = 1;
    cout << n << "! = ";

    for (int i = 1; i <= n; ++i) {
        factorial *= i;
        cout << i;
        if (i < n) {
            cout << " * ";
        }
    }
    cout << " = " << factorial << endl;
}

void arithmetic() {
    int difference; 
    int start; 
    int elements;

    cout << "Arithmithmetic Series: " << endl;
    cout << "Enter a number to start at: ";
    cin >> start;

    cout << "Enter a number to add each time: ";
    cin >> difference;

    do {
        cout << "Enter the number of elements in the series: ";
        cin >> elements;
        if (elements <= 0) {
            cout << "Nice try, please enter a POSITIVE number . . ." << endl;
        }
    } while (elements <= 0);

    int sum = 0;
  
    for (int i = 0; i < elements; ++i) {
        int term = start + i * difference;
        cout << term;
        sum += term;

        if (i < elements - 1) {
            cout << " + ";
        }
    }
    cout << " = " << sum << endl;
}

void geometric() {
    double r, a;
    int elements;

    cout << "Geometric Series: " << endl;
    cout << "Enter a number to start at: ";
    cin >> a;

    cout << "Enter a number to multiply by each time: ";
    cin >> r;

    do {
        cout << "Enter the number of elements in the series: ";
        cin >> elements;
        if (elements <= 0) {
            cout << "Nice try, please enter a POSITIVE number . . ." << endl;
        }
    } while (elements <= 0);

    double sum = 0;
    for (int i = 0; i < elements; ++i) {
        double term = a * pow(r, i);
        cout << term;
        sum += term;

        if (i < elements - 1) {
            cout << " + ";
        }
    }
    cout << " = " << sum << endl;
}

int main() {
    int choice;
    char again;
    do {
        printMenu();
        cin >> choice;

        // Quit if user chooses to exit (or any invalid choice)
        if (choice > 3 || choice < 1) {
            return 0;
        }
        else if (choice == 1) {
            factorial();
        }
        else if (choice == 2) {
            arithmetic();
        }
        else if (choice == 3) {
            geometric();
        }

        cout << "Go Again? [Y/N] ";
        cin >> again;
    } while (again == 'y' || again == 'Y');

    return 0;
}
