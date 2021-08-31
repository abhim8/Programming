/*  > Variable: Variables are containers for storing data values. All Java variables must be identified with unique names.
                These unique names are called identifiers.
    
    > Syntax to declare a valid variable:
        data_type variable_name;
            (or)
        data_type variable_name_1, variable_name_2,...;
            (or)
        data_type variable_name = value;
            (or)
        data_type variable_name_1 = value, variable_name_2 = value,...;

    > The general rules for constructing names for variables (unique identifiers) are:
        Names can contain letters, digits, underscores, and dollar signs
        Names must begin with a letter
        Names should start with a lowercase letter and it cannot contain whitespace
        Names can also begin with $ and _ (but we will not use it in this tutorial)
        Names are case sensitive ("myVar" and "myvar" are different variables)
        Reserved words (like Java keywords, such as int or boolean) cannot be used as names   */
        
class variables {
    int instanceVar = 100; // instance variable
    final int finalVar = 10; // final variable (can't be modified/immutable once decalared with final)
    static int staticVar = 10; // final variable (can't be modified/immutable once decalared with final)
    public static void main(String[] args) {
        int localVar = 10; // local variable
        
    }    
}

/* Author: Abhilash Movva */