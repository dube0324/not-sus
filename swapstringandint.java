import java.util.Scanner;
class SwapIntAndString
{
public static void main(String args[])
    {
    Scanner sc= new Scanner(System.in);
    System.out.println("Enter an integer: ");
    String a=sc.nextLine();
    System.out.println("Enter a string: ");
    String s=sc.nextLine();
    System.out.println("Int: a="+a);
    System.out.println("String: b="+s);
    String temp=s;
    s=String.valueOf(a);
    a=temp;
    System.out.println("Int to String: a="+a+"\nString to Int: b="+s);
    sc.close();
    }
}