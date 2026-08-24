class Solution {
public:
#define check(c) ((c >= 'a' and c <= 'z') or (c >= 'A' and c <= 'Z') or (c >= '0' and c <= '9'))
char convert(char c)
{
    if ((c >= 'A' and c <= 'Z'))
        return c + 32;
    else
        return c;
}
    bool isPalindrome(string s) {
            int n = s.length();
    int i = 0;
    int j = n;
    while (i < j)
    {
        if (!check(s[i]))
        {
            i++;
            continue;
        }
        else if (!check(s[j]))
        {
            j--;
            continue;
        }
        if (convert(s[i++]) != convert(s[j--]))
            return false;
    }

    return true;
    }
};
