public class lezione9 {
    public static void  main(String[] args){
      //Final e Static keyword
        final int x = 5; //non puo essere modificata (kinda costante)
        System.out.println(x);
        persona persona1 = new persona ("Marco", "Rossi", 20);
        System.out.println(persona1);
        System.out.println(persona.prova_static);
        persona.mostra_static(); //metodo static della classe persona (non va chiamato da un oggetto della 
        // classe ma dalla classe stessa)


        //Ereditarietà 
        persona persona3 = new persona("Andrea", "C", 4);
        Studente studente1 = new Studente ("Mario", "Verdi", 22 , "3C");
        studente1.presenta();
        studente1.media_voti();
        studente1.saluta(persona3);
    }
}
