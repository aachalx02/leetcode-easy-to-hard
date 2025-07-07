// Leetcode #20 - Valid Parentheses
// Link: https://leetcode.com/problems/valid-parentheses/
// Author: Aachal Saxena

#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (char c : s) {
            // Push opening brackets
            if (c == '(' || c == '[' || c == '{') {
                st.push(c);
            }
            else {
                // Stack should not be empty when we see closing bracket
                if (st.empty()) return false;

                char top = st.top();
                st.pop();

                // Check for mismatched pairs
                if ((c == ')' && top != '(') ||
                    (c == ']' && top != '[') ||
                    (c == '}' && top != '{')) {
                    return false;
                }
            }
        }

        // Stack should be empty if all brackets matched
        return st.empty();
    }
};
