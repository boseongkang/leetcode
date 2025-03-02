class Solution {
    public List<List<Integer>> threeSum(int[] nums) 
    {
        Set<List<Integer>> result = new HashSet<>();
        Arrays.sort(nums);
        
        for(int i = 0; i < nums.length; ++i)
        {
            if((0 < i) && (nums[i] == nums[i - 1]))
                continue;
            
            Map<Integer, Integer> seen = new HashMap<>();
            for(int j = i + 1; j < nums.length; ++j)
            {
                int k = - (nums[i] + nums[j]);
                if(seen.containsKey(k))
                    result.add(Arrays.asList(nums[i], nums[j], k));
                seen.put(nums[j], j);
            }
        }
        return new ArrayList<>(result);
    }
}
