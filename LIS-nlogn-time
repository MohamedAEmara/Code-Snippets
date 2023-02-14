
// A function that returns a vector of lis at each index

vector<int>LIS(vector<int>&v)
{
    int n = v.size();
    vector<int>res;
    vector<int>groups;
    for(int i=0; i<n; i++)
    {
        auto idx = lower_bound(groups.begin(), groups.end(), v[i]) - groups.begin();
        if(idx == groups.size())
            groups.push_back(v[i]);
        else groups[idx] = v[i];
        res.push_back(groups.size());
    }

    return res;
}



// To return just the longest increasing subsequence 

int lengthOfLIS(vector<int>& nums) {
        vector<int>groups;
        int n = nums.size();
        for(int i=0; i<n; i++){
            auto idx = lower_bound(groups.begin(), groups.end(), nums[i]) - groups.begin();
            if(idx == groups.size())
                groups.push_back(nums[i]);
            else groups[idx] = nums[i];
        }

        return groups.size();
    }

