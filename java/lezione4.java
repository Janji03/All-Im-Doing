import java.util.ArrayList;

//appunti Java 4

public class lezione4 {
    public static void main (String[] args){
        //Wrapper Class
        // permettono di usare dei metodi applicati a tipi di dati primitivi
        //sono reference 
        Boolean vero = true;
        Character carattere = 'a';
        Integer numero = 5;
        Double virgola = 5.12;
        String stringa ="ciao";
        //in questo modo impacchettiamo i tipi di dato primitivi in delle reference che permettono di 
        //usare dei metodi 
        int prova_numero = 5;
        if (prova_numero==numero) //l'integer viene spacchettato in un int e viene eseguito l'if e dopo viene 
        // "ripacchettato" (unboxing e autoboxing)
        {
            System.out.println("prova");
        }
        //ArrayList
        //array ridimensionabili che accettano solo reference (solo Wrapper Class)
        //non si possono usare tipi primitivi 
        ArrayList <String> persone = new ArrayList<String>();
        persone.add("Janji");
        persone.add("Billy");
        persone.add("Marco");
        for(int i=0; i<persone.size(); i++)  //.size è uguale a .length degli array (prende la dimensione)
        {
        System.out.println(persone.get(i)); //.get prende elemento dell'array
        }
        persone.set(1,"Gio"); //modofica elemento 1 dell'array
        System.out.println(persone.get(1));
        persone.remove(0); //toglie elemento 0 
        persone.clear(); //elimina tutti  gli elementi dell'arrayList

        //ArrayList 2D
        ArrayList<ArrayList<String>> classi = new ArrayList();
        ArrayList <String> classe1 = new ArrayList <String>();
        classe1.add("A");
        classe1.add("B"); 
        ArrayList <String> classe2 = new ArrayList <String> ();
        classe1.add("C");
        classe1.add("D");

        classi.add(classe1);
        classi.add(classe2);
        for(int i=0; i< classi.size();i++)
        {
            for(int j=0; j<classi.get(i).size();j++)
            {
                System.out.println (classi.get(i).get(j)+ " ");
            }
        }
    }
}
