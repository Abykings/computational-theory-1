import java.io.*;

public class Primos {
    public static void main(String[] args) {
        int desde = 1;
        int hasta = 100000;
        boolean esPrimo;

        for (int i = desde; i <= hasta; i++) {
            esPrimo = true;

            for (int j = 2; j <= Math.sqrt(i) && esPrimo; j++) {
                if (i % j == 0) {
                    esPrimo = false;
                }
            }

            if (esPrimo) {
                System.out.println(i+" "+Integer.toBinaryString(i));
                FileWriter fw = null;
                BufferedWriter bw = null;
                PrintWriter out = null;
                try {
                    fw = new FileWriter("myfile.txt", true);
                    bw = new BufferedWriter(fw);
                    out = new PrintWriter(bw);
                    out.println(i+" "+Integer.toBinaryString(i));
                    out.close();
                } catch (IOException e) {
                    System.out.println(e);
                } 
            }
        }
    }
}