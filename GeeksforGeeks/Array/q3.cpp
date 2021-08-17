//find the duplicate number in an array
//function

//using two pointers and quicksort
class Solution {

public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int j=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=nums[j]){
                j++;
            }
            else{
                return nums[j];
            }
        }
        return -1;
    }
    
};

//using unordered set//

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int>res;
        for(auto &it:nums){
            if(res.count(it)){
                return it;
            }
            res.insert(it);
        }
        return -1;
    }
};