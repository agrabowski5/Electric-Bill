//
//  main.cpp
//  Project 2
//
//  Created by Andrew Grabowski on 1/16/16.
//  Copyright © 2016 Andrew Grabowski. All rights reserved.
//

#include <iostream>   //general call of iostream
#include <string>    // allows the use of the string class
using namespace std; // uses namespace std


int main()
{                               //declaration of variables
    float hours;
    string customer;
    string type;
    string Residential;
    string Business;
    float price;
    
    
    
                            //gathering input
    cout << "Customer Name: ";
    getline(cin, customer); //retrieves string with spaces unlike cin
    
    if (customer == "")   //This checks for an empty string
    {
        cout << "---\n";
        cout << "You must enter a customer name.\n";
        return (0);
    }
    
    cout << "Energy Used (in kilowatt hours): ";
    cin >> hours;
    
    if (hours < 0) //This is for error reporting of negative number, which also ends program.
    {
        cout << "---\n";
        cout << "The energy usage reading must be nonnegative."<< endl;
        return(0);
    }
    
    cout << "Customer Type: ";
    cin >> type;
    
    cout << "---" << endl; //This formats the response with --- required
   
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint); //ensures correct formatting of answer price
    cout.precision(2);

    
    
    if (type == "Residential") //If statement breaks the pricing scale into Residential/ Business
    {
        if (hours <= 10)
        {
            price = (hours * 4.50 + 14.95);
            cout << "The bill for " << customer << " is $" << price << endl;
            
        }
        else if (hours > 10 && hours <= 20)
        {
            price = (59.95 + (hours - 10)*9);
            cout << "The bill for " << customer << " is $" << price << endl; //this is general form of return
        
        }
        else  
        {
            price = (149.95 + (hours - 20)*15);
            cout << "The bill for " << customer << " is $" << price << endl;
        }
    }
        
    
        
    else if (type == "Business") // This is the opening if statement if the type is business
    {
        if (hours <= 10)
        {
            price = (7.50 * hours + 19.95);
            cout << "The bill for " << customer << " is $" << price << endl;
        }
        else if (hours > 10 && hours <= 20)
        {
            price = (94.95 + (hours- 10)*15);
            cout << "The bill for " << customer << " is $" << price << endl;
        }
        else
        {
            price = (244.95 + (hours - 20)*20);
            cout << "The bill for " << customer << " is $" << price << endl;
            
        }
    }
    
    else
    {
        cout << "The customer type is not valid.\n"; //If Residential/ Business are not entered,error is cout
    }
        
    
    return (0);  // ends program

    }
