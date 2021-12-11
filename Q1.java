package week4;
/*
 *  Create a class called Area with a variable height. Create a triangle class that extends area class with the variables base and 
 *  method to calculate the area. Create a rectangle class that extends area class with variables width and height, method calcarea
 *  Tasks:
 *  1. Raise exception for negative input value.
 *  2. Display the concept of inheritance.
 *  3. Use keywords this final and static for variables.
 *  4. Show minimum 3 test cases of your own:
 *  	a)Correct
 *  	b)Invalid (With exception)
 */
import java.util.*;
class NegativeValueException extends Exception
{
	String str;
	public NegativeValueException(String str)
	{
		this.str = str;
	}
	public String toString()
	{
		return str.toString();
	}
}
class Area 
{
	double height;
	
	public Area(double height) 
	{
		this.height = height;
		System.out.println("Inside Area");
	}
}

final class Triangle extends Area 
{
	
	double height;
	double base;
	
	public Triangle(double height, double base) 
	{
		super(height);
		this.height= height;
		this.base = base;
		System.out.println("Inside Triangle");
	}
	
	public double calArea() 
	{
		return (this.base * this.height / 2.0);
	}
}

class Rectangle extends Area
{
	double width,height;
	
	public Rectangle(double width, double height)
	{
		super(height);
		this.width=width;
		this.height=height;
		System.out.println("Inside Rectangle");
	}
	
	public double calArea()
	{
		return (this.width*this.height);
	}
}

public class Q1 {

	public static void main(String[] args) throws NegativeValueException
	{
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter choice: ");
		System.out.println("1. Triangle\n2. Rectangle");
		int choice = sc.nextInt();
		double height = 0,width=0,base=0;
		switch(choice)
		{
		case 1:
			{
				System.out.println("Enter height: ");
				try
				{
					height = sc.nextDouble();
					if(height<0)
						throw new NegativeValueException("Enter double.");
				}
				catch(NegativeValueException e) 
				{
	    			System.out.println(e);
	    		}
				System.out.println("Enter base: ");
				try 
				{
					base = sc.nextDouble();
					if(base<0)
						 throw new NegativeValueException("Enter double.");
				}
	    		catch(NegativeValueException e) 
				{
	    			System.out.println(e);
	    		}
				Triangle t1 = new Triangle(height, base);
				System.out.println("Area of triangle is: "+t1.calArea());
				break;
			}
		case 2:
			{
				System.out.println("Enter height: ");
				try
				{
					height = sc.nextDouble();
					if(height<0)
						throw new NegativeValueException("Enter double.");
				}
				catch(NegativeValueException e) 
				{
	    			System.out.println(e);
	    		}
				System.out.println("Enter width: ");
				try 
				{
					width = sc.nextDouble();
					if(width<0)
						 throw new NegativeValueException("Enter double.");
				}
	    		catch(NegativeValueException e) 
				{
	    			System.out.println(e);
	    		}
				Rectangle r1 = new Rectangle(width, height);
				System.out.println("Area of rectangle is: "+r1.calArea());
				break;
			}
		}
	}
}
