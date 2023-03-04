package pacchetto1;

public class Pesce implements Preda, Predatore {

    String nome;

    Pesce (String nome)
    {
        this.nome=nome;
    }

    @Override
    public void caccia() {
        System.out.println(nome + "caccia");
    }

    @Override
    public void scappa() {
        System.out.println(nome + "scappa");
    }
    
}
