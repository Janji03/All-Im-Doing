public class lezione10 {
    public static void main (String[] args){
        //Classi Astratte 
        // non si possono creare oggetti di classi astratte
        // non si possono implementare body di metodi nelle classi astratte ma
        // tutte le classi "figlie" di una classe astratta, devono implementare i metodi della classe astratta

        Macchina macchina = new Macchina();
        macchina.frena();
        Bus bus = new Bus();
        bus.frena();
    }
}
