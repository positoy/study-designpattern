package structural.adapter;

public class JSONStockMarketAdapter implements StockMarketInterface {

    JSONStockMarketService service = new JSONStockMarketService();

    @Override
    public void drawChart(String json) {
        service.drawNiceChart(json);
    }
}
