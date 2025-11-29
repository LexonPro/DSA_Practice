#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the height: ";
    cin >> n;

    // Upper half
    for (int i = 1; i <= n; i++) {
        int space = 2 * (i - 1);

        // Left stars
        for (int j = i; j <= n; j++)
            cout << "*";

        // Spaces in the middle
        for (int k = 1; k <= space; k++)
            cout << " ";

        // Right stars
        for (int j = i; j <= n; j++)
            cout << "*";

        cout << endl;
    }

    // Lower half
    for (int i = n - 1; i >= 1; i--) {
        int space = 2 * (i - 1);

        // Left stars
        for (int j = i; j <= n; j++)
            cout << "*";

        // Spaces in the middle
        for (int k = 1; k <= space; k++)
            cout << " ";

        // Right stars
        for (int j = i; j <= n; j++)
            cout << "*";

        cout << endl;
    }

    return 0;
}
