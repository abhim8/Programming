
// import java.util.Scanner;
public class Exp2 {
    /*   EXPERIMENT-14 
        *** Quick SORT ***
    */
    String names[];
    int length;
    public static void main(String[] args) {

        Exp2 obj = new Exp2();

        String namesList[] = { "raja", "Abhi", "gouthami", "madhu", "dharani", "kusuma", "mohan", "gouthu", "hello", "rani", "gouthami", "honey", "heyaansh" };
        obj.sort(namesList);

        System.out.println();
        for (String i: namesList){
            System.out.print(i);
            System.out.print(" ");
        }
        System.out.println();

    }

    void sort(String array[]){
        if( array== null || array.length == 0){ return; }
        this.names = array;
        this.length = array.length;
        quickSort(0, length-1);
    }
    void quickSort(int lowerIndex, int higherIndex){
        int i = lowerIndex;
        int j = higherIndex;
        String pivot = this.names[lowerIndex + (higherIndex-lowerIndex)/2];
        while(i <= j){
            while(this.names[i].compareToIgnoreCase(pivot) < 0){
                i++;
            }
            
            while(this.names[j].compareToIgnoreCase(pivot) > 0){
                j--;
            }

            if(i <= j){
                exchangeNames(i,j);
                i++; j--;
            }
        }
        if (lowerIndex < j) {
            quickSort(lowerIndex, j);
        }
        if (i < higherIndex) {
            quickSort(i, higherIndex);
        }
    }
    void exchangeNames(int i, int j) {
        String temp = this.names[i];
        this.names[i] = this.names[j];
        this.names[j] = temp;
    }

}
