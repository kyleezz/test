#include <iostream>

using namespace std;

int main() {
    // s - represents where the ball currently is (NEXT QUESTION: Chocolate Bar)
    int n, s, k; cin >> n >> s >> k;

    // for loop that runs k times
    for (int i = 0; i < k; i++) {
        // we are moving the cup at position a to position b
        int a, b; cin >> a >> b;

        if (a == s) {
            // case 3:
            s = b;
        } else if (a < s && b >= s) {
            // case 4:
            s = s - 1;
        } else if (a > s && b <= s) {
            // case 5 (try filling this in by yourself):
            s = s + 1;
        }
    }
    // we print out the position of the ball last
    cout << s;
}