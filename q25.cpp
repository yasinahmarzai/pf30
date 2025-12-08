#include <iostream>
#include <cmath>
using namespace std;

void q25() {
    float a, b, c;
    cin >> a >> b >> c;
    float s = (a + b + c) / 2;
    cout << sqrt(s * (s - a) * (s - b) * (s - c)) << endl;
}


int main(){
    q25();
    return 0;
}
