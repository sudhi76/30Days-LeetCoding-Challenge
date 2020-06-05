class Solution {
    int sum;
    vector <int> cum_w;
public:
    Solution(vector<int>& w) {
        sum = 0;
        for(int i : w) {
            sum += i;
            cum_w.push_back(sum);
        }

    }


    int pickIndex() {
        int indx = rand() % sum;
        return binarySearch(indx + 1);

    }

    int binarySearch(int val) {
        int l=0;
        int r = cum_w.size()-1;
        while(l < r) {
            int mid = l + (r-l)/2;
            if(cum_w[mid] < val)
                l = mid+1;
            else
                r = mid;
        }
        return l;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */
