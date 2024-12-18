package pacchetto1;

public class Calciatore {
    private String nome;
    private String cognome;
    protected int goal;
    Calciatore(String nome, String cognome,int goal)
    {
        this.setNome(nome);
        this.setCognome(cognome);
    }

    Calciatore(Calciatore copia_calciatore)
    {
        this.setNome(copia_calciatore.getNome());
        this.setCognome(copia_calciatore.getCognome());
        
    }

    //Metodi getter
    public String getNome()
    {
        return nome;
    }
    public String getCognome()
    {
        return cognome;
    }
    //Metodi setter
    public void setNome(String nome)
    {
        this.nome= nome;
    }
    public void setCognome(String cognome)
    {
        this.cognome=cognome;
    }
    public void copy(Calciatore copia_calciatore)
    {
        this.setNome(copia_calciatore.getNome());
        this.setCognome(copia_calciatore.getCognome());
        
    }
}
