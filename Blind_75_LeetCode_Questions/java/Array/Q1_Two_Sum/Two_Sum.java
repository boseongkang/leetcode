class Solution {
    public int[] twoSum(int[] nums, int target) 
    {
        HashMap<Integer, Integer> hmap = new HashMap<>();
        
        int len = nums.length;
        for(int i = 0; i < len; ++i)
        {
            if(hmap.containsKey(target - nums[i]))
            {
                return new int[] {hmap.get(target - nums[i]), i};
        
            }
            hmap.put(nums[i], i);

        }        
        return new int[] {};
    }
}
