//
//  main.cpp
//  teacherproj
//
//  Created by Henrichsen, Cody on 7/26/16.
//  Copyright © 2016 Henrichsen, Cody. All rights reserved.
//

#include <iostream>
#include <string>
#include "Sandwich.h"

using namespace std;

int main()
{
    Sandwich mySandwich;
    cout << mySandwich.getName() <<endl;
    cout << "Let's rename my sandwich" << endl;
    cout << "Type in a new name" << endl;
    string tempName;
//    cin >> tempName;
    getline(cin, tempName);
    mySandwich.setName(tempName);
    cout << "The new name is: " << mySandwich.getName() << endl;    
    return 0;

}
