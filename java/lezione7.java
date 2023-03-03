public class lezione7 {
    public static void main (String[] args){
        //Overloaded Constructors
        //si possono avere piu costruttori per la stessa classe che prendono numero e tipi di dato diversi
    Pizza pizza1 = new Pizza("farina", "Pomodoro", true, 7);
    Pizza pizza2 = new Pizza ("focaccia", 3);
    System.out.println(pizza1.impasto);
    System.out.println(pizza2.impasto);
    
    }
}
