/*
 * Create two classes as Vehicle and Car where car is inheriting vehicle. Now create an object for the car and print the details. Note that data member and
 * methods can be defined in both classes.
 * Tasks:
 * 1. Display inheritance.
 * 2. Provide at least 4 variables for each car and print them.
 * 3. If user enters 2 cars with same name, raise exception.
 * 4. Show at least 4 different car data. 
 */
package week4;
import java.util.*;
class SameNameException extends Exception
{
	String str;
	public SameNameException(String str)
	{
		this.str = str;
	}
	public String toString()
	{
		return str.toString();
	}
}
class Vehicle
{
	int year;
	String model,type,colour;
	
	public Vehicle(int year /*,String model, String type, String colour*/)
	{
		this.year = year;
//		this.model = model;
//		this.type = type;
//		this.colour = colour;
		System.out.println("Inside Vehicle");
	}
	public void Display()
	{
		System.out.println("Year: "+this.year);
//		System.out.println("Model: "+this.model);
//		System.out.println("Type: "+this.type);
//		System.out.println("Colour: "+this.colour);
	}
}

class Car extends Vehicle
{
	int regno,mileage,price;
	String carName;
	
	public Car(int year, /*String model, String type, String colour, */int regno, int mileage, int price, String carName)
	{
		super(year/*, model, type, colour*/);
		this.regno = regno;
		this.mileage = mileage;
		this.price = price; 
		this.carName = carName;
		System.out.println("Inside Car");
	}
	
	public void display()
	{
		Display();
		System.out.println("RegNo: "+this.regno);
		System.out.println("Mileage: "+this.mileage);
		System.out.println("Price: "+this.price);
		System.out.println("Car Name: "+this.carName);
	}
}
public class Q2 {

	public static void main(String[] args) throws SameNameException
	{
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		Car c[] = new Car[5];
		for(int i=0;i<5;i++)
		{
			c[i]= new Car(0,0,0,0,"");
			System.out.println("\nEnter details of CAR"+(i+1)+": ");
			System.out.println("Enter year(int): ");
			c[i].year = sc.nextInt();
//			System.out.println("Enter model(string): ");
//			c[i].model = sc.nextLine();
//			sc.nextLine();
//			System.out.println("Enter type(string): ");
//			c[i].type = sc.nextLine();
//			System.out.println("Enter colour(string): ");
//			c[i].colour = sc.nextLine();
			System.out.println("Enter regno(int): ");
			c[i].regno = sc.nextInt();
			System.out.println("Enter mileage(int): ");
			c[i].mileage = sc.nextInt();
			System.out.println("Enter price(int): ");
			c[i].price = sc.nextInt();
			sc.nextLine();
			System.out.println("Enter carName(string): ");
			c[i].carName = sc.nextLine();
			c[i].display();
			for(int j=0;j<i;j++)
			{
				if(c[j].carName.equalsIgnoreCase(c[i].carName))
				{
					try
					{
						throw new SameNameException("2 cars have the same name.");
					}
					catch(SameNameException e)
					{
						System.out.println(e);
						return;
					}
				}
			}
		}
	}

}
