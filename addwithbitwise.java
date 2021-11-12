import java.util.Scanner;

class AddWithBitWiseOperator 
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter 2 numbers: ");
        int a = sc.nextInt();
        int b = sc.nextInt();
        int carry;
        while (b != 0) {
            carry = a & b;
            a = a ^ b;
            b = carry << 1;
        }
        System.out.println("Sum is: " + a);
        if ((a ^ 1) == a + 1)
            System.out.println("Even");
        else
            System.out.println("Odd");
        sc.close();
    }
}