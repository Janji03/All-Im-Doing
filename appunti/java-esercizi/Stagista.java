public class Stagista extends Impiegato {

    private int  numeroPresenze;
    private int  numeroID;
    public void setNumeroPresenze(int numeroPresenze) {
        this.numeroPresenze = numeroPresenze;
    }
    public int getNumeroPresenze() {
        return numeroPresenze;
    }
    public int getNumeroID() {
        return numeroID;
    }
    public void setNumeroID(int numeroID) {
        this.numeroID = numeroID;
    }
    public Stagista(String nome, int data, double stipendio) {
        super(nome, data, stipendio);
    }

    @Override
    public String toString()
    {
        String p = getNome() + getData() + numeroID + numeroPresenze;
        return p;
    } 
    
}
