class GfGFunction{
    
    // Function to find number of jumps
    // N : number inscribed on the last stone.
    // X : number on which we have to reach
    static void findJumps(long N, long X){
        
       long j1, j2, jt;
       
       jt = N/2;
       j1 = X/2;
       j2 = jt - j1;
       
       if (j1 > j2)
            System.out.println(j2);
       else
            System.out.println(j1);
        
    }
