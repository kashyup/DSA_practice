/*Given a positive integer n, find the smallest integer which has exactly the same digits existing in the integer n and is greater in value than n. If no such positive integer exists, return -1.

Note that the returned integer should fit in 32-bit integer, if there is a valid answer but it does not fit in 32-bit integer, return -1.

 

Example 1:

Input: n = 12
Output: 21
Example 2:

Input: n = 21
Output: -1
 

Constraints:

1 <= n <= 231 - 1
*/
class Solution {
public:
    int nextGreaterElement(int n) {
        string number=to_string(n);
        if(next_permutation(number.begin(),number.end())){
            long long num=stoll(number);
            if(num<=INT_MAX&&num>INT_MIN){
                return num;
            }
        }
        return -1;
        
    }
};