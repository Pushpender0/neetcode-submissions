class Solution {
public:
bool canFinsh(vector<int> piles, int speed, int h)
{
    int hours = 0;
    for (int pile : piles)
    {
        hours += ceil((double)pile / speed);
    }
    return hours <= h;
}

int minEatingSpeed(vector<int> &piles, int h)
{
    // l = left r= right
    int l = 1, r = 1;
    for (int pile : piles)
    {
        r = max(r, pile);
    }

    while (l < r)
    {
        int mid = l + (r - l) / 2;
        if (canFinsh(piles, mid, h))
        {
            r = mid;
        }
        else
        {
            l = mid + 1;
        }
    }
    return l;
}


};
