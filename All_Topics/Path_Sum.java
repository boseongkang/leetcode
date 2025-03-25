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
    public boolean hasPathSum(TreeNode root, int targetSum) 
    {
        if (root == null)
            return false;
        
        Stack<TreeNode> nodestack = new Stack<>();
        Stack<Integer> sumStack = new Stack<>();

        nodestack.push(root);
        sumStack.push(root.val);

        while(!nodestack.isEmpty())
        {
            TreeNode node = nodestack.pop();
            int sum = sumStack.pop();

            if((node.left == null) && (node.right == null) && (sum == targetSum))
                return true;
            
            if(node.right != null)
            {
                nodestack.push(node.right);
                sumStack.push(sum + node.right.val);
            }

            if(node.left != null)
            {
                nodestack.push(node.left);
                sumStack.push(sum + node.left.val);
            }
        }
        return false;

    }
}
