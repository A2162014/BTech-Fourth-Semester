//Implementation of Multithreaded program:

import java.util.Random;

public class th {

    public static void main(String[] args) {
        Random random = new Random();
        NumberGenerator numberGenerator = new NumberGenerator(random);
        SquareCalculator squareCalculator = new SquareCalculator();
        CubeCalculator cubeCalculator = new CubeCalculator();
        Thread generatorThread = new Thread(numberGenerator);
        Thread squareThread = new Thread(squareCalculator);
        Thread cubeThread = new Thread(cubeCalculator);
        generatorThread.start();
        squareThread.start();
        cubeThread.start();
    }
}

class NumberGenerator implements Runnable {

    private final Random random;

    public NumberGenerator(Random random) {
        this.random = random;
    }

    @Override
    public void run() {
        while (true) {
            int number = random.nextInt(10);
            if (number % 2 == 0) {
                SquareCalculator.handleNumber(number);
            } else {
                CubeCalculator.handleNumber(number);
            }
            try {
                Thread.sleep(1000);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
    }
}

class SquareCalculator implements Runnable {

    public static synchronized void handleNumber(int number) {
        System.out.println("Received an even number: " + number);
        int square = number * number;
        System.out.println("Square of the number: " + square);
    }

    @Override
    public void run() {
        // This thread doesn't need to do anything, as the handleNumber() method
        // is static and synchronized, so it can be called from any thread.
    }
}

class CubeCalculator implements Runnable {

    public static synchronized void handleNumber(int number) {
        System.out.println("Received an odd number: " + number);
        int cube = number * number * number;
        System.out.println("Cube of the number: " + cube);
    }

    @Override
    public void run() {
        // This thread doesn't need to do anything, as the handleNumber() method
        // is static and synchronized, so it can be called from any thread.
    }
}
