#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout<<"Enter 1st number : ";
    cin >> a ;
    cout<<"Enter 2nd number : ";
    cin>> b ;
    

    int x = a, y = b;

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    int gcd = a;

    int lcm = (x * y) / gcd;

    cout << "GCD = " << gcd << endl;
    cout << "LCM = " << lcm << endl;

    return 0;
}
