// Date: 22 Feb 2026*******************************************************
// Weekly Contest - 490
// Concept: Simulation / Vector in Array
// Difficulty: Medium
// Mistake: Swap logic confuse hua
// Learned: State tracking, toggle logic
// T.C. = O(n)
// S.C. = O(1) Bas 3 variables.  Size input ke saath nahi badh raha.



// Find the Score Difference in a Game 

#include<bits/stdc++.h>
using namespace std;
// function + sirf logic
int scoreDifference(vector<int> &nums) {
    int first = 0;
    int second = 0;
    int active = 1;

    for (int i=0; i<nums.size(); i++) {
        // odd rule
        if (nums[i] % 2 == 1) {
            active = (active==1 ? 2 : 1);    // use Swapping Function
        }

        // 6th Game rule
        if (i % 6 == 5) {
            active = (active==1 ? 2 : 1);
        } 

        // add score
        if (active == 1) first += nums[i];
        else second += nums[i];
    }
    return first - second;
}

// Main function : input + call + output
int main () {
    int n;
    cout << " Enter the value of n: ";
    cin >> n;

    vector<int> nums(n);
    for (int i=0; i<n; i++) {
        cin >> nums[i];
    }
    int ans = scoreDifference(nums);
    cout << ans;

}
