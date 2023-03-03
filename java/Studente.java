public class Studente extends persona {

    String classe;
    int[] voti = {4,5,6};

    Studente (String nome, String cognome,int eta , String classe)
    {
        super(nome,cognome,eta); //richiama il costruttore della classe padre
        this.classe =classe;
    }
    void media_voti()
    {
        float media=0;
        for(int i =0 ; i < this.voti.length;i++ )
        {
            media += this.voti[i];
        }
       System.out.println(media/voti.length);
    }

    @Override //serve per dire che si sta utilizzando un metodo ereditato dalla classe padre
    void saluta( persona PersonaDaSalutare)
    {
        System.out.println("ciao " + PersonaDaSalutare.nome + " da studente" );
    }
}
