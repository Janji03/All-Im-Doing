public class ImpiegatiDemo {
    public static void main (String[] args){
        Impiegato A = new Impiegato("Lollo",2000, 10000);
        Impiegato B = new Impiegato("Giangi",2003, 10000);
        Stagista C = new Stagista("stagista", 1990, 100000);
        Stagista  D = new Stagista("stagista", 1000, 200000);
        Impiegato[] array = {A,B,C,D};
        Impiegato giovane = new Impiegato();
        giovane = giovane.Youngest(array);
        System.out.println(giovane);
    }
}
