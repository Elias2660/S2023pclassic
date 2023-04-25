#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::max;
using std::sort;
using std::abs;

int tests;

int main() {
    cin >> tests;
    while (tests--) {
        int a, b, c, d; 
        cin >> a >> b >> c >> d;
        vector<int> l;
        l.push_back(a); l.push_back(b);l.push_back(c);l.push_back(d);
        sort(l.begin(),l.end());
        cout << max(abs(l[2] + l[3]), abs(l[0] + l[1])) << endl;
    }

}