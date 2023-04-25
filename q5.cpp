#include <iostream>
#include <string>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::pow;
using std::floor;



int largest_number_possible(int a, int b) {
    int x = 0;
    if (a != 1) {
        while (pow(a, x) < b) {
            x++;
        }
        return pow(a,x - 1);
    }
    return 1;
}

int number_of_steps(int a, int b, int largest) {
    int steps = 0;
    while (b > 0){
        steps += floor(b/largest);
        b = b % largest;
        largest = largest / a;
    }
        return steps;
}

int main() {
    int T; cin >> T;
    while (T--) {
        int a, b, largest;
        cin >> a >> b;
        largest = largest_number_possible(a, b);
        cout << number_of_steps(a, b, largest) << endl;

    }
}