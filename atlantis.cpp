#include <iostream>

using namespace std;

// the height of every single column in the city
int height[1000005];

// counter keeping track of the final answer
int answer = 0;

// an array of counter keeping track of whether there are columns
// on the left AND right that are both taller
int valid[1000005];

int main() {
    // how many columns in total
    int n; cin >> n;

    // reading in the height of every single column
    for (int i = 1; i <= n; i++) {
        cin >> height[i];
    }

    int tallest = height[1];
    for (int i = 2; i <= n; i++) {
        if (height[i] < tallest) {
            valid[i] += 1;
        } else {
            tallest = height[i];
        }
    }

    tallest = height[n];
    for (int i = n - 1; i >= 1; i--) {
        if (height[i] < tallest) {
            valid[i] += 1;
        } else {
            tallest = height[i];
        }
    }

    for (int i = 1; i <= n; i++) {
        if (valid[i] == 2) answer++;
    }

    cout << answer;
}