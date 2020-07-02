package strategy;

public class RouterMultiplier implements RouterStrategy {
    @Override
    public int buildRoute(int locationA, int locationB) {
        return locationA * locationB;
    }
}
