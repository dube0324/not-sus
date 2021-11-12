import java.util.Scanner;

class VotingEligibility {
    public static void main(String args[]) 
    {
        Scanner sc = new Scanner(System.in);
        int i=3;
        while(i>0)
        // for(int i=0;i<3;i++)
        {
            System.out.print("Enter your age: ");
            int age = sc.nextInt();
            if (age >= 18)
                System.out.println("You can vote");
            else
                System.out.println("You cannot vote");
            i--;
        }
        sc.close();
    }
}
