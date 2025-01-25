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
class Solution 
{
    private int maxNum = Integer.MIN_VALUE;

    public int maxPathSum(TreeNode root) 
    {
        tracker(root);
        return maxNum;
    }

    private int tracker(TreeNode node)
    {
        if(node == null)
            return 0;
        
        int leftNum = Math.max(tracker(node.left), 0);
        int rightNum = Math.max(tracker(node.right), 0);

        int result = node.val + leftNum + rightNum;
        maxNum = Math.max(maxNum, result);
        
        return node.val + Math.max(leftNum, rightNum);
    }

}
