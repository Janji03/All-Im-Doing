class TreeTraversalTree {
    int val;
    TreeTraversalTree left;
    TreeTraversalTree right;

    TreeTraversalTree(int val) {
        this.val = val;
    }
}

class TreeTraversal {
    public static void preOrder(TreeTraversalTree root) {
        if (root == null) {
            return;
        }

        System.out.print(root.val + " ");
        preOrder(root.left);
        preOrder(root.right);
    }

    public static void postOrder(TreeTraversalTree root) {
        if (root == null) {
            return;
        }

        postOrder(root.left);
        postOrder(root.right);
        System.out.print(root.val + " ");
    }

    public static void inOrder(TreeTraversalTree root) {
        if (root == null) {
            return;
        }

        inOrder(root.left);
        System.out.print(root.val + " ");
        inOrder(root.right);
    }
}

public class TreeTraversalTest {
    public static void main(String[] args) {
        // Costruisce l'albero seguente:
        //       1
        //     /   \
        //    2     3
        //   / \   / \
        //  4   5 6   7
        TreeTraversalTree root = new TreeTraversalTree(1);
        root.left = new TreeTraversalTree(2);
        root.right = new TreeTraversalTree(3);
        root.left.left = new TreeTraversalTree(4);
        root.left.right = new TreeTraversalTree(5);
        root.right.left = new TreeTraversalTree(6);
        root.right.right = new TreeTraversalTree(7);

        System.out.println("Pre-order traversal:");
        TreeTraversal.preOrder(root);

        System.out.println("\nPost-order traversal:");
        TreeTraversal.postOrder(root);

        System.out.println("\nIn-order traversal:");
        TreeTraversal.inOrder(root);
    }
}