class GfGFunction{
    
    // Function to print ForkJava
    // N : input number
    static void forkJava(int n){
        
        if (n%15 == 0)
            System.out.println("Fork Java");
        else if (n%3 == 0)
            System.out.println("Fork");
        else if (n%5 == 0)
            System.out.println("Java");
        else
            System.out.println();
        
        
    }
