package fileAppunti;

import java.io.File;

public class Main {
    public static void main(String[] args){
        //Lavorare con i File

        File file = new File ("prova.txt");
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
        
    }
}
