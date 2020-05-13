//
//  BulkLiquid.hpp
//  Inventory_Management_System
//
//  Created by Nicholas Farkas on 5/12/20.
//  Copyright © 2020 Nicholas Farkas. All rights reserved.
//

#ifndef BulkLiquid_hpp
#define BulkLiquid_hpp

#include <stdio.h>
#include <iostream>
#include "Product.hpp"

class BulkLiquid : public Product
{
private:
    bool _isHazmat;
    string _manufacture;
    int _reOrderQuanity;
public:
    BulkLiquid(int, string, float, bool, int);
};

#endif /* BulkLiquid_hpp */
