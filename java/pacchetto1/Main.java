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
    }
}
