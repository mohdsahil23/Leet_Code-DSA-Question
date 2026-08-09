class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector <int> answer;
        for(int i = 0; i<n;i++){
            for(int j = i+1;j<n;j++){
                if ((nums[i]+nums[j] == target)){
                    answer.push_back(i);
                    answer.push_back(j);
                    return answer;
                }
            }
        }
        return answer;
    }
};