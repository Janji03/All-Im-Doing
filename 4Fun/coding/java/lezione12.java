import java.time.LocalDate;
import java.time.LocalDateTime;
import java.time.LocalDate;
import java.time.LocalTime;
import java.time.format.DateTimeFormatter;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;



public class lezione12 {
    public static void main(String[] args){
        //Casting 
        double x = 9;
        System.out.println(x); //implicito
        int a = (int) 9.4;
        System.out.println(a);

        //Data e ora 
        LocalDate d = LocalDate.now(); // crea la data di oggi 
        System.out.println(d);
        LocalTime t = LocalTime.now();
        System.out.println(t);
        LocalDateTime dt = LocalDateTime.now();
        System.out.println(dt);
        //permette di creare un format "personalizzato su come scrivere la data"
        //local date è settata come anno mese giorno, con formatter si puo creare 
        //il pattern giorno,mese,anno
        DateTimeFormatter format = DateTimeFormatter.ofPattern("dd/MM/yyyy"); 
        System.out.println(d.format(format));
        
        //Hashmap
        //simili agli array-list ma associano ad un valore una chiave
        HashMap <String, String> capitali = new HashMap <String, String>(); 
        capitali.put("Italia", "Roma"); 
        capitali.put("Francia", "Parigi");
        capitali.put("Inghilterra" ,"Londra");
        capitali.put("Germania", "Berlino");
        System.out.println(capitali.get("Italia")); //accedo ad un elemento
        // tramite la chiave corrispondente
        System.out.println(capitali); // come formatta la hashmap
        capitali.remove("Francia");
        //capitali.clear(); (toglie tutti gli elementi e le chiavi)
        System.out.println(capitali);

        //Iteratori 
        ArrayList <String> persone = new ArrayList<String>();
        persone.add("A");
        persone.add("B");
        persone.add("C");
        persone.add("D");
        Iterator <String> it = persone.iterator();

        //ciclo per rimuovere un elemento da un ArrayList
        
        while(it.hasNext())
        {
            String persona = it.next();
            if(persona == "B")
            {
            it.remove();
            }
        }
        System.out.println(persone);
        }
}
