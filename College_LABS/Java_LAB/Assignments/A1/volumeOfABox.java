// 6.	Write a Java program to find Box volume using parameterized constructor?

package Assignments.A1;
import java.util.Scanner;
class Box{
    double l, b , h;
    Box(double l, double b, double h){
        this.l = l;
        this.b = b;
        this.h = h;
    }
    void getArea(){
        System.out.println("Volume of the Box is: " + (l*b*h) );
    }
    void setLBH(){
        Scanner input = new Scanner(System.in);
        System.out.print("Enter Length, Breadth, & Height of the Box: ");
        this.l = input.nextDouble();
        this.b = input.nextDouble();
        this.h = input.nextDouble();
        input.close();
    }
}
public class volumeOfABox {
    public static void main(String[] args) {
        Box obj = new Box(1,2,3);
        obj.getArea();
    }
}
