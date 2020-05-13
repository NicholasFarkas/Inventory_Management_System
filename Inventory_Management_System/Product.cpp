//
//  Product.cpp
//  Inventory_Management_System
//
//  Created by Nicholas Farkas on 5/12/20.
//  Copyright © 2020 Nicholas Farkas. All rights reserved.
//

#include "Product.hpp"
#include <iostream>

Product::Product(int productId, string productName, float productPrice)
{
    _productId = productId;
    _productName = productName;
    _procductPrice = productPrice;
}
