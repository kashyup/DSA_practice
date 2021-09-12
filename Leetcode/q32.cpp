/*

Given an array of integers nums sorted in ascending order, find the starting and ending position of a given target value.

If target is not found in the array, return [-1, -1].

You must write an algorithm with O(log n) runtime complexity.

 

Example 1:

Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]
Example 2:

Input: nums = [5,7,7,8,8,10], target = 6
Output: [-1,-1]
Example 3:

Input: nums = [], target = 0
Output: [-1,-1]
 

Constraints:

0 <= nums.length <= 105
-109 <= nums[i] <= 109
nums is a non-decreasing array.
-109 <= target <= 109

*/

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int lower = -1;
        
        int upper = -1;
        
        int left = 0;
        
        int right = nums.size()-1;
        
        while(left <= right ){
            
            int mid = ( right + left)/2;
            
            
            if(nums[mid] > target ){
                
                right = mid - 1;
            }
            else if( nums[mid] < target){
                left = mid + 1;
            }
        
            else{
             
                if(mid==0||nums[mid-1] != nums[mid]){
                    
                    lower = mid;
                    
                    break;
                }
                else{
                    
                    right = mid -1;
                }
                
            }
            
        
        }
    
        
         int l = 0;
        
         int r = nums.size()-1;
        
        while(l<=r){
            
            int mid = ( r + l)/2;
            
            
            if(nums[mid] > target ){
                
                r = mid - 1;
            }
            else if(nums[mid] < target){
                l= mid + 1;
            }
            
            else {
                
                if(mid==nums.size()-1||nums[mid]!=nums[mid+1]){
                    
                    upper = mid;
                    
                    break;
                    
                }
                else{
                    l = mid+1;
                }
            
            }
            
            
        }
        
        return {lower ,upper};
        
        
        
       
        
        
        
    }
};