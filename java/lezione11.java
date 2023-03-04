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
        
    }
}
