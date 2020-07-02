package behavioral.strategy;

public class RouterSubtracter implements RouterStrategy {
    @Override
    public int buildRoute(int locationA, int locationB) {
        return locationA - locationB;
    }
}
