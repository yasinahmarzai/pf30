#include <iostream>
#include <cmath>
using namespace std;

void q7() {
    string roll;
    float pf, ic, cg;
    cin >> roll >> pf >> ic >> cg;
    float total = pf + ic + cg;
    cout << "Total: " << total << endl;
    cout << "Average: " << total / 3 << endl;
}


int main(){
    q7();
    return 0;
}
