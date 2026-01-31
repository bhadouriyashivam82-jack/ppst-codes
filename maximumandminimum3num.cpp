//three no.s min max
//shivam singh bhadouriya
//roll 1153
#include <iostream>
using namespace std;

int main() {
    float a, b, c;
    cout << "enter the no.s" << endl;
    cin >> a >> b >> c;

    if (a > c) {
        if (a > b) {
            cout << "the max is" << a<<endl;
            if (b > c) {
                cout << "the min is" << c<<endl;
            }
        }
    }

    if (b > c) {
        if (b > a) {
            cout << "the max is " << b<<endl;
            if (a < c) {
                cout << "the min is" << a<<endl;
            }
        }
    }

    if (c > a) {
        if (c > b) {
            cout << "the max is " << c<<endl;
            if (a > b) {
                cout << " the min is " << b<<endl;
            }
        }
    }

    return 0;
}