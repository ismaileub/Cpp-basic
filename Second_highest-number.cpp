<<<<<<< HEAD
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        int a, b, c;
        cin >> a >> b >> c;

        int temp;
        if ((a < b && b < c) || (c < b && b < a))
            temp = b;
        else if ((b < a && a < c) || (c < a && a < b))
            temp = a;
        else if ((a < c && c < b) || (b < c && c < a))
            temp = c;

        cout << temp << endl;
    }

    return 0;
}

=======
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        int a, b, c;
        cin >> a >> b >> c;

        int temp;
        if ((a < b && b < c) || (c < b && b < a))
            temp = b;
        else if ((b < a && a < c) || (c < a && a < b))
            temp = a;
        else if ((a < c && c < b) || (b < c && c < a))
            temp = c;

        cout << temp << endl;
    }

    return 0;
}

>>>>>>> dd38d0516a39282e798ab9c8f2825b609fbe6e34
