//
//  AutoPart.hpp
//  Inventory_Management_System
//
//  Created by Nicholas Farkas on 5/12/20.
//  Copyright © 2020 Nicholas Farkas. All rights reserved.
//

#ifndef AutoPart_hpp
#define AutoPart_hpp

#include <stdio.h>
#include <set>
#include <iostream>
#include "Product.hpp"

class AutoPart : public Product
{
private:
    string _manufacture;
    set<string> _compatableVINs;
    int reOrderQuanity;
public:
    set<string> getVINs(){return _compatableVINs;}
    string getManufacture(){return _manufacture;}
};

#endif /* AutoPart_hpp */
