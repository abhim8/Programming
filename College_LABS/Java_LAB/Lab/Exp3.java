
import java.util.Scanner;

abstract class shape{
    int length, breadth, radius;
    Scanner input = new Scanner(System.in);
    abstract void printArea();
}

class Rectangle extends shape{
    void printArea(){
        System.out.println("*** Finding the Area of Rectangle ***");
		System.out.print("Enter length and breadth: ");
		length = input.nextInt();
		breadth = input.nextInt();
		System.out.println("The area of Rectangle is: " + length * breadth);
    }
}
class Triangle extends shape{
    void printArea(){
        System.out.println("\n*** Finding the Area of Triangle ***");
		System.out.print("Enter Base And Height: ");
		length = input.nextInt();
		breadth = input.nextInt();
		System.out.println("The area of Triangle is: " + (length * breadth) / 2);
    }
}
class Circle extends shape{
    void printArea(){
        System.out.println("\n*** Finding the Area of Cricle ***");
		System.out.print("Enter Radius: ");
		radius = input.nextInt();
		System.out.println("The area of Cricle is: " + 3.14f * radius * radius);
    }
}


class Exp3 {
    public static void main(String[] args) {
        Rectangle rec = new Rectangle();
		rec.printArea();

		Triangle tri = new Triangle();
		tri.printArea();
		
		Circle cir = new Circle();
		cir.printArea();
    }
}
