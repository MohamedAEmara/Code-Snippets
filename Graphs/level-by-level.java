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
    List<List<Integer>>res = new LinkedList<>();

    public List<List<Integer>> levelOrder(TreeNode root) {
        if(root == null) return res;

        Queue<TreeNode> queue = new LinkedList<>();
        queue.offer(root);
        
        List<Integer> tmp = new ArrayList<>();
        while (!queue.isEmpty()) {
            int sz = queue.size();
            List<Integer> lvl = new ArrayList<>();
            for(int i=0; i<sz; i++) {
                TreeNode node = queue.poll();
                lvl.add(node.val);
                if(node.left != null) queue.offer(node.left);
                if(node.right != null) queue.offer(node.right);
            }
            res.add(lvl);
        }
        return res;
    }
}