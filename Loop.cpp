#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int years = 0;

    // Use a while loop to simulate the yearly weight increase
    // A while loop is used when the number of iterations is not known in advance
    while (a <= b) {
        a *= 3; // Ram's weight triples
        b *= 2; // Shyam's weight doubles
        years++;
    }

    cout << years << endl;

    return 0;
}
