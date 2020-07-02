package behavioral.strategy;

public class RouterAdder implements RouterStrategy {
    @Override
    public int buildRoute(int locationA, int locationB) {
        return locationA + locationB;
    }
}
