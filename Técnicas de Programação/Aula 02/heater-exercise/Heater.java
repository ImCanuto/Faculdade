
/**
 * A simple heater.
 * 
 * @author Samuel Canuto 
 * @version 23/08/2023
 */
public class Heater
{
    // Temperature...
    private int temperature;
    // min temperature
    private int min;
    // max temperature
    private int max;
    // Value of increment
    private int increment;
    /**
     * Constructor
     * Set the temperature, the min, the max and the increment.
     */
    public Heater(int minTemp, int maxTemp){
        temperature = minTemp;
        min = minTemp;
        max = maxTemp;
        increment = 5;
    }
    
    /**
     * Set the value of increment.
     */
    public void setIncrement(int value){
        if(value > 0){
            increment = value;
        }
        else{
            System.out.println("Please, choose a number bigger than 0");
        }
    }

    /**
     * Increases the temperature by the value of increment.
     */
    public void warmer(){
        if((temperature + increment) > max){
            System.out.println("Too hot!");
        }
        else{
            temperature += increment;
        }
    }
    
    /**
     * Decreases the temperature by the value of increment.
     */
    public void cooler(){
        if((temperature - increment) < min){
            System.out.println("Too cold!");
        }
        else{
            temperature -= increment;
        }
    }
    
    /**
     * Returns the current temperature.
     */
    public int getTemperature(){
        return temperature;
    }
}
