/* 
Approach:
For finding min distance between two elements with indices i and j,
we have two possible paths :
1. length |i – j| in forward direction.
2. length n – |i – j| in backward directionnd.
So, we will traverse array linearly and take the minimum of above two paths on match.

Constraints:
1 <= words.length <= 100
1 <= words[i].length <= 100

Time Complexity : O(n * 100)
n - array size 
* 100 - for each string comparison operation
Space Complexity : O(1)
*/ 

class Solution {
public:
    int closetTarget(vector<string>& words, string target, int startIndex) {
        int n = words.size();
        int ans = INT_MAX;
        for(int i=0;i<n;i++){
            if(words[i]==target){
                ans = min(ans, min(abs(i-startIndex),n - abs(i-startIndex)));
            }
        }
        if(ans==INT_MAX) return -1;
        return ans;
    }
};
