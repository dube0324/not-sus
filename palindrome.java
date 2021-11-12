import java.util.Scanner;
class Palindrome {
    public static void main(String args[])
        {
            Scanner sc= new Scanner(System.in);
            System.out.print("Enter number: ");
            int n= sc.nextInt();
            int newn=0;
            while(n!=0)
            {
                int rem=n%10;
                newn=newn*10+rem;   
                n/=10;
            }
            System.out.print("Reverse: "+newn);
            sc.close();
        }
}
