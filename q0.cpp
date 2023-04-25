#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int T;

int main() {
    cin >> T;
    while (T--) {
        int K;
        cin >> K; cout << K + 1 << endl;
        string S;
        cin  >> S; cout << S << "a" << endl;
        int a, b, c, d;
        cin >> a >> b >> c >> d; 
        cout << a + b + c + d << endl;
    }
}