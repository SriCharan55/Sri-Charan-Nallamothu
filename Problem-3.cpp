#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter a: ";
    cin >> a;

   
    int terms;
    if (a % 2 == 0) {
        terms = a - 1;   
    } else {
        terms = a;       
    }

   
    for (int i = 0; i < terms; i++) {
        int value = 2 * i + 1;   
        cout << value;
        if (i != terms - 1) {
            cout << ", ";
        }
    }

    return 0;
}
