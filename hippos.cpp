#include <iostream>

using namespace std;

// hippos is an array that keeps track of the location of every hippo
int hippos[100005];

// middle_region is an array that keeps track of how many flowers are in each
// of the middle regions
int middle_region[100005];

int main() {
    // N - number of flowers
    // H - number of hippos
    // F - number of fences
    int n, h, f;
    cin >> n >> h >> f;

    for (int i = 1; i <= h; i++) {
        cin >> hippos[i];
    }

    // all the flowers to the left of the leftmost region can be saved
    // using a single fence
    int leftmost_region = hippos[1] - 1;

    // similarly, all the flowers to the right of the rightmost region
    // can be saved using a single fence
    int rightmost_region = n - hippos[n];

    for (int i = 1; i <= n; i++) {
        middle_region[i] = hippos[i + 1] - hippos[i] - 1;
    }

    // Now, you know how many flowers are in the leftmost and rightmost regions (you
    // need a single fence to save either region)

    // You also know how many flowers are in each of the middle_region, this
    // information is stored in the array.

    // Now, try to maximise how many flowers you can save
}