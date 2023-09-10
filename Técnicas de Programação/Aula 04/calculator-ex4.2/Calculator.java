
/**
 * A calculator for exercise 4.2
 * 
 * @author Samuel Canuto 
 * @version 1.0
 */
public class Calculator
{
    /**
     * Constructor
     */
    public Calculator(){
        
    }
    
    /**
     * Check if the number is a prime number
     */
    public boolean isPrime(int n){
        boolean prime = false;
        int i = 0;
        
        for(i=(n-1) ; i>1 ; i--){
            if(n % i == 0){
                prime = false;
            }
            else{
                prime = true;
            }
        }
        return prime;
    }
}
