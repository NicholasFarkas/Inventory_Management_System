//
//  AutoPart.cpp
//  Inventory_Management_System
//
//  Created by Nicholas Farkas on 5/12/20.
//  Copyright © 2020 Nicholas Farkas. All rights reserved.
//

#include "AutoPart.hpp"

AutoPart::AutoPart(int productId, string productName, float productPrice, int reOrderQuanity):
Product(productId, productName, productPrice)
{
    _reOrderQuanity = reOrderQuanity;
}
