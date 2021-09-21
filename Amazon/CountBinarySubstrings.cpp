696. Count Binary Substrings
Easy

Give a binary string s, return the number of non-empty substrings that have the same number of 0's and 1's, and all the 0's and all the 1's in these substrings are grouped consecutively.

Substrings that occur multiple times are counted the number of times they occur.

 

Example 1:

Input: s = "00110011"
Output: 6
Explanation: There are 6 substrings that have equal number of consecutive 1's and 0's: "0011", "01", "1100", "10", "0011", and "01".
Notice that some of these substrings repeat and are counted the number of times they occur.
Also, "00110011" is not a valid substring because all the 0's (and 1's) are not grouped together.

Example 2:

Input: s = "10101"
Output: 4
Explanation: There are 4 substrings: "10", "01", "10", "01" that have equal number of consecutive 1's and 0's.

 

Constraints:

    1 <= s.length <= 105
    s[i] is either '0' or '1'.

      
 //Time Complexity O(n)
 //Space Complexity O(1)
class Solution {
public:
    int countBinarySubstrings(string s) {
        int curLen=1;
        int prev=0;
        int cnt=0;
        for(int i=1;i<s.size();i++){
            if(s[i] == s[i-1]) curLen++;
            else{
                prev = curLen;
                curLen =1;
            }
            if(prev >= curLen) cnt++;
        }
        return cnt;
    }
};
