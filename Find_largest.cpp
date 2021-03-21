#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        if (digits.size() == 0)
            return digits;
        int temp = digits.size();
        int carry = 1, sum = 0, i = 0;
        reverse(digits.begin(), digits.end());
        while (i < temp)
        {
            sum = carry + digits[i];
            carry = (sum >= 10) ? 1 : 0;
            sum = sum % 10;
            digits[i] = sum;
            i++;
        }
        if (carry > 0)
        {
            auto it = digits.end();
            digits.insert(it, carry);
        }
        reverse(digits.begin(), digits.end());
        return digits;
    }
};

int main(int argc, char const *argv[])
{
    vector<int> digits = {1, 8};
    Solution obj;
    vector<int> result = obj.plusOne(digits);
    for (auto &&i : result)
    {
        cout << i << " ";
    }
}
