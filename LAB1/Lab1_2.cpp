#include <iostream>

using namespace std;

int main() {

    float var1, var2, sum, diff, prod;

    cout << "Enter the value of var1: ";
    cin >> var1;

    cout << "Enter the value of var2: ";
    cin >> var2;

    sum = var1 + var2;
    diff = var1 - var2;
    prod = var1 * var2;

    cout << "var1 = " << var1 << endl;
    cout << "var2 = " << var2 << endl;
    cout << "sum = " << sum << endl;
    cout << "diff = " << diff << endl;
    cout << "prod = " << prod << endl;

    return 0;
}


