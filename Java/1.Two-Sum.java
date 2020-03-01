class Solution {
    public int[] twoSum(int[] nums, int target) {
        HashMap<Integer,Integer> map = new HashMap();
        int[] ret = new int[2];
        for(int i = 0; i<nums.length; ++i) {
            int number = target- nums[i];
            if(map.containsKey(number)) {
                return new int[]{map.get(number), i};
            }
            map.put(nums[i], i);
        }
        return new int[]{};
    }
}


/*
HashMap比较占用内存，不过以时间换空间，时间复杂度降低很多
*/
