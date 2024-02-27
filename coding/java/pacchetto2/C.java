package pacchetto2;
import pacchetto1.*; // in questo modo importo dalla cartella (pacchetto 1)
// tutti i file (grazie a *) presenti


public class C extends A {
    void prova_protected()
    {
        System.out.println(nome); // posso vedere la variabile nome della classe A anche se 
        //si trova in un altra cartella perchè è una variabile protected e C è sottoclasse di A 
    }
}
