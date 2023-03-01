//appunti Java 3

public class lezione3 {
    public static void main (String[] args){
        //Array 2D
        String [][] matrix = new String [2] [2];
        matrix[0][0] ="a";
        matrix[0][1] ="b";
        matrix[1][0] ="c";
        matrix[1][1] ="d";
    for(int i=0; i< matrix.length;i++)
    {
        System.out.println();
       for(int j=0; j< matrix[i].length;j++)
       {
        System.out.println(matrix[i][j] + " ");
       }
    }
    //-Stringhe 
    //funzioni per le stringhe 
    String nome = "Janji";
    boolean x = nome.equals("Janji"); //controlla se è uguale 
    boolean y = nome.equalsIgnoreCase("janji"); //controlla se è uguale ignorando il Cap Sensitive
    System.out.println(x); 
    System.out.println(y);
    int lunghezza = nome.length(); // ritorna lunghezza stringa
    System.out.println(lunghezza); 
    System.out.println(nome.charAt(0)); // ritorna lettera in posizione che inserisci
    System.out.println(nome.indexOf("a")); //ritorna la posizione di a
    System.out.println(nome.isEmpty()); //controlla se la stringa è vuota
    System.out.println(nome.toUpperCase()); //scrive la stringa in maiuscolo
    System.out.println(nome.toLowerCase()); //scrive la stringa in minuscolo
    System.out.println(nome.trim()); //tagli gli spazi vuoti (davanti e dietro)
    System.out.println(nome.replace("a", "e")); //cambia tutte le "a" con "e"
    }
}
