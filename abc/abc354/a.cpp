#include <iostream>
using namespace std;

int main() {
    int H;
    cin >> H;

    int days = 0;
    int height = 0;

    while (height <= H) {
        height += (1 << days);
        days++;
    }

    cout << days << endl;
    return 0;
}
