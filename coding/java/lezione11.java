import java.util.InputMismatchException;
import java.util.Scanner;
import java.util.InputMismatchException;

public class lezione11 {
    public static void main(String[] args){
        //Polimorfismo 
        Studente studente = new Studente("Mario", "Rossi", 16, "3R");
        Studente studente1 = new Studente ("Francesco", "Neri", 17, "4C");
        Insegnante insegnante = new Insegnante("Giacomo", "Verdi", 40, "Matematica");
        persona [] classe = {studente,studente1, insegnante };
        for (persona i : classe)
        {
            i.saluta(insegnante);
        }
        // Exception 
        // il try prova una porzione di codice
        // i catch gestiscono le diverse eccezioni
        // finally esegue una porzione di codice alla fine a prescindere dal try
        Scanner scanner = new Scanner(System.in);
        try{
        System.out.println("inserisci un numero\n");
        int x = scanner.nextInt();
        System.out.println("inserisci un numero\n");
         int y = scanner.nextInt();
        int r = x/y; // se metto y = 0 ottengo un exception 
        System.out.println(r);
        }catch(ArithmeticException e)
        {
            System.out.println("non puoi dividere per zero");
        }
        catch(InputMismatchException e)
        {
            System.out.println("non puoi dividere un numero per una stringa ");
        }
        catch(Exception e )
        {
            System.out.println("c'è stato un problema");
        }
        finally  
        {
            scanner.close();
        }
        
    }
}
