
CREATE DATABASE IF NOT EXISTS javapos
CHARACTER SET utf8mb4
COLLATE utf8mb4_unicode_ci;

USE javapos;

CREATE TABLE users (
    user_id INT PRIMARY KEY AUTO_INCREMENT,
    username VARCHAR(50) NOT NULL UNIQUE,
    password_hash CHAR(64) NOT NULL,
    full_name VARCHAR(120) NOT NULL,
    role ENUM('ADMIN','CASHIER') NOT NULL DEFAULT 'CASHIER',
    is_active TINYINT(1) NOT NULL DEFAULT 1,
    created_at TIMESTAMP NOT NULL DEFAULT CURRENT_TIMESTAMP
);

CREATE TABLE products (
    product_id INT PRIMARY KEY AUTO_INCREMENT,
    barcode VARCHAR(50) NOT NULL UNIQUE,
    product_name VARCHAR(150) NOT NULL,
    category VARCHAR(80) NOT NULL,
    price DECIMAL(10,2) NOT NULL,
    stock INT NOT NULL DEFAULT 0,
    reorder_level INT NOT NULL DEFAULT 5,
    is_active TINYINT(1) NOT NULL DEFAULT 1,
    created_at TIMESTAMP NOT NULL DEFAULT CURRENT_TIMESTAMP,

    CONSTRAINT chk_product_price CHECK (price >= 0),
    CONSTRAINT chk_product_stock CHECK (stock >= 0)
);

CREATE TABLE sales (
    sale_id INT PRIMARY KEY AUTO_INCREMENT,
    receipt_no VARCHAR(30) NOT NULL UNIQUE,
    user_id INT NOT NULL,
    subtotal DECIMAL(12,2) NOT NULL,
    discount DECIMAL(12,2) NOT NULL DEFAULT 0,
    tax DECIMAL(12,2) NOT NULL DEFAULT 0,
    grand_total DECIMAL(12,2) NOT NULL,
    payment DECIMAL(12,2) NOT NULL,
    change_amount DECIMAL(12,2) NOT NULL,
    sale_date TIMESTAMP NOT NULL DEFAULT CURRENT_TIMESTAMP,

    CONSTRAINT fk_sales_user
    FOREIGN KEY (user_id) REFERENCES users(user_id),

    CONSTRAINT chk_payment
    CHECK (payment >= grand_total)
);

CREATE TABLE sale_items (
    sale_item_id INT PRIMARY KEY AUTO_INCREMENT,
    sale_id INT NOT NULL,
    product_id INT NOT NULL,
    quantity INT NOT NULL,
    unit_price DECIMAL(10,2) NOT NULL,
    line_total DECIMAL(12,2) NOT NULL,

    CONSTRAINT fk_items_sale
    FOREIGN KEY (sale_id) REFERENCES sales(sale_id),

    CONSTRAINT fk_items_product
    FOREIGN KEY (product_id) REFERENCES products(product_id),

    CONSTRAINT chk_quantity CHECK (quantity > 0)
);

CREATE INDEX idx_products_name
ON products(product_name);

CREATE INDEX idx_sales_date
ON sales(sale_date);

CREATE INDEX idx_sale_items_sale
ON sale_items(sale_id);
