public class esercizi1 {
    public static void main (String[] args){
        ContoCorrente A = new ContoCorrente("prova");
        ContoCorrente B = new ContoCorrente("prova1", 1000);
        A.Versare(200);
        System.out.println(A);
        System.out.println(B);
        ContoCorrenteValuta C = new ContoCorrenteValuta("prova2",100,Valuta.Dollari);
        System.out.println(C);

       

    }
}
