public class MotoreAuto {
    private int cilindrata;
    private int numero_cilindri;
    
    public int getCilindrata() {
        return cilindrata;
    }
    public void setCilindrata(int cilindrata) {
        this.cilindrata = cilindrata;
    }
    public int getNumero_cilindri() {
        return numero_cilindri;
    }
    public void setNumero_cilindri(int numero_cilindri) {
        this.numero_cilindri = numero_cilindri;
    }

    MotoreAuto(int cilindrata, int numero_cilindri)
    {
        this.cilindrata=cilindrata;
        this.numero_cilindri=numero_cilindri;
    }
    MotoreAuto()
    {
        
    }



}
