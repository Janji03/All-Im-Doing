

public class Persona {
    private int data;
    
    Persona()
    {
        this.nome="vuoto";
        this.data=0000;
    }


    public int getData() {
        return data;
    }


    public void setData(int  data) {
        this.data = data;
    }


    private String nome;
    
    
    public String getNome() {
        return nome;
    }


    public void setNome(String nome) {
        this.nome = nome;
    }


    Persona (String nome, int  data)
    {
        this.nome = nome;
        this.data = data;

    }
   
    public String toString()
    {
        String p = nome + data;
        return p; 
    }
}
