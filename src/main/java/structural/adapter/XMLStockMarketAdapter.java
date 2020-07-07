package structural.adapter;

public class XMLStockMarketAdapter implements StockMarketInterface {

    XMLStockMarketService service = new XMLStockMarketService();

    @Override
    public void drawChart(String xml) {
        service.drawAwesomeChart(xml);
    }
}
