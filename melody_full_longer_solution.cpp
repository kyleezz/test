#include <iostream>
 
using namespace std;
 
int number[100005];
int occurrences[100005];
int max_occurrence = 0;
int ans = 0;
 
int main() {
    int n;
    int k;
    cin >> n >> k;
    
    for (int i = 0; i < n; i++) {
        cin >> number[i];
    }
    
    for (int i = 0; i < n; i = i + 3) {
        // the current number has occured one more time
        int current_number = number[i];
        occurrences[current_number] = occurrences[current_number] + 1;
        max_occurrence = max(max_occurrence, occurrences[current_number]);
    }
    
    ans = ans + (n / 3 - max_occurrence);
    
    // reset these variables
    max_occurrence = 0;
    for (int i = 0; i <= k; i++) {
        occurrences[i] = 0;
    }
    
    for (int i = 1; i < n; i = i + 3) {
        // the current number has occured one more time
        int current_number = number[i];
        occurrences[current_number] = occurrences[current_number] + 1;
        max_occurrence = max(max_occurrence, occurrences[current_number]);
    }
    
    ans = ans + (n / 3 - max_occurrence);
    
    max_occurrence = 0;
    for (int i = 0; i <= k; i++) {
        occurrences[i] = 0;
    }
    
    for (int i = 2; i < n; i = i + 3) {
        // the current number has occured one more time
        int current_number = number[i];
        occurrences[current_number] = occurrences[current_number] + 1;
        max_occurrence = max(max_occurrence, occurrences[current_number]);
    }
    
    ans = ans + (n / 3 - max_occurrence);
    
    cout << ans;
}
