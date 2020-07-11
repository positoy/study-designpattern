package structural;

import org.junit.jupiter.api.Test;
import structural.adapter.*;

public class Adapter {

    @Test
    public void testAdapter() {

        String json = "{ \"data\" : \"stockmarket data\" }";
        String xml = "<Stock><MarketData/></Stock>";

        StockMarketInterface stockImpl;

        stockImpl= new XMLStockMarketAdapter();
        stockImpl.drawChart(xml);

        stockImpl = new JSONStockMarketAdapter();
        stockImpl.drawChart(json);
    }
}
