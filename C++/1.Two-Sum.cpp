class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int vSize = nums.size();
        map<int,int> m;
        for(int i = 0; i < vSize;++i){
            auto iter = m.find(target-nums[i]);
            if(iter != m.end()){
                return {iter->second, i};
            }
            // 找不到再insert，否则先insert [3,3] 6这种测试例就会失败
            m.insert({nums[i],i});  
        }
        return {};
    }
};

/*tip:
1. 暴力解决, 两个for循环, 时间复杂度达到了O(n^2), 不符合要求;
2. 用空间换时间, 把对应数及索引创建一个map;
3. 从目标数里减去一个数，查找另外一个数是否在map中, over;

*/
