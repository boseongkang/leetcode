/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public List<List<Integer>> levelOrder(TreeNode root) 
    {
        List<List<Integer>> output = new ArrayList<>();

        if(root == null)
            return output; 

        Deque<TreeNode> deq = new ArrayDeque<>();
        deq.offer(root);

        while(!deq.isEmpty())
        {
            List<Integer> level = new ArrayList<>();
            int levelNum = deq.size();

            for(int i = 0; i < levelNum; ++i)
            {
                TreeNode var = deq.poll();
                level.add(var.val);

                if(var.left != null)
                    deq.offer(var.left);
                if(var.right != null)
                    deq.offer(var.right);
            }
            output.add(level);
        }
        return output;
    }
}
