
/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
/**
 *
 * @author 2162014
 */
import java.util.Random;

public class Array_demo {
    public static void main(String[] args) {
        int arr[] = new int[10];
        Random rn = new Random();
        for (int i = 0; i < 10; i++) {
            arr[i] = rn.nextInt(100);
        }
        System.out.println("Initial Array");
        for (int i : arr) // for each loop
        {
            System.out.println(i);
        }
        // sort the array
        int n = arr.length;
        int temp;
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
        System.out.println("Sorted Array");
        for (int i : arr) {
            System.out.println(i);
        }
    }
}