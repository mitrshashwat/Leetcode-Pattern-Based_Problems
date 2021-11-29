// The API isBadVersion is defined for you.
//bool isBadVersion(int version)

class Solution {
public:
    int firstBadVersion(int n) {
        int lower = 1, upper = n;
        while(lower < upper) {
            int mid = lower + (upper - lower) / 2;
            if(!isBadVersion(mid)) lower = mid + 1;
            else upper = mid;
        }
        return lower;
    }
};