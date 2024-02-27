//Appunti Java 1


public class lezione1 {
    public static void main (String[] args){
        //Operatori Aritmetici
        int x=5;
        x+=3;
        x++;
        x--;
        int y=6;
        System.out.println(x+y);
        // + - * / %
        System.out.println(Math.abs(-66));
        System.out.println(Math.max(5,7));
        System.out.println(Math.pow(2,3));
        System.out.println(Math.sqrt(25));
        System.out.println(Math.PI);
        //Operatori Logici
        // && (AND) || (OR) ! (NOT)
        boolean q= 3==2;
        System.out.println(q);
        // IF, ELSE, ELSE IF
        boolean l = true;
        if (!l)
         {
            System.out.println("L");
         }
        if (true)
        {
            System.out.println("prova");
        }
    }    
}
