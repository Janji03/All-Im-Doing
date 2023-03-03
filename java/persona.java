public class persona {
    String nome;
    String cognome;
    int eta;
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
    }
    


