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
    this->filling = "peanut butter and sriracha";
    this->name = "Spicy PB";

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