public class BinarySearchTree {
    private class Node {
        int key;
        Node left, right;

        Node(int item) {
            key = item;
            left = right = null;
        }
    }

    private Node root;

    public BinarySearchTree() {
        root = null;
    }

    public boolean search(int key) {
        return searchRecursive(root, key) != null;
    }

    private Node searchRecursive(Node root, int key) {
        if (root == null || root.key == key)
            return root;

        if (root.key > key)
            return searchRecursive(root.left, key);

        return searchRecursive(root.right, key);
    }

    public int findMin() {
        return findMinRecursive(root);
    }

    private int findMinRecursive(Node root) {
        if (root.left == null)
            return root.key;

        return findMinRecursive(root.left);
    }

    public int findMax() {
        return findMaxRecursive(root);
    }

    private int findMaxRecursive(Node root) {
        if (root.right == null)
            return root.key;

        return findMaxRecursive(root.right);
    }

    public int predecessor(int key) {
        Node current = searchRecursive(root, key);
        if (current.left != null)
            return findMaxRecursive(current.left);

        Node predecessor = null;
        Node ancestor = root;

        while (ancestor != current) {
            if (current.key > ancestor.key) {
                predecessor = ancestor;
                ancestor = ancestor.right;
            } else
                ancestor = ancestor.left;
        }

        if (predecessor == null)
            throw new IllegalStateException("No predecessor found");

        return predecessor.key;
    }

    public int successor(int key) {
        Node current = searchRecursive(root, key);
        if (current.right != null)
            return findMinRecursive(current.right);

        Node successor = null;
        Node ancestor = root;

        while (ancestor != current) {
            if (current.key < ancestor.key) {
                successor = ancestor;
                ancestor = ancestor.left;
            } else
                ancestor = ancestor.right;
        }

        if (successor == null)
            throw new IllegalStateException("No successor found");

        return successor.key;
    }

    public void insert(int key) {
        root = insertRecursive(root, key);
    }

    private Node insertRecursive(Node root, int key) {
        if (root == null) {
            root = new Node(key);
            return root;
        }

        if (key < root.key)
            root.left = insertRecursive(root.left, key);
        else if (key > root.key)
            root.right = insertRecursive(root.right, key);

        return root;
    }

    public void delete(int key) {
        root = deleteRecursive(root, key);
    }

    private Node deleteRecursive(Node root, int key) {
        if (root == null)
            return root;

        if (key < root.key)
            root.left = deleteRecursive(root.left, key);
        else if (key > root.key)
            root.right = deleteRecursive(root.right, key);
        else {
            if (root.left == null)
                return root.right;
            else if (root.right == null)
                return root.left;

            root.key = findMinRecursive(root.right);

            root.right = deleteRecursive(root.right, root.key);
        }

        return root;
    }

    public static void main(String[] args) {
        BinarySearchTree tree = new BinarySearchTree();
        tree.insert(1);
        tree.insert(2);
        tree.insert(5);
        tree.insert(6);
        tree.insert(7);
        tree.insert(8);
        tree.delete(7);
        System.out.println(tree);
        System.out.println(tree.findMax());
        System.out.println(tree.successor(5));
        System.out.println("quit test");

    }
}