#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    map<int, int> result;

    for (int i = 1; i <= 9; i++) {
        result[i] = 0;
    }

    for (int num : arr) {
        for (int d = 1; d <= 9; d++) {
            if (num % d == 0) {
                result[d]++;
            }
        }
    }

    for (auto p : result) {
        cout << p.first << ": " << p.second << endl;
    }

    return 0;
}
