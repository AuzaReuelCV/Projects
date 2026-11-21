/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

package model;

public class Product {

    private int productId;
    private String barcode;
    private String productName;
    private String category;
    private double price;
    private int stock;

    public Product() { }

    public Product(int id, String barcode, String name,
                   String category, double price, int stock) {

        this.productId = id;
        this.barcode = barcode;
        this.productName = name;
        this.category = category;
        this.price = price;
        this.stock = stock;
    }

    public int getProductId() {
        return productId;
    }

    public void setProductId(int v) {
        productId = v;
    }

    public String getBarcode() {
        return barcode;
    }

    public void setBarcode(String v) {
        barcode = v;
    }

    public String getProductName() {
        return productName;
    }

    public void setProductName(String v) {
        productName = v;
    }

    public String getCategory() {
        return category;
    }

    public void setCategory(String v) {
        category = v;
    }

    public double getPrice() {
        return price;
    }

    public void setPrice(double v) {
        price = v;
    }

    public int getStock() {
        return stock;
    }

    public void setStock(int v) {
        stock = v;
    }
}

