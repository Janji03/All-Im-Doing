//appunti java 5

public class lezione5 {
    public static void main (String[] args){
        //Funzioni Metodi
        Integer a=5; 
        funzione(a);
        System.out.println("\n");
       int ris = prodotto(5,3);
       System.out.println(ris);
       int int_add=addizione(5,3);
       double double_add=addizione(2.15,3,5);
       System.out.println(int_add);
       System.out.println(double_add);

    }
    static void funzione(int a)
    {
        int b=4;
        System.out.println("prova " + (a+b));
    }
    static int prodotto (int x,int y)
    {
        return x*y;
    }

    //Overloaded Methods
    // si possono creare metodi con lo stesso nome ma che prendono paramentri diversi
    //sono metodi con stesso nome che si differenziano per il numero o tipi di dato che usano
    static int addizione(int a,int b)
    {
        return a+b;
    }
    static double addizione(double a,double b,int c)
    {
        return a+b+c;
    }
}