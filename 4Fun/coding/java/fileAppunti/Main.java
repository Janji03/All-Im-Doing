package fileAppunti;

import java.io.File;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;

public class Main {
    public static void main(String[] args){
        //Lavorare con i File

        File file = new File ("C:\\Users\\gianl\\Desktop\\prova.txt");
        if(file.exists())
        {
            System.out.println("il file esiste ");
        }
        else 
        {
            System.out.println("il file non esiste");
        }
        System.out.println(file.getPath());
        System.out.println(file.getAbsolutePath());
        System.out.println(file.isFile());
        //file.delete()

        //come creare e scrivere su un file 
        try{
        FileWriter writer = new FileWriter("provaScrittura.txt");
        writer.write("prova a scrivere sul file"); //crea il file e scrive la stringa inserita
        writer.append("\n aggiungi una riga ");
        writer.append("ciaooooo");
        //write va a sostiuire la stringa mentre append la aggiunge
        writer.close();
        } catch (IOException e) {
            e.printStackTrace();
        }
        try (FileReader reader = new FileReader("provaScrittura.txt")) {
            int data = reader.read(); 
            System.out.println(data); //ritorna il valore ASCII della prima lettera del file 

            //per leggere tutto il file serve un while
            // ciclo finchè il carattere diverso da -1 (ovvero finche non finiscono le parole nel file)
            //si usa print e non println in modo che legga tutto il file bello clean
            // si fa il casting su data (in quanto intero e noi vogliamo il carattere)
            while(data != -1){
                System.out.print((char)data);
                data =reader.read();
            }

        } catch (IOException e) {
           
            e.printStackTrace();
        }

    }

}