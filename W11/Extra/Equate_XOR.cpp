#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Function to calculate the maximum achievable score
int max_score(int N, vector<int>& A) {
    // Map to store the maximum score for each possible value of X
    unordered_map<int, int> score_map;
    score_map[0] = 0; // Initial state, X = 0 and score = 0
    int max_score = 0; // Variable to track the maximum score

    // Iterate through the array
    for (int i = 0; i < N; ++i) {
        // Temporary map to store new scores for this iteration
        unordered_map<int, int> new_score_map;
        
        // Update score for each possible value of X encountered so far
        for (const auto& entry : score_map) {
            int x = entry.first;     // Current X value
            int score = entry.second; // Current score

            // Case 1: If X == A[i], add X to score
            if (x == A[i]) {
                new_score_map[x] = max(new_score_map[x], score + x);
            } else {
                // Case 2: XOR the current X with A[i]
                int new_x = x ^ A[i];
                new_score_map[new_x] = max(new_score_map[new_x], score);
            }
        }
        
        // Merge new scores into score_map
        score_map = new_score_map;
        
        // Update the maximum score found so far
        for (const auto& entry : score_map) {
            max_score = max(max_score, entry.second);
        }
    }

    return max_score;
}

int main() {
    int T;
    cin >> T; // Number of test cases
    
    while (T--) {
        int N;
        cin >> N; // Size of the array
        
        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i]; // Array elements
        }

        // Call max_score function and print the result
        cout << max_score(N, A) << endl;
    }

    return 0;
}
