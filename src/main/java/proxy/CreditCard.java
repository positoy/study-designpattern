package proxy;

public class CreditCard implements Payment {

    Payment cash;

    public CreditCard(Payment cash) {
        this.cash = cash;
    }

    public int pay(int amount) {
        if (amount < 100)
            return cash.pay(amount);

        System.out.println("paid " + amount + " with CreditCard");
        return -amount;
    }
}
