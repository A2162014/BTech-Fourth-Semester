
// Sample Program 3 – Print the average of 3 Numbers
import java.util.Scanner;

class Avg {
    float n1, n2, n3;

    public float getAverage() {
        return (n1 + n2 + n3) / 3;
    }
}

public class Prog1 {
    public static void main(String[] args) {
        Avg ob = new Avg();
        Scanner scn = new Scanner(System.in);

        System.out.println("Enter the number 1");
        ob.n1 = scn.nextFloat();

        System.out.println("Enter the number 2");
        ob.n2 = scn.nextFloat();

        System.out.println("Enter the number 3");
        ob.n3 = scn.nextFloat();

        System.out.println("Average of 3 numbers is: " + ob.getAverage());
    }
}

class ClassObjectArray {
    public static void main(String[] args) {
        Account[] obj = new Account[2];
        obj[0] = new Account();
        obj[1] = new Account();

        obj[0].setData(1, 2);
        obj[1].setData(3, 4);

        System.out.println("For Array Element 0");
        obj[0].showData();

        System.out.println("For Array Element 1");
        obj[1].showData();
    }
}

class Account {
    int a;
    int b;

    public void setData(int c, int d) {
        a = c;
        b = d;
    }

    public void showData() {
        System.out.println("Value of a = " + a);
        System.out.println("Value of b = " + b);
    }
}
