
//Appunti Java 0


//creazione classe principale 

import java.util.Scanner; //serve per prendere valori in input dall'utente 

public class lezione0 {
    public static void main (String[] args){
        //-Variabili 
        String a="ciao";
        double b=9.55;
        System.out.println(b);
        System.out.println(a);
        //Tipi di vriabili 
        /* 
        (PRIMITIVE)
        boolean 
        byte |-128 a 127| (1 byte)
        short | -32768 a 32767| (2 bytes)
        int | 4 bytes|
        long | 8 bytes|
        float 
        double 
        char 
        String
        */
    
    try (Scanner s = new Scanner(System.in)) {
        System.out.println("inserisci nome");
        String nome = s.nextLine(); //per leggere l'input (si mette next+il tipo della variabile )
        System.out.println("ciao "+ nome);
        System.out.println("\n");
        System.out.println("inserisci eta");
        int eta;
        eta=s.nextInt();
        System.out.println(eta);
    }
    }
}




