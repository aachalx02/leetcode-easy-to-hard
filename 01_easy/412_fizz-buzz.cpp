// Leetcode #412 - Fizz Buzz
// Link: https://leetcode.com/problems/fizz-buzz/
// Author: Aachal Saxena

#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> arr;

        for (int i = 1; i <= n; i++) {
            // Check for multiple of both 3 and 5 first
            if (i % 3 == 0 && i % 5 == 0) {
                arr.push_back("FizzBuzz");
            }
            else if (i % 3 == 0) {
                arr.push_back("Fizz");
            }
            else if (i % 5 == 0) {
                arr.push_back("Buzz");
            }
            else {
                arr.push_back(to_string(i));
            }
        }

        return arr;
    }
};
