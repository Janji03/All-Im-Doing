public class Pizza {
    String impasto;
    String salsa;
    Boolean formaggio;
    int prezzo;
    Pizza (String impasto, int prezzo)
    {
        this.impasto=impasto;
        this.prezzo = prezzo;
    }

    Pizza(String impasto, String salsa, Boolean formaggio, int prezzo)
    {
        this.impasto=impasto;
        this.salsa=salsa;
        this.formaggio=formaggio;
        this.prezzo=prezzo;
    }

}
