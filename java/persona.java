public class persona {
    String nome;
    String cognome;
    int eta;
    static int prova_static = 10; //attributo statico presente in tutti gli oggetti creati da questa classe
    //che non puo essere modificato
    //Costrutture
    //scope delle variabili (ovvero distinzione variabili globali e locali)
    persona(String nome, String cognome, int eta)
    {
        this.nome = nome;
        this.cognome= cognome;
        this.eta = eta;
    }


    void presenta ()
    {
        System.out.println("ciao sono " + nome + " ho " + eta + " anni ");
    }

    void addizione (int a, int b)
    {
        System.out.println(a+b);
        add10(a+b);
        
    }
    void add10(int risultato)
    {
        System.out.println(risultato+10);
        System.out.println(this.nome);
    }

    public String toString()
    {
        String riassunto = this.nome + "\n" + this.cognome + "\n" + this.eta ;
        return riassunto;
    }
    void saluta(persona PersonaDaSalutare)
    {
        System.out.println("ciao " + PersonaDaSalutare.nome + " io sono " + this.nome);
    }
    static void mostra_static()
    {
        System.out.println(prova_static);
    }
}
    


