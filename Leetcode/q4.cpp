/*Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times.

Follow-up: Could you solve the problem in linear time and in O(1) space?

 

Example 1:

Input: nums = [3,2,3]
Output: [3]
Example 2:

Input: nums = [1]
Output: [1]
Example 3:

Input: nums = [1,2]
Output: [1,2]
 

Constraints:

1 <= nums.length <= 5 * 104
-109 <= nums[i] <= 109   */




class Solution {
public:

vector<int> majorityElement(vector<int>& nums) {
    int n=nums.size();
    vector<int> ans;
    unordered_map<int,int> m;
    for(int i=0;i<n;i++)m[nums[i]]++;
    for(auto it:m){
        if(it.second > n/3){
            ans.push_back(it.first);
        }
    }
    return ans;
}
};



/*

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
   int e1 =-1, e2=-1, cnt1=0, cnt2=0;
        int n = nums.size();
        
        for(int i=0;i<n;i++)
        {
            if(e1 == nums[i])
                cnt1++;
            else if (e2 == nums[i])
                cnt2++;
            else if(cnt1==0)
            {
                e1 =nums[i];
                cnt1=1;
            }
            else if(cnt2==0)
            {
                e2 = nums[i];
                cnt2=1;
            }
            else
            {
                cnt1--;
                cnt2--;
            }
        }
        
        vector <int> ans;
        int c1=0 , c2=0;
        
        for(int i=0;i<n;i++)
        {
            if(nums[i] == e1)
                c1++;
            else if(nums[i] == e2)
                c2++;
        }
        
        if(c1 > (n/3))
            ans.push_back(e1);
        if(c2 > (n/3))
            ans.push_back(e2);
        return ans;
        
        
    }
        
        
    
};