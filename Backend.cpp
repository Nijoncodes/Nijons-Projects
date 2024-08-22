
#include <cstdlib>
#include <iostream>
#include <string>
#include <array>

using namespace std;


// Passing Array information to be processed through user defined function

void InformationProcess(string customer1[10], int size, string customer2[10], int check, int warrantynumber, int ordernumber, int warantynumber2, int ordernumber2){ 

    // Information displayed by iterating through array using for loop

for(int h = 0; h< check; h++){


    cout<<customer2[h] <<endl;

}

cout<<"Customer name " << customer2[0] <<endl;
cout<<"Complaint date: " << customer2[7] <<endl;
cout<<"Complaint info: " << customer2[8] <<endl;
cout<<"Item Quantity: " << customer2[7] <<endl;
cout<<"Warranty Number: " << warantynumber2 <<endl;
cout<<"Order Number: "  << ordernumber2 <<endl;


for(int i = 0; i < size; i++){ 


    cout<< customer1[i] <<endl;

    
}


cout <<"Customer name " << customer1[0] <<endl;
cout<<"Complaint information: " << customer1[8] <<endl;
cout<<"Complaint date: " << customer1[7] <<endl;
cout<<"Item Quantity " << customer1[6] <<endl;
cout<<"Warranty Number " << warrantynumber <<endl;
cout<<"Order Number " << ordernumber <<endl;


// Processing your warranty type to decide how to get your replacement. if customer has implied or express warranty

if(customer1[9] == "Express"){

    cout<< customer1[0] << ":" << "Customer should get a guranteed replacement" <<endl;

}else if(customer1[9] == "Implied"){

     cout<< customer1[0] << ":" << "A Complaint should be made to the court if the manufacturer does not replace the item"<<endl;
}

if(customer2[9] == "Express"){
 
    cout<< customer2[0] << ":" << "Customer Should get a guranteed replacement" <<endl;

}else if(customer2[9] == "Implied"){

    cout<< customer2[0] << ":" << "Complaint should be made to the court if the manufacturer does not replace the item "<<endl;

}

}



int main() {


     // Receiving Array of information that has been entered through the GUI of two customers

    string customer1[10] = {"Nijon", "8800 Cedar Wood Dr", "Orland Park", "Illinois", "773-544-5789", "Chair", "5", "7/31/23", "Broken", "Express"};
    string customer2[10] = {"Shane", "East 55 ST", "Chicago", "Illinois", "773-322-9668", "Table", "1", "8/1/23", "Cracked", "Implied"};


    // Declare some variables using random number generator 

    srand(time(0)); // Random number Generator

    int warrantynumber = 1 + rand() % 100;
    int ordernumber =  1 + rand() % 100;
    int warrantynumber2 = 1 + rand() % 100;
    int ordernumber2 = 1 + rand() % 100;

    int waitime = 1 + rand() % 10;
    int waitime2 = 1 + rand() % 10;


    InformationProcess(customer1, 10, customer2, 10, warrantynumber, ordernumber, warrantynumber2, ordernumber2);


    // Deciding the wait on maintencance based off the order number 

    cout << "Order Numbers as of right now: "  << ordernumber   << " : "   << ordernumber2 << endl;

    if(ordernumber2 < 50){

        cout << "Their are " << waitime  << "Customers behind this order number" <<endl;

    
    }else if(ordernumber2 > 50){

        
        cout<< "Their are " << waitime  << " Customers behind this order number" <<endl;



    }

    
    if(ordernumber > 50){


        cout<<" Their are " << waitime2 << " Customers behind this order number " <<endl;


    }else if(ordernumber < 50){


        cout<<" Their are " << waitime2 << " Customers behind this order number " <<endl;
    }






    


















}