//Use of the try-catch-finally block to handle exceptions that occur during the transfer.
//Throwing an exception when the transfer amount is greater than the available balance in the
//customer's account. Write a JAVA code for the same

public class excep {

    private double balance;

    public excep(double initialBalance) {
        balance = initialBalance;
    }

    public void transfer(double amount, excep recipient) throws
            InsufficientFundsException {
        try {
            if (amount > balance) {
                throw new InsufficientFundsException("Transfer amount exceeds available balance");
            } else {
                balance -= amount;
                recipient.balance += amount;
                System.out.println("Transfer successful!");
            }
        } catch (InsufficientFundsException e) {
            System.out.println("Transfer failed: " + e.getMessage());
            throw e;
        }
    }

    public static void main(String[] args) {
        excep account1 = new excep(1000.0);
        excep account2 = new excep(500.0);
        try {
            System.out.println("Acc1 balance before transfer: " + account1.balance);
            System.out.println("Acc2 balance before transfer: " + account2.balance);
            account1.transfer(600.0, account2);
            // account2.transfer(400.0, account1);
        } catch (InsufficientFundsException e) {
            // Handle the exception here
        } finally {
            System.out.println("Acc1 balance after transfer: " + account1.balance);
            System.out.println("Acc2 balance after transfer: " + account2.balance);
        }
    }
}

class InsufficientFundsException extends Exception {

    public InsufficientFundsException(String message) {
        super(message);
    }
}
