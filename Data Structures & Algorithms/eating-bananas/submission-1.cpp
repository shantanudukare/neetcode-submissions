class Solution {
public:
    bool isokay(vector<int> piles, int h, int mid) {
        int ans = 0;

        for (int i = 0; i < piles.size(); i++) {
            ans += (piles[i] + mid - 1) / mid;
        }

        return ans <= h;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1;
        int r = *max_element(piles.begin(), piles.end());

        while (l < r) {
            int mid = l + (r - l) / 2;

            if (isokay(piles, h, mid)) {
                r = mid;
            } else {
                l = mid + 1;
            }
        }

        return l;
    }
};