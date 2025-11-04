#include <iostream>
using namespace std;

// chocolate_bar - an array which represents the tastiness
// value of each 'block' of the chocolate bar
int chocolate_bar[100005];

int main() {
    // n - length of the chocolate bar
    int n; cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> chocolate_bar[i];
    }

    for (int i = 1; i < n; i++) {
        // we are going to split the chocolate bar into
        // two halves. First half is [1 to i],
        // second half is [i + 1 to n (the end)]

        // we are calculating the tastiness value of the first half
        int tastiness_value_first_half = 0;
        for (int j = 1; j <= i; j++) {
            tastiness_value_first_half += chocolate_bar[j];
        }

        // try calculating the tastiness value of the second half
        // yourself!
    }
}