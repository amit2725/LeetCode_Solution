class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        // if (nums.size() == 1)
        //     return true;
        int count = 0;

        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] > nums[i + 1]) {
                {
                    if (i != 0 && nums[i - 1] > nums[i + 1]) {
                        nums[i + 1] = nums[i];
                        count++;
                    } else
                        count++;
                }
            }

            if (count > 1)
                return false;
        }

        return true;
    }
};