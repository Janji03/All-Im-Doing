public class ContoCorrenteValuta extends ContoCorrente {
 
    Valuta v;
    ContoCorrenteValuta(String nome, Valuta v) {
        super(nome);
       this.v = v;
    }
    ContoCorrenteValuta(String nome, double saldo, Valuta v) {
        super(nome,saldo);
       this.v=v;
    }
    
    @Override
    public String toString()
    {
        String riassunto = nome + " " + saldo + " "+ v;
        return riassunto;
    }
}
