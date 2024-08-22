




// Function to collect info from form



function Info() {

// Random Number Generator 



var month = Math.floor(Math.random() * 12) + 1;

var day = Math.floor(Math.random() * 31) + 1;

var year = Math.floor(Math.random() * 23) + 29;

var ordernumber = Math.floor(Math.random() * 200) + 1;

var warrantynumber = Math.floor(Math.random() * 200) + 1;

// Declaring our variables

var customername;
var Address;
var number;
var item;
var city;
var state;
var quantity;
var warrantytype;
var complaintinfo;
var complaintdate;

customername = document.getElementById("Names").value
Address = document.getElementById("Location").value
city = document.getElementById("place").value
number = document.getElementById("phone").value
item = document.getElementById("object").value

complaintdate = document.getElementById("Date").value

quantity = document.getElementById("many").value


state = document.getElementById("State").value


complaintinfo = document.getElementById("Message").value


alert(customername + Address + city + number + item + quantity + state + complaintdate); // Information from form


warrantytype = window.prompt("Enter Warranty Type"); // Decide warranty type

if(warrantytype == "Express"){

    alert("Thank you: Will be processing your maintenance date soon");

}else if(warrantytype == "Implied"){

    alert("Thank you: Please wait");

}

else


{
    alert("Warranty Not vaild: try again");

    do{

        warrantytype = window.prompt("Enter the Warranty Type again: Express or Implied");



    }while(warrantytype != "Express" && warrantytype != "Implied");

}

alert("Complaint information: " + complaintinfo);




// Processing Complaint date and maintenance date

alert("We will be now processing your information so far");

// Summary of customer information

document.write("Summary of Information you entered: " + "WarrantyType: " + warrantytype );
document.write(" Complaint Information: " + complaintinfo);
document.write(" Address " + Address );
document.write(" City: " + city);
document.write(" Customer Name: " + customername + ":");
document.write(" Phone Number: " + number);
document.write(" Item Type: " + item);
document.write(" State: " + state);
document.write(" Complaint date: " + complaintdate);



document.write(" Order Number: " + ordernumber  + " Warranty Number: " + warrantynumber);

document.write(" Your Maintenance date: ");

document.write(  +  month + "/" + day + "/" + year);









}











