#include <iostream>

using namespace std;

// the score of every house
int score[100005];

int best_score = 0;

int main() {
    // how many houses in total
    int n; cin >> n;

    // the width of the mansion
    int w; cin >> w;

    for (int i = 1; i <= n; i++) {
        cin >> score[i];
    }

    for (int start = 1; start + w - 1 <= n; start++) {
        // our mansion goes from [start -> start + w]

        int current_score = 0;
        for (int i = start; i <= start + w - 1; i++) {
            current_score += score[i];
        }

        if (current_score > best_score) {
            best_score = current_score;
        }
    }

    cout << best_score;
}