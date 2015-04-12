class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        int vSize = numbers.size();
        vector<int> vIndex;
        map<int,int> mapNum;
        int index;
        for (int i = 0; i < vSize; ++i) {
            index = mapNum[target - numbers[i]];
            if(index) {
                vIndex.push_back(index);
                vIndex.push_back(i+1);
                break;
            }
            mapNum[numbers[i]] = i+1;
        }
		return vIndex;
    }
};

/*tip:
1. 暴力解决, 两个for循环, 时间复杂度达到了O(n^2), 不符合要求;
2. 用空间换时间, 把对应数及索引创建一个map;
3. 从目标数里减去一个数?查找另外一个数是否在map中, over;

note:

vIndex.push_back(index);
vIndex.push_back(i+1);

这两句代码顺序不可互换, 因为结果要求index1 < index2;

index 查找出来的数, 其实是在这句代码
mapNum[numbers[i]] = i+1;
已经加入map中的, 索引 i 一直在递增, 所以 index <= i, 要先加入到返回的vector中。
*/
