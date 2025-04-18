/*
// Definition for a Node.
class Node {
    public int val;
    public List<Node> neighbors;
    public Node() {
        val = 0;
        neighbors = new ArrayList<Node>();
    }
    public Node(int _val) {
        val = _val;
        neighbors = new ArrayList<Node>();
    }
    public Node(int _val, ArrayList<Node> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
}
*/

class Solution {
    private Map<Node, Node> graph = new HashMap<>();
    public Node cloneGraph(Node node) 
    {
        if(node == null)
            return null;
        
        if(graph.containsKey(node))
            return graph.get(node);
        
        Node copyNode = new Node(node.val);
        graph.put(node, copyNode);

        for (int i = 0; i < node.neighbors.size(); ++i) 
        {
            Node neighbor = node.neighbors.get(i);
            copyNode.neighbors.add(cloneGraph(neighbor));
        }

        return copyNode;
        
        
    }
}
