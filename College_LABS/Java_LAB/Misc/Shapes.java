package Misc;

import java.util.Scanner;

abstract class Shape {
    int width;
    abstract void area();
}
//your code goes here
class Square extends Shape{
    Square(int t){
        width = t;
    }
    void area(){
        System.out.println(width*width);
    }
}

class Circle extends Shape{
    Circle(int t){
        width = t;
    }
    void area(){
        double ar = Math.PI * width * width;
        System.out.println(ar);
    }
}

public class Shapes {
    public static void main(String[ ] args) {
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        int y = sc.nextInt();
        
        Square a = new Square(x);
        Circle b = new Circle(y);
        a.area();
        b.area();

        sc.close();
    }
}
