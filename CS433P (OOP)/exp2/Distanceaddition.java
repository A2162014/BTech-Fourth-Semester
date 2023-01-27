/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author 2162014
 */
import java.util.Scanner;

class Distance {

    int feet, inch;

    Distance() {
        feet = 0;
        inch = 0;
    }

    Distance(int ft, int in) {
        feet = ft;
        inch = in;
    }

    void readDistance() {
        Scanner in = new Scanner(System.in);
        System.out.println("Enter the distance: ");
        System.out.println("Enter feet: ");
        feet = in.nextInt();
        System.out.println("Enter inch: ");
        inch = in.nextInt();
    }

    void printDistance() {
        System.out.println(feet + "\'" + inch + "\"");
    }

    void addDistance(Distance d) {
        feet = this.feet + d.feet;
        inch = this.inch + d.inch;
        if (inch > 11) {
            ++feet;
            inch -= 12;
        }
    }

}

public class Distanceaddition {

    public static void main(String[] args) {
        Distance d1 = new Distance();
        Distance d2 = new Distance(3, 5);
        d1.readDistance();
        System.out.println("Distance D1:");
        d1.printDistance();
        System.out.println("Distance D2");
        d2.printDistance();
        System.out.println("Sum of two distances: ");
        d1.addDistance(d2);
        d1.printDistance();
    }
}
