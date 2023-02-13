/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author 2162014
 */
import java.util.Scanner;

interface Bank {

    void get_details();
}

class Axes implements Bank {

    String Cname;
    int Cid, nay;
    double balance, tbalance, roi;
    String ROI;

    @Override
    public void get_details() {
        Scanner sc = new Scanner(System.in);
        System.out.println("ENTER CUSTOMER NAME: ");
        Cname = sc.nextLine();
        System.out.println("ENTER CID: ");
        Cid = sc.nextInt();
        System.out.println("ENTER NUMBER OF YEARS: "); 
        nay = sc.nextInt();
        System.out.println("ENTER CURRENT BALANCE: ");
        balance = sc.nextDouble();
        roi = 5;
        ROI = "5%";
        tbalance = balance + ((roi * balance * nay) / 100);
    }

    void show_details() {
        System.out.println("CUSTOMER NAME \t\t ID \t\t NO. OF YEARS \t\t BALANCE \t\t BANK \t\t RATE OF INTEREST \t\t TOTAL AMOUNT");
        System.out.println(Cname + "\t\t\t" + Cid + "\t\t\t" + nay + "\t\t\t" + balance + "\t\t\t" + "AXES" + "\t\t\t" + ROI + "\t\t\t" + tbalance);
    }
}

class SBI implements Bank {

    String Cname;
    int Cid, nay;
    double balance, tbalance, roi;
    String ROI;

    @Override
    public void get_details() {
        Scanner sc = new Scanner(System.in);
        System.out.println("ENTER CUSTOMER NAME: ");
        Cname = sc.nextLine();
        System.out.println("ENTER CID: ");
        Cid = sc.nextInt();
        System.out.println("ENTER NUMBER OF YEARS: ");
        nay = sc.nextInt();
        System.out.println("ENTER CURRENT BALANCE: ");
        balance = sc.nextDouble();
        roi = 8;
        ROI = "8%";
        tbalance = balance + ((roi * balance * nay) / 100);
    }

    void show_details() {
        System.out.println("CUSTOMER NAME \t\t ID \t\t NO. OF YEARS \t\t BALANCE \t\t BANK \t\t RATE OF INTEREST \t\t TOTAL AMOUNT");
        System.out.println(Cname + "\t\t\t" + Cid + "\t\t\t" + nay + "\t\t\t" + balance + "\t\t\t" + "SBI" + "\t\t\t" + ROI + "\t\t\t" + tbalance);
    }
}

class ICIC implements Bank {

    String Cname;
    int Cid, nay;
    double balance, tbalance, roi;
    String ROI;

    @Override
    public void get_details() {
        Scanner sc = new Scanner(System.in);
        System.out.println("ENTER CUSTOMER NAME: ");
        Cname = sc.nextLine();
        System.out.println("ENTER CID: ");
        Cid = sc.nextInt();
        System.out.println("ENTER NUMBER OF YEARS: ");
        nay = sc.nextInt();
        System.out.println("ENTER CURRENT BALANCE: ");
        balance = sc.nextDouble();
        roi = 7;
        ROI = "7%";
        tbalance = balance + ((roi * balance * nay) / 100);
    }

    void show_details() {
        System.out.println("CUSTOMER NAME \t\t ID \t\t NO. OF YEARS \t\t BALANCE \t\t BANK \t\t RATE OF INTEREST \t\t TOTAL AMOUNT");
        System.out.println(Cname + "\t\t\t" + Cid + "\t\t\t" + nay + "\t\t\t" + balance + "\t\t\t" + "ICIC" + "\t\t\t" + ROI + "\t\t\t" + tbalance);
    }
}

public class interBank {

    public static void main(String[] args) {
        int ch;
        Scanner sc = new Scanner(System.in);
        System.out.println("1. AXES");
        System.out.println("2. ICIC");
        System.out.println("3. SBI");
        ch = sc.nextInt();
        switch (ch) {
            case 1 -> {
                Axes a = new Axes();
                a.get_details();
                a.show_details();
            }
            case 2 -> {
                ICIC i = new ICIC();
                i.get_details();
                i.show_details();
            }
            case 3 -> {
                SBI s = new SBI();
                s.get_details();
                s.show_details();
            }
            default -> System.out.println("Invalid choice!");
        }
    }
}