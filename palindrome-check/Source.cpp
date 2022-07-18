#include <string>
#include <iostream>

using namespace std;
//o(n) time | o(1) space

bool isPalindrome(string str);

int main()
{
    
    cout << boolalpha << isPalindrome("abcdcba") <<  " ";
    return 0;
}

bool isPalindrome(string str) {
    // Write your code here.
    int leftIdx = 0;
    int rightIdx = str.length() - 1;
    while (leftIdx < rightIdx)
    {
        if (str[leftIdx] != str[rightIdx])
            return false;
        leftIdx++;
        rightIdx--;
    }
    return true;
}
