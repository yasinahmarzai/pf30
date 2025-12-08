#include <iostream>
#include <cmath>
using namespace std;

void q3() {
    int a = 10, b = 20;
    cout << "Before interchange:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    int temp = a;
    a = b;
    b = temp;
    cout << "After interchange:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}


int main(){
    q3();
    return 0;
}
