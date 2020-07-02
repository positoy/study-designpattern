import org.junit.jupiter.api.Test;
import strategy.Navigation;
import strategy.RouterAdder;
import strategy.RouterMultiplier;
import strategy.RouterSubtracter;

import static org.junit.jupiter.api.Assertions.*;

public class Strategy {
    @Test
    public void testRouter() {
        assertEquals(10, new RouterAdder().buildRoute(7,3));
        assertEquals(4, new RouterSubtracter().buildRoute(7,3));
        assertEquals(21, new RouterMultiplier().buildRoute(7,3));
    }

    @Test
    public void testStrategy() {
        Navigation navigation = new Navigation(new RouterAdder());
        assertEquals(20, navigation.buildRouter(15,5));

        navigation.setStrategy(new RouterSubtracter());
        assertEquals(10, navigation.buildRouter(15,5));

        navigation.setStrategy(new RouterMultiplier());
        assertEquals(75, navigation.buildRouter(15,5));
    }
}
