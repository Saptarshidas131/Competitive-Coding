import java.lang.Math;
// Class GfGFunction containing function operations()
class GfGFunction{
    
    /* Function to do the operations.
    * Arguments : a, b and c
    */
    static void operations(int a, int b, int c){
    
    long p = (long)Math.pow(a,b);
    
    System.out.println(p);
    
    System.out.println((p^c));
    
    System.out.println(p%c);
        
    
    }

