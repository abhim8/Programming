// example of type casting 
class typeCasting{
    public static void main(String[] args) {
        int myInt = 9;
        double myDouble = myInt; // Automatic casting: int to double
        System.out.println(myInt);      // Outputs 9
        System.out.println(myDouble);   // Outputs 9.0

        double mySecondDouble = 9.78;
        int mySecondInt = (int) mySecondDouble; // Manual casting: double to int
        System.out.println(mySecondDouble);   // Outputs 9.78
        System.out.println(mySecondInt);      // Outputs 9
    }
}

/* Author: Abhilash Movva */