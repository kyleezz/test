#include <iostream>

using namespace std;

int numbers[100005];
int occurrences[100005];
int max_occurrence = 0;
int main() {
    int n;
    int k;
    cin >> n >> k;
    
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }
    
    // We will first change all the 1st digit of the groups to the same number
    // Remember, we have to do this in the least number of moves as well
    
    // We can do this by changing every first digit to the MOST FREQUENTLY OCCURRING
    // first digit. For example, if we have [3 2 4] [5 8 3] [3 2 1], we can change
    // it to [3 2 4] [3 8 3] [3 2 1] which takes a single move.
    for (int i = 0; i < n; i = i + 3) {
        // the current number has occured one more time
        int current_number = numbers[i];
        occurrences[current_number] = occurrences[current_number] + 1;
        max_occurrence = max(max_occurrence, occurrences[current_number]);
    }
    
    // the number that occurred the most in the 1st digit occurred for a total of 
    // max_occurrence number of times 
    
    // for example, [6 2 4] [5 8 3] [6 2 1] [6 4 5] will have max_occurrence = 3
    // since 6 occurred the MOST for a total of 3 times
}
