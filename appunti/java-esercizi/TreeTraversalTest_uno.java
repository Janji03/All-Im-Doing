import java.util.LinkedList;
import java.util.Queue;

class TreeNode {
    int val;
    TreeNode left;
    TreeNode right;

    TreeNode(int val) {
        this.val = val;
    }
}

class TreeTraversal {
    public static void bfs(TreeNode root) {
        if (root == null) {
            return;
        }

        Queue<TreeNode> queue = new LinkedList<>();
        queue.add(root);

        try {
            while (!queue.isEmpty()) {
                TreeNode node = queue.remove();
                System.out.print(node.val + " ");

                if (node.left != null) {
                    queue.add(node.left);
                }

                if (node.right != null) {
                    queue.add(node.right);
                }
            }
        } catch (Exception e) {
            System.out.println("Errore durante la visita BFS: " + e.getMessage());
        }
    }
}

public class TreeTraversalTest_uno {
    public static void main(String[] args) {
        // Costruisce l'albero seguente:
        //       1
        //     /   \
        //    2     3
        //   / \   / \
        //  4   5 6   7
        TreeNode root = new TreeNode(1);
        root.left = new TreeNode(2);
        root.right = new TreeNode(3);
        root.left.left = new TreeNode(4);
        root.left.right = new TreeNode(5);
        root.right.left = new TreeNode(6);
        root.right.right = new TreeNode(7);

        System.out.println("BFS traversal:");
        try {
            TreeTraversal.bfs(root);
        } catch (Exception e) {
            System.out.println("Errore durante la visita BFS: " + e.getMessage());
        }
    }
}