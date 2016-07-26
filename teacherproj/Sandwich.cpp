//
//  Sandwich.cpp
//  teacherproj
//
//  Created by Henrichsen, Cody on 7/26/16.
//  Copyright © 2016 Henrichsen, Cody. All rights reserved.
//

#include <stdio.h>
#include "Sandwich.h"

//Constructor


Sandwich :: Sandwich()
{
    
    this->breadCount = 2;
    this->filling = "Cheese";
    this->name = "Grilled Cheese";

}

//end Constructors

int Sandwich :: getBreadCount()
{
    
    return breadCount;
    
}

void Sandwich :: setBreadCount(int breadCount)
{
    this->breadCount = breadCount;
}

string Sandwich :: getFilling()
{
    return filling;

}

void Sandwich :: setFilling(string filling)
{
    this->filling = filling;
}

string Sandwich :: getName()
{
    return name;
}

void Sandwich :: setName(string name)
{
    this->name = name;
}