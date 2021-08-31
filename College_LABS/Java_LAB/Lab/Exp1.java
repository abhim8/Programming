
import java.util.Scanner;
public class Exp1 {
    /*   EXPERIMENT-15 
        *** BUBBLE SORT ***
        1 2 3 3 4 5  
    */
    public static void main(String[] args) {
        Scanner obj = new Scanner(System.in);
        int size, cnt =0;

        //Reading the size
        System.out.print("Enter the size of list: ");
        size = obj.nextInt();

        //Creating the list
        int list[] = new int[size];
        System.out.print("Enter " + size + " integers: ");
        for (int i = 0; i < size; i++) 
            list[i] = obj.nextInt();
        
        //BubbleSort Logic
        int temp = 0;
        for (int i = 0; i < size-1; i++) {
            for (int j=0; j<size-i-1; j++  ) {
                //Swapping
                if(list[j] < list[j+1]){
                    temp = list[j];
                    list[j] = list[j+1];
                    list[j+1] = temp;
                    cnt++;
                }
            }
        }

        //PrintingSortedList
        System.out.print("Sorted List: ");
        for (int i=0; i<size; i++){
            System.out.print(list[i]+ " ");
        }
        System.out.println("\nTotal no of interchanges: " + cnt);
        
        obj.close();
    }

}
