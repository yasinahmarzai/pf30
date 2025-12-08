#include <iostream>
#include <cmath>
using namespace std;

void q14() {
    int a = 5, b = 10;
    int t = a;
    a = b;
    b = t;
    cout << a << " " << b << endl;
}


int main(){
    q14();
    return 0;
}
