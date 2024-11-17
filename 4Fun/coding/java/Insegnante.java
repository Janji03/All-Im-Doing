public class Insegnante extends persona {

    String materia; 
    Insegnante(String nome, String cognome, int eta, String materia) {
        super(nome, cognome, eta);
        this.materia = materia;
    }

    @Override
    void saluta(persona PersonaDaSalutare)
    {
        System.out.println("buongiorno ragazzi"  );
    }
    
}
