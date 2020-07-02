package proxy;

public class Cash implements Payment {

    int balance;

    public Cash(int balance) {
        this.balance = balance;
    }

    public int pay(int amount) {
        if (amount < balance) {
            System.out.println("paid " + amount + " with Cash.");
            balance -= amount;
        } else {
            System.out.println("Cannot pay. balance is not enough.");
        }
        return balance;
    }
}
