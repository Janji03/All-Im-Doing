
public class BankAccount {
    private String nome;
    private int numero;
    private float bilancio;
    public  BankAccount(String s, int n, float b)
    {
        this.nome=s;
        this.numero=n;
        this.bilancio=b;
    }
    public void deposito(int a)
    {
        this.bilancio +=  a;
    }
    public void preleva(int prel)
    {
        this.bilancio-=prel;
    }
    public double getBalance() { return this.bilancio;}
}