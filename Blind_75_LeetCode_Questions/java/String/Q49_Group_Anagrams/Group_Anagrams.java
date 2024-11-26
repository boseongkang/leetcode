class Solution {
    public List<List<String>> groupAnagrams(String[] strs) 
    {
        HashMap<String, List<String>> map = new HashMap<>();

        for(String str: strs)
        {
            char[] arr = str.toCharArray();
            Arrays.sort(arr);

            String sortarr = new String(arr);
            map.computeIfAbsent(sortarr, key -> new ArrayList<>()).add(str);
        }
        return new ArrayList<>(map.values());

    }
}
