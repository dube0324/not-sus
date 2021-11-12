import java.util.Scanner;

class DifferentInputs {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter integer: ");
        Integer a = sc.nextInt();
        byte b = a.byteValue();
        System.out.println("Int to byte: " + b);
        System.out.println("Enter char: ");
        char d = sc.next().charAt(0);
        a = (int) d;
        System.out.println("Char to int: " + a);
        System.out.println("Enter double: ");
        Double c = sc.nextDouble();
        a=c.intValue();
        System.out.println("Double to int: " + a);
        b = c.byteValue();
        System.out.println("Double to byte: " + b);
        sc.close();
    }
}