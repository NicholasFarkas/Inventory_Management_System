//
//  Service.cpp
//  Inventory_Management_System
//
//  Created by Nicholas Farkas on 5/12/20.
//  Copyright © 2020 Nicholas Farkas. All rights reserved.
//

#include"Service.hpp"

Service::Service(int productId, string productName, float productPrice, float timeOfService):
Product(productId, productName, productPrice)
{
    _timeOfService = timeOfService;
}
