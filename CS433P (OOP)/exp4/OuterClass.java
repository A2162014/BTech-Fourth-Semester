/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author 2162014
 */
public class OuterClass {

    int a = 7, b = 7, c = 0;

    class inner {

        public void output() {
            System.out.println("Inner Class");
            c = a + b;
        }
    }

    public void input() {
        inner i = new inner();
        i.output();
        System.out.println("Outer Class");
        System.out.println("a+b=" + c);
    }

    public static void main(String[] args) {
        OuterClass o = new OuterClass();
        o.input();
    }
}
