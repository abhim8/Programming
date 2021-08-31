package Misc;
import java.util.*;
public class Genratepw {
    public static void main(String[] args) {
        int length = 10;
        System.out.println(get_pw(length));
    }
    static char [] get_pw(int len){
        System.out.println("Generating Password using random()");
        System.out.print("\nYour new password is: ");
        String Capital_chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        String Small_chars = "abcdefghijklmnopqrstuvwxyz";
        String numbers = "0123456789";
        String symbols = "!@#$%^&*_=+-/.?<>)(";
        String values = Capital_chars + Small_chars + numbers + symbols;
        Random rndm_method = new Random();
        char [] pw = new char[len];
        for(int i=0; i<len; i++){
            pw[i] = values.charAt(rndm_method.nextInt(values.length()));
        }
        return pw;
    }
}
