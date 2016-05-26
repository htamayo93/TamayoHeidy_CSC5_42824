/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 * Created on May 25, 2016, 2:33 PM
 */

//System Libraries
#include <iostream>

//User Libraries
#include "ProductionWorker.h"
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {

    //Declare and initialize variables
    string name;
    int number;
    int hire;
    int shift;
    float pay;

    cin>>name;
    
    cin>>number;

    
    cin>>hire;
 
    
    cin>>shift;

    
    cin>>pay;
    ProductionWorker info(name,number,hire,shift,pay);
    cout<<info.getname()<<endl;
    cout<<info.gethired();
    
    
    //Exit Stage Right
    return 0;
}

