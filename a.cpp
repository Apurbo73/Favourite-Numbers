#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        int a;
        cin >> a;
        if (a % 2 == 0 && a % 7 == 0)
        {
            cout << "Alice" << endl;
        }

        else if (a % 2 != 0 && a % 9 == 0)
        {
            cout << "Bob" << endl;
        }
        else
        {
            cout << "Charlie" << endl;
        }

    }

}