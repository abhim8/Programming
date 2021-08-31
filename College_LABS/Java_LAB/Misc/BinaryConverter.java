package Misc;
import java.util.Scanner;

//your code goes here
class Converter{
    public static String toBinary(int n){
        String binary = "";
        while(n > 0){
            binary = (n%2)+binary;
            n /= 2;
        }
        return binary;
    }
}

public class BinaryConverter {
    public static void main(String[ ] args) {
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        System.out.print(Converter.toBinary(x));
        sc.close();
    }
}