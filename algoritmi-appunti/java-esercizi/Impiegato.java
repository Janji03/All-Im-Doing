public class Impiegato extends Persona {

    Impiegato()
    {

    }

    private double stipendio;

    public double getStipendio() {
        return stipendio;
    }
    public void setStipendio(double stipendio) {
        this.stipendio = stipendio;
    }
    public Impiegato(String nome, int  data, double stipendio) {
        super(nome, data);
        this.stipendio = stipendio;
    }
 
    @Override
    public String toString()
    {
        String p = getNome() + getData() + stipendio;
        return p;
    }
    public Impiegato Youngest (Impiegato[] array)
    {
        int min = 0;
        Impiegato p = new Impiegato();
        for(int i=0; i<array.length;i++)
        {
            if(array[i].getData()>min)
            {
                min = array[i].getData();
                p= array[i];
            }
        }
     return p;
    }
}
