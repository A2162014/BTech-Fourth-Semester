 /*
 * Write a code snippet that demonstrates the following:
 * Use of the try-catch-finally block to handle exceptions that occur during the transfer.
 * Throwing an exception when the transfer amount is greater than the available balance in the
 * customer's account. Write a JAVA code for the same
 */
class InsufficientBalanceException extends Exception {
    public InsufficientBalanceException(String message) {
        super(message);
    }
}

class Account {
    private double balance;

    public Account(double balance) {
        this.balance = balance;
    }

    public double getBalance() {
        return balance;
    }

    public void withdraw(double amount) throws InsufficientBalanceException {
        if (balance >= amount) {
            balance = balance - amount;
        } else {
            throw new InsufficientBalanceException("Insufficient balance in the account to withdraw funds.");
        }
    }

    public void deposit(double amount) {
        balance += amount;
    }
}

public class Bank {
    public static void transferFunds(double amount, Account fromAccount, Account toAccount) {
        try {
            if (fromAccount.getBalance() < amount) {
                throw new InsufficientBalanceException("Insufficient balance in the account to transfer funds.");
            }
            fromAccount.withdraw(amount);
            toAccount.deposit(amount);
            System.out.println("Funds transferred successfully.");
        } catch (InsufficientBalanceException e) {
            System.out.println(e.getMessage());
        } catch (Exception e) {
            System.out.println("Transfer failed due to an unexpected error.");
        } finally {
            System.out.println("Transaction completed.");
        }
    }

    public static void main(String[] args) {
        Account account1 = new Account(1000);
        Account account2 = new Account(500);
        transferFunds(1200, account1, account2);
    }
}