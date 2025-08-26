#include <iostream>

using namespace std;

int occurrences_in_first_digit[100005];
int occurrences_in_second_digit[100005];
int occurrences_in_third_digit[100005];

int max_occurrence_in_first_digit = 0;
int max_occurrence_in_second_digit = 0;
int max_occurrence_in_third_digit = 0;

int ans = 0;

int main() {
    int n;
    int k;
    cin >> n >> k;
    
    for (int i = 0; i < n / 3; i++) {
        int first_digit, second_digit, third_digit;
        cin >> first_digit >> second_digit >> third_digit;
        
        occurrences_in_first_digit[first_digit] += 1;
        occurrences_in_second_digit[second_digit] += 1;
        occurrences_in_third_digit[third_digit] += 1;
        
        max_occurrence_in_first_digit = max(max_occurrence_in_first_digit, occurrences_in_first_digit[first_digit]);
        max_occurrence_in_second_digit = max(max_occurrence_in_second_digit, occurrences_in_second_digit[second_digit]);
        max_occurrence_in_third_digit = max(max_occurrence_in_third_digit, occurrences_in_third_digit[third_digit]);
    }
    
    ans = (n - max_occurrence_in_third_digit - max_occurrence_in_second_digit - max_occurrence_in_first_digit);
    
    cout << ans;
}
