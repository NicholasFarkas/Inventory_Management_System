//
//  BulkLiquid.cpp
//  Inventory_Management_System
//
//  Created by Nicholas Farkas on 5/12/20.
//  Copyright © 2020 Nicholas Farkas. All rights reserved.
//

#include <iostream>
#include "BulkLiquid.hpp"

BulkLiquid::BulkLiquid(int productId, string productName, float productPrice, bool isHazmat, int reOrderQuanity):
Product(productId, productName, productPrice)
{
    _isHazmat = isHazmat;
    _reOrderQuanity = reOrderQuanity;
}
