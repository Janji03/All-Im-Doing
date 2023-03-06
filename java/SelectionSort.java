public class SelectionSort {
    public static void main (String[] args)
    {
        int [ ] A ={2,5,4,8,7,9};
        for (int i = 0; i < A.length - 1; i++) {
             int m = i;
             for (int j = i + 1; j < A.length; j++){
             if (A[j] < A[m])
             m = j;
             if (m != i)
            swap(A,i,m);
             }
        }
        System.out.println(A);
    }
}

private static void swap(int A[],int i, int j) {
 int tmp = A[i];
A[i] = A[j];
A[j] = tmp;
}
    
