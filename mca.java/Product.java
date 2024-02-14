public class Product {
    private double price;

    public Product(double price) {
        this.price = price;
    }

    public double getPrice() {
        return price;
    }

    public static Product comparePrices(Product product1, Product product2) {
        return product1.getPrice() > product2.getPrice() ? product1 : product2;
    }

    public static void main(String[] args) {
        Product product1 = new Product(10.5);
        Product product2 = new Product(15.75);

        Product largerProduct = Product.comparePrices(product1, product2);
        System.out.println("The product with the larger price is: " + largerProduct.getPrice());
    }
}
