
/**
 * @author Samuel Canuto 
 * @version 23/08/2023
 */
public class Person
{
    // The person's name
    private String name;
    // The person's age
    private int age;

    /**
     * Constructor
     */
    public Person(){
        name = "unknown";
        age = 0;
    }

    /**
     * Set the person's name.
     */
    public void setName(String fullName){
        name = fullName;
    }
    
    /**
     * Set the person's age.
     */
    public void setAge(int currentAge){
        age = currentAge;
    }
    
    /**
     * Returns the person's information
     */
    public void getID(){
        System.out.println("The name of this person is: " + name + ".");
        System.out.println("Age: " + age + "y.");
    }
}
