//
//  Product.hpp
//  Inventory_Management_System
//
//  Created by Nicholas Farkas on 5/12/20.
//  Copyright © 2020 Nicholas Farkas. All rights reserved.
//

#ifndef Product_hpp
#define Product_hpp

#include <stdio.h>
#include <iostream>

using namespace std;

class Product
{
protected:
    int _productId;
    string _productName;
    string _productDescription;
    float _procductPrice;
public:
    virtual void printInformation();
    virtual void reOrder();
    
};

#endif /* Product_hpp */
