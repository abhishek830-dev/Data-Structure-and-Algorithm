// Date: 22 Feb 2026*******************************************************
// Weekly Contest - 490
// Leetcode : 3847
// Difficulty: Medium
// Approach:
    // - Track active player
    // - Apply swap rules
    // - Add score
// Concept: Simulation / Vector in Array
// Mistake: Swap logic confuse hua
// Learned: State tracking, toggle logic
// T.C. = O(n)
// S.C. = O(1) Bas 3 variables.  Size input ke saath nahi badh raha.


// Q.1:  Find the Score Difference in a Game

// ⭐ Pattern 1 — n pehle diya hota hai (MOST COMMON)

// Input:

// 5
// 1 2 3 4 5

// Code:

// int n;
// cin >> n;
// vector<int> nums(n);
// for(int i=0;i<n;i++){
//     cin >> nums[i];
// }

// 👉 Ye safest method hai
// 👉 80% problems me ye hota hai

// #include<bits/stdc++.h>
// using namespace std;
// // function + sirf logic
// int scoreDifference(vector<int> &nums) {
//     int first = 0;
//     int second = 0;
//     int active = 1;

//     for (int i=0; i<nums.size(); i++) {
//         // odd rule
//         if (nums[i] % 2 == 1) {
//             active = (active==1 ? 2 : 1);    // use Swapping Function
//         }

//         // 6th Game rule
//         if (i % 6 == 5) {
//             active = (active==1 ? 2 : 1);
//         } 

//         // add score
//         if (active == 1) first += nums[i];
//         else second += nums[i];
//     }
//     return first - second;
// }

// // Main function : input + call + output
// int main () {
//     int n;
//     cout << " Enter the value of n: ";
//     cin >> n;

//     vector<int> nums(n);
//     for (int i=0; i<n; i++) {
//         cin >> nums[i];
//     }
//     int ans = scoreDifference(nums);
//     cout << ans;

// }



// ************************************ Hacker Rank Style input ******************************************
// ⭐ Pattern 2 — single line array (LeetCode style)

// Input:

// 1 2 3 4 5

// n nahi diya hota.

// Tab use karo:

// string line;
// getline(cin, line);

// stringstream ss(line);
// int x;
// vector<int> nums;

// while(ss >> x){
//     nums.push_back(x);
// }

// 👉 Ye safe version hai
// 👉 infinite loop nahi



#include <bits/stdc++.h>
using namespace std;

// logic function
int scoreDifference(vector<int>& nums){

    int first = 0;
    int second = 0;
    int active = 1;

    for(int i=0;i<nums.size();i++){

        if(nums[i] % 2 == 1){
            active = (active==1 ? 2 : 1);
        }

        if(i % 6 == 5){
            active = (active==1 ? 2 : 1);
        }

        if(active == 1) first += nums[i];
        else second += nums[i];
    }

    return first - second;
}

int main(){

    cout << "Enter the array: ";
    string line;
    getline (cin, line);

    stringstream ss(line);
    int x;
    vector<int> nums;

    while (ss >> x) {
        nums.push_back(x);
    }

    int ans = scoreDifference(nums);
    cout << ans;

    return 0;
}


// ⭐ Pattern 3 — multiple test cases

// Input:

// 2
// 5
// 1 2 3 4 5
// 3
// 7 8 9

// Code:

// int t;
// cin >> t;

// while(t--){
//     int n;
//     cin >> n;

//     vector<int> nums(n);
//     for(int i=0;i<n;i++){
//         cin >> nums[i];
//     }

//     cout << scoreDifference(nums) << endl;
// }