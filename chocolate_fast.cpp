#include <iostream>
using namespace std;
// https://github.com/kyleezz/test/blob/main/chocolate.cpp
// chocolate_bar - an array which represents the tastiness
// value of each 'block' of the chocolate bar
int chocolate_bar[100005];
int answer = 1000000000;

int main() {
    // n - length of the chocolate bar
    int n; cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> chocolate_bar[i];
    }

    // Initially, we are splitting the chocolate bar into two halves
    // The first half is simply the FIRST chocolate square
    // The second half is the rest of the chocolate bar
    int tastiness_value_first_half = chocolate_bar[1];

    int tastiness_value_second_half = 0;
    for (int i = 2; i <= n; i++) {
        tastiness_value_second_half += chocolate_bar[i];
    }

    answer = abs(tastiness_value_second_half - tastiness_value_first_half);

    for (int i = 2; i < n; i++) {
        tastiness_value_first_half += chocolate_bar[i];
        tastiness_value_second_half -= chocolate_bar[i];

        int current_difference = abs(tastiness_value_second_half - tastiness_value_first_half);
        answer = min(answer, current_difference);
    }

    cout << answer;
}