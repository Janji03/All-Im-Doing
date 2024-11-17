package pacchetto1;
import pacchetto2.*;

public class Main {
    public static void main (String[] args){
        //modificatori di di accesso 
        /*              class  folder subclass world
         * Public       si     si     si       si 
         * protected    si     si     si       no
         * default      si     si     no       no
         * private      si     no     no       no 
         */

        B prova_B = new B();
        System.out.println(prova_B.nome);
        A prova_A = new A ();
        System.out.println(prova_A.nome);


        //Incapsulamento : nasconde degli attribuiti con il private e diventano accessibili sono 
        //con dei metodi: getters e setters
        Calciatore calciatore1 = new Calciatore("Francesco", "Totti", 18);
        System.out.println(calciatore1.getNome());
        calciatore1.setNome("Zidane");
        System.out.println(calciatore1.getNome());


        //Copia degli oggetti 
        Calciatore calciatore2 = new Calciatore("Lionel", "messi", 30);
        Calciatore calciatore3 = new Calciatore("Cristiano", "Ronaldo", 20);
        // se faccio calciatore3 = calciatore2 ottengo solo due variabili che fanno riferimento alla stessa
        //cella di memoria ma di fatto NON ho creato una copia dell'oggetto
        calciatore2.copy(calciatore3); //metodo copy (il calciatore2 copia il calciatore3)
        System.out.println(calciatore2.getNome());
        System.out.println(calciatore3.getNome());
        //la copia dell'oggetto si puo fare anche con un costruttore 
        Calciatore calciatore_copia = new Calciatore(calciatore3); //tramite il costrutture ho creato una 
        //copia di calciatore3 (Ronaldo)
        System.out.println(calciatore_copia.getNome());


        //Interfacce 
        // kinda classi astratte 
        Leone leone = new Leone();
        Cervo cervo = new Cervo();
        cervo.scappa();
        leone.caccia();
        Pesce squalo = new Pesce("squalo");
        Pesce pesciolino = new Pesce("tonno");
        squalo.caccia();
        pesciolino.scappa();
        
    }
}
