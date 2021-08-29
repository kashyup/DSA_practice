/*
Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.


Example 1:

Input: 
N = 5
arr[]= {0 2 1 2 0}
Output:
0 0 1 2 2
Explanation:
0s 1s and 2s are segregated 
into ascending order.
Example 2:

Input: 
N = 3
arr[] = {0 1 0}
Output:
0 0 1
Explanation:
0s 1s and 2s are segregated 
into ascending order.

Your Task:
You don't need to read input or print anything. Your task is to complete the function sort012() that takes an array arr and N as input parameters and sorts the array in-place.


Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)


Constraints:
1 <= N <= 10^6
0 <= A[i] <= 2
*/


void sort012(int a[], int n)
    {
        // coode here 
        int low=0;
        int mid=0;
        int high=n-1;
        while(mid<=high){
            if(a[mid]==0){
                swap(a[low++],a[mid++]);
            }
            else if(a[mid]==1){
                mid++;
            }
            else {
                swap(a[mid],a[high--]);
            }
        }
    }


