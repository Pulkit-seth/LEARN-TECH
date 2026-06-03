 CREATE TABLE product_master ( product_no CHAR(6), descrip on VARCHAR2(25), profit_per NUMBER(5,2), unit NUMBER(5), sell_price NUMBER(8), cost_price NUMBER(8) );

 INSERT INTO product_master VALUES ('P00001', '1.44 floppies', 5, 100, 525, 500); 

INSERT INTO product_master VALUES ('P03453', 'Monitors', 6, 10, 12000, 11200);

 INSERT INTO product_master VALUES ('P06734', 'Mouse', 5, 20, 1050, 500); 

INSERT INTO product_master VALUES ('P07865', '1.22 floppies', 5, 100, 525, 500);

 INSERT INTO product_master VALUES ('P07868', 'Keyboards', 2, 10, 3150, 3050); 

INSERT INTO product_master VALUES ('P07885', 'CD Drive', 2.5, 10, 5250, 5100); 

INSERT INTO product_master VALUES ('P07965', '540 HDD', 4, 10, 8400, 8000); 

INSERT INTO product_master VALUES ('P07975', '1.44 Drive', 5, 10, 1050, 1000); 

INSERT INTO product_master VALUES ('P08865', '1.22 Drive', 5, 2, 1050, 1000);

 SELECT * FROM product_master;
