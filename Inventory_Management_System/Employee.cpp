//
//  Employee.cpp
//  Inventory_Management_System
//
//  Created by Nicholas Farkas on 5/12/20.
//  Copyright © 2020 Nicholas Farkas. All rights reserved.
//

#include "Employee.hpp"

Employee::Employee(int employeeID, string employeeName)
{
    _employeeID = employeeID;
}

Employee::Employee()
{
    
}

void Employee::setEmployeeID(int employeeID){_employeeID = employeeID;}

void Employee::setEmployeeName(string employeeName){_employeeName = employeeName;}
