#include <iostream>
#include <cmath>
using namespace std;

void q9() {
    float a, b, c, d;
    cin >> a >> b >> c >> d;
    float m = max(max(a, b), max(c, d));
    cout << m << endl;
}


int main(){
    q9();
    return 0;
}
