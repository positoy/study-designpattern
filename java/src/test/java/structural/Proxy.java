package structural;

import org.junit.jupiter.api.Test;
import static org.junit.jupiter.api.Assertions.*;
import structural.proxy.Cash;
import structural.proxy.CreditCard;

public class Proxy {

    @Test
    public void testCash() {
        assertEquals(900, new Cash(1000).pay(100));
        assertEquals(1000, new Cash(1000).pay(1100));
    }

    @Test
    public void testCreditCard() {
        assertEquals(10, new CreditCard(new Cash(100)).pay(90));
        assertEquals(-1000, new CreditCard(new Cash(100)).pay(1000));
    }
}
