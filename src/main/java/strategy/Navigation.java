package strategy;

public class Navigation {

    private RouterStrategy strategy;

    public Navigation(RouterStrategy strategy) {
        this.strategy = strategy;
    }

    public void setStrategy(RouterStrategy strategy) {
        this.strategy = strategy;
    }

    public int buildRouter(int locationA, int locationB) {
        return strategy.buildRoute(locationA, locationB);
    }
}
