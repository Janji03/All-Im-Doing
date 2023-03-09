public class lezione8 {
    public static void main (String[] args){
        //Metodo toString
        // è un metodo gia implementato in tutte le classi che si creano
        // si puo modificare in modo da fargli stampare tutte le variabili e attributi di un oggetto
        persona persona0 = new persona("Janji", "Casa", 19);
        System.out.println(persona0.toString()); //puo anche essere omesso
        System.out.println(persona0); 
        System.out.println("\n");
        //Array di oggetti
        persona[] persone = new persona [3];
        persona persona1 = new persona("Jonny", "A", 30);
        persona persona2 = new persona("Marco", "B", 22);
        persona persona3 = new persona("Andrea", "C", 4);
        persone[0] = persona1;
        persone[1] = persona2;
        persone[2] = persona3;
        for (int i = 0; i< 3 ; i++)
        {
            System.out.println(persone[i]);
            System.out.println("\n");
        }
        //un modo fast per inizzializzare un array di oggetti
        persona[] array_persone = {persona1,persona2,persona3};
        System.out.println(array_persone[0]);
        persona1.saluta(persona2);
        persona fre = new persona("fre","mazza",19);
        persona fillo = new persona ("fillo","marini",19);
        fre.saluta(fillo);
    }
}
