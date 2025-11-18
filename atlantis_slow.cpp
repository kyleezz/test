#include <iostream>

using namespace std;

// the height of every single column in the city
int height[1000005];

// counter keeping track of the final answer
int answer = 0;

int main() {
    // how many columns in total
    int n; cin >> n;

    // reading in the height of every single column
    for (int i = 1; i <= n; i++) {
        cin >> height[i];
    }

    for (int i = 1; i <= n; i++) {
        // for every column in question, we have to verify that a taller one exists
        // on the left and the right

        bool taller_on_left = false;
        for (int left = 1; left < i; left++) {
            if (height[left] > height[i]) {
                taller_on_left = true;
            }
        }

        bool taller_on_right = false;
        for (int right = i + 1; right <= n; right++) {
            if (height[right] > height[i]) {
                taller_on_right = true;
            }
        }

        if (taller_on_left and taller_on_right) {
            answer = answer + 1;
        }
    }

    cout << answer << endl;
}