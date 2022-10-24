
import java.text.DecimalFormat;

/*
 * Program Name: Customer.java
 * Programmer Name: Robert Mines
 * Program Description: Customer class for CIS355A course project
 */

/**
 *
 * @author mines
 */
public class Customer 
{
    // Customer class attributes
    private int customerID;
    private String name;
    private String address;
    private String yardType;
    private double length;
    private double width;
    private double totalCost;
    
    // Customer constructors
    public Customer()
    {   // Default constructor
        customerID = 0;
        name = "Unknown";
        address = "Unknown";
        yardType = "Unknown";
        length = 0.0;
        width = 0.0;
    }

    public Customer(int customerID, String name, String address, String yardType, double length, double width, double totalCost) 
    {   // Parameterized constructor
        this.customerID = customerID;
        this.name = name;
        this.address = address;
        this.yardType = yardType;
        this.length = length;
        this.width = width;
        this.totalCost = totalCost;
    }
    
    // Behaviors
    @Override
    public String toString()
    {
        return name; // Only customer name is returned
    }
    
    public String getDetails()
    {   // Decimal Formatter to format total cost to currency format
        DecimalFormat frmt = new DecimalFormat( "$#,##0.00" );
        String output = name + "\n";
        output += address + "\n";
        output += "Type: " + yardType + "\n";
        output += "Width: " + width +"\n";
        output += "Length: " + length +"\n";
        output += "Total Cost: " + frmt.format(totalCost); 
        
        // Display complete details
        return output;
    }
    
    // Set & Get Methods
    public int getCustomerID() {
        return customerID;
    }   

    public void setCustomerID(int customerID) {
        this.customerID = customerID;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getAddress() {
        return address;
    }

    public void setAddress(String address) {
        this.address = address;
    }

    public String getYardType() {
        return yardType;
    }

    public void setYardType(String yardType) {
        this.yardType = yardType;
    }

    public double getLength() {
        return length;
    }

    public void setLength(double length) {
        this.length = length;
    }

    public double getWidth() {
        return width;
    }

    public void setWidth(double width) {
        this.width = width;
    }

    public double getTotalCost() {
        return totalCost;
    }

    public void setTotalCost(double totalCost) {
        this.totalCost = totalCost;
    }
    
}
