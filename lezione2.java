//appunti Java 2

import java.util.Scanner;

public class lezione2 {
    public static void main (String[] args){
        //-Switch
        try (
         Scanner s = new Scanner(System.in)){
            System.out.println("inserisci nome");
      String nome;
      nome = s.nextLine();
      switch (nome)
         {
            case "Janji":
            System.out.println("case 1");
            break;
            case "m":
            System.out.println("case 2");
            break;
            case "L":
            System.out.println("case 3");
            break;
            default:
            System.out.println("miss");
            break;
         }
    //Loop: while, do while, for
    int k = 0;
    while (k<3)
    {
        System.out.println("yo\n");
        k++;
    }
    for(int i=0; i<3;i++)
    {
        System.out.println("for");

    }
    //-Array
    int[] numeri = new int [3]; // gli array di java hanno dimensione fissa
    numeri[0]=10;
    numeri[1]=20;
    numeri[2]=30;
    System.out.println(numeri.length);
    System.out.println(numeri[0]);
    int [] V = {1,2,3,4,5,6};
    System.out.println(V.length);
    for(int j=0; j<V.length;j++)
    {
        System.out.println(V[j]);
    }
    }
    }
}
