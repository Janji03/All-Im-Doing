public class ContoCorrente {
    String nome;
    double saldo;

    ContoCorrente(String nome)
    {
        this.nome = nome;
        this.saldo = 0;
    }


    ContoCorrente(String nome, double saldo)
    {
        this.nome = nome;
        this.saldo = saldo;
    }

    void Preleva (double preleva)
    {
        this.saldo -= preleva;
        
    }
    void Versare (double versare)
    {
        saldo += versare;
    }
    public String toString()
    {
        String riassunto = nome + " " + saldo;
        return riassunto;
    }
}
