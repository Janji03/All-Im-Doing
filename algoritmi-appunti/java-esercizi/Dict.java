public class Dict {
    private KeyValuePair[] A;
    private int size;
    
    public Dict(KeyValuePair[] A, int size) {
        this.A = A;
        this.size = size;
    }
    
    public void insert(Key k, Data d) {
        int i = linsearch(A, size, k);
        if (i == -1) {
            size++; // aggiunge un elemento
            i = size - 1;
            KeyValuePair pair = new KeyValuePair(k, d);
            A[i] = pair;
        } else {
            A[i].setData(d);
        }
    }
    
    public void delete(Key k) {
        int i = linsearch(A, size, k);
        if (i == -1) {
            return;
        } else {
            A[i] = A[size - 1]; // sovrascrive l'elemento da eliminare con l'ultimo elemento
            size--; // elimina l'ultimo elemento
        }
    }
    
    public Data search(Key k) {
        int i = linsearch(A, size, k);
        if (i != -1) {
            return A[i].getData();
        } else {
            return null;
        }
    }
    
    public static int linsearch(KeyValuePair[] A, int n, Key k) {
        for (int i = 0; i < n; i++) {
            if (A[i].getKey().compareTo(k) == 0) {
                return i;
            }
        }
        return -1;
    }
    
    public static void main(String[] args) {
        KeyValuePair[] A = new KeyValuePair[5];
        Dict dict = new Dict(A, 0);
        dict.insert(new Key("alpha"), new Data("one"));
        dict.insert(new Key("beta"), new Data("two"));
        dict.insert(new Key("gamma"), new Data("three"));
        dict.insert(new Key("delta"), new Data("four"));
        dict.insert(new Key("epsilon"), new Data("five"));
        System.out.println(dict.search(new Key("beta")).getData()); // prints "two"
        System.out.println(dict.search(new Key("omega"))); // prints "null"
    }
}

class Key implements Comparable<Key> {
    private String key;
    
    public Key(String key) {
        this.key = key;
    }
    
    public String getKey() {
        return key;
    }
    
    public int compareTo(Key other) {
        return key.compareTo(other.getKey());
    }
}

class Data {
    private String data;
    
    public Data(String data) {
        this.data = data;
    }
    
    public String getData() {
        return data;
    }
    
    public void setData(String data) {
        this.data = data;
    }
}

class KeyValuePair {
    private Key key;
    private Data data;
    
    public KeyValuePair(Key key, Data data) {
        this.key = key;
        this.data = data;
    }
    
    public Key getKey() {
        return key;
    }
    
    public Data getData() {
        return data;
    }
    
    public void setData(Data data) {
        this.data = data;
    }
}
