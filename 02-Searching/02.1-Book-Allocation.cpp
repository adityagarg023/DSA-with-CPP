// Ayush is studying for NinjaTest, which will be held after 'N' days. 
// To score good marks, he has to study 'M' chapters, and the i-th chapter requires TIME[i] seconds to study. 
// The day in Ayush’s world has 100^100 seconds. The rules for studying are:
// 1. He reads the chapters sequentially, i.e., he studies (i+1)-th chapter only after completing the i-th chapter.
// 2. If he starts a chapter on a particular day, he completes it on the same day.
// 3. Ayush wants to distribute his workload over 'N' days to minimize the maximum study time in a day.
//
// Task: Find the minimal value of the maximum amount of time Ayush studies in a single day to complete all chapters in no more than 'N' days.
//
// Constraints:
// 1 <= T <= 10
// 1 <= N, M <= 10^4
// 1 <= TIME[i] <= 10^9

#include <bits/stdc++.h>
using namespace std;

// Function to check if it's possible to allocate chapters such that no day exceeds 'mid' seconds of study time.
bool isPossible(int mid, int n, int m, vector<int> &time) {
    int days = 1;       // Count of days needed
    int daySum = 0;     // Sum of study time for the current day

    for (int i = 0; i < m; i++) {
        if (time[i] > mid) 
            return false; // If a single chapter exceeds 'mid', it's not possible.

        if (daySum + time[i] <= mid) {
            // Add chapter's time to the current day's total if it doesn't exceed 'mid'.
            daySum += time[i];
        } else {
            // Move to the next day and reset daySum.
            days++;
            if (days > n) 
                return false; // If days exceed 'n', it's not possible.
            daySum = time[i];
        }
    }
    return true;
}

// Function to find the minimal value of the maximum study time in a day using Binary Search.
long long ayushGivesNinjatest(int n, int m, vector<int> &time) {
    int totalSum = accumulate(time.begin(), time.end(), 0);         // Total time required for all chapters.
    int maxTime = *max_element(time.begin(), time.end());           // Maximum time required for a single chapter.
    int start = maxTime, end = totalSum, ans = -1;                  // Binary search bounds.

    while (start <= end) {
        int mid = start + (end - start) / 2;                        // Calculate the middle value.

        if (isPossible(mid, n, m, time)) {                          // Check if 'mid' is a valid maximum study time.
            ans = mid;                                              // Update answer.
            end = mid - 1;                                          // Try to minimize further.
        } else {
            start = mid + 1;                                        // Increase 'mid' to allow more time.
        }
    }
    return ans;
}
