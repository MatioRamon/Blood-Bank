#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <conio.h>
#include <string>
#include <ctime>

using namespace std;

int main ()
{

// variables 

char ynn, yn1, yn2,yn3,yn4,yn5, gender;                                                // Yes or No - 1,2,3, and 4 selection. Gender and Mode of Payment.
char  creditcnumber [18], gcashn [11];                                                  // Credit Card Number, Gcash Number and contact number.
int option, age, record = 1, record2 = 1, record3 = 1;                                  // Option for Transaction, Age, and Records.
string BTYPE ,cname, addr, gendername, contnumber;                                      // Blood type selection, Name input, address input, and gender output.
string MDP1,firstoption;                                                                // Mode of payment Final, first option(registration and existing)
int accountnumnew, max, referencen, max2;                                               // Account number generator and reference number                                          //
float AMOUNT, TOTAL , ATYPEO, ATYPEA, ATYPEB, ATYPEAB;                                  // Amount for blood(bags) price and Total amount to be paid.
float NOL = 0, NOLO = 0, NOLA = 0, NOLB = 0, NOLAB = 0, NOLTOTAL = 0;                   //  Number of liters needed from the user and total number of liters for each blood type. 
float ONOL = 0, ANOL = 0, BNOL = 0, ABNOL = 0;                                          //  Blood bank available liters. 
float FONOL = 50, FANOL = 40, FBNOL = 45, FABNOL = 30;                                  //  Blood bank available liters. 


// date, time and account number generator variables.
max = 3000;
max2= 200;
time_t now;
struct tm nowLocal;
now = time(NULL);
nowLocal =*localtime(&now);

// Old User Variables /  Existing Customer.
int acountnumold;
string contnumberold;
string genderold;
string cnameold, addrold;
int ageold;
string finalcontnum;



// While Loop Introduction.
   ynn = 'y';
     while ( ynn == 'y' || ynn =='Y')
         {

// Welcome Menu and Selection for Existing customers and Non-existing.            
    cout << "============================================================================================" << endl;
    cout << endl;
    cout << endl;
    cout << setw(55) << "Red Cross Blood Bank" << endl;
    cout << endl;
    cout << setw(50) <<"Cebu City" << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << setw(50) << " WELCOME " << endl;
    cout << endl; 
    cout << endl;
    cout << setw(24) << "Registration:  " << endl;
    cout << "         ----------------------------------------------------------------------------- " << endl;
    cout << setw(45) << "|  ( R ) Register for new Account | " << " |  ( E ) If you have Existing Account  |" << endl;
    cout << "         ----------------------------------------------------------------------------- " << endl;
    cout << endl;
    cout << endl;
    cout << "Please Select: "; cin >> firstoption;
    cout << endl;
    cout << endl;
    
// Registration for customer without existing account.
  if (firstoption == "R" || firstoption == "r"){
// account number auto generated/ name, age, address, gender, and contact number - user input
    cout << "============================================================================================" << endl;
    cout << endl;
    cout << endl;
    cout << setw(55) << "Red Cross Blood Bank" << endl;
    cout << endl;
    cout << setw(50) <<"Cebu City" << endl;
    cout << endl;
    cout << endl;
    srand (time (0));
    accountnumnew =  (rand () % max) + 1050;
    cout << "Account Number: " << accountnumnew << endl;
    cout << endl;
    cin.ignore();
    cout << "Customer's Complete Name : "; getline(cin , cname);
    cout << endl;
    cout << "Age: "; cin >> age;
    cout << endl;
    cout << "Gender: ";  cin >> gender;
    switch (gender){
    case 'M':
    case 'm':
    gendername = "Male";
    cout << endl;
    break;
    case 'F' :
    case 'f' :
    gendername="Female";
    cout << endl;
    break;
    default:
    cout << "Others" << endl; }
    cin.ignore();
    cout << "Address : "; getline ( cin, addr );
    cout << endl; 
    cout << "Contact Number : "; cin >> contnumber ; 
    cout << endl;
    cout << endl;
    cout << "============================================================================================" << endl;
    
// Transaction selection (buy and sell)
    cout << endl;
    cout << setw(51) << " Available Transaction: " << endl;
    cout << "                           ----------------------------------- " << endl;
    cout << setw(63) << "|  ( 1. ) - Sell  Blood per liter | " << endl;
    cout << setw(63) << "|                                 | " << endl;
    cout << setw(63) << "|  ( 2. ) - Buy Blood per liter   | " << endl;
    cout << "                           ----------------------------------- " << endl;
    cout << endl;
    cout << endl;
    cout << setw(53) << "Select transaction: "; cin >> option; 
    cout << endl;
    cout << endl;
    cout << "============================================================================================" << endl;
    cout << endl;

// Transaction selected(Sell)
if (option == 1 )
        {
               yn1='y';
            while ( yn1 =='y' || yn1 =='Y')
            {
            cout << endl;
            cout << setw(56)<< " 1. - Sell  Blood per liter  " << endl;
            cout << "                            ..................................."<< endl;
            cout << setw(63)<< " |                                 |" << endl;
            cout << setw(63)<< " | Blood Type O - P500 per liter   |" << endl;
            cout << setw(63)<< " |                                 |" << endl;
            cout << setw(63)<< " | Blood Type A - P1000 per liter  |" << endl;
            cout << setw(63)<< " |                                 |" << endl;
            cout << setw(63)<< "| Blood Type B - P1000 per liter  |" << endl;
            cout << setw(63)<< " |                                 |" << endl;
            cout << setw(63)<< "| Blood Type AB - P2000 per liter |" << endl;
            cout << setw(63)<< " |                                 |" << endl;
            cout << "                            ..................................."<< endl;
            cout << endl;
            cout << endl;
            cout << "Input your Blood Type:  " ; cin >> BTYPE;
            cout << endl;
            cout << "Input Number of Liters:  " ; cin >> NOL;
            cout << endl;
            cout << endl;
            cout << "============================================================================================" << endl;

// Transaction selection option 1 (Blood Type Selection)
// Blood Type O
                    if( BTYPE =="O" || BTYPE == "o" )
                         {   
                    AMOUNT = NOL * 500 ;
                    cout << endl;
                    cout << "Blood Type Selected: " << BTYPE << "   Number of Liters:  "  << NOL << endl;
                    ATYPEO = AMOUNT;
                    NOLO = NOL;
                    cout << endl;
                    cout << "Total Amount: " << AMOUNT << endl;                    
                    cout << endl;
                    cout << endl;}
// Blood Type A
                    else if( BTYPE =="A" || BTYPE == "a" )
                         {   
                    AMOUNT = NOL * 1000 ;
                    cout << endl;
                    cout << "Blood Type Selected: " << BTYPE << "   Number of Liters:  "  << NOL << endl;
                    ATYPEA = AMOUNT;
                    NOLA = NOL;
                    cout << endl;
                    cout << "Total Amount: " << AMOUNT << endl;                    
                    cout << "" << endl;}
// Blood Type B
                    else if( BTYPE =="B" || BTYPE == "b" )
                        {   
                    AMOUNT = NOL * 1000 ;
                    cout << endl;
                    cout << "Blood Type Selected: " << BTYPE << "   Number of Liters:  "  << NOL << endl;
                    ATYPEB = AMOUNT;
                    NOLB = NOL;
                    cout << endl;
                    cout << "Total Amount: " << AMOUNT << endl;                    
                    cout << endl;}
// Blood Type AB                    
                    else if( BTYPE =="AB" || BTYPE == "ab" )
                            {   
                    AMOUNT = NOL * 2000 ;
                    cout << endl;
                    cout << "Blood Type Selected: " << BTYPE << "   Number of Liters:  "  << NOL << endl;
                    ATYPEAB = AMOUNT;
                    NOLAB = NOL;
                    cout << endl;
                    cout << "Total Amount: " << AMOUNT << endl;                    
                    cout << endl;}
                    else{
                    cout << endl;
                    cout << "Invalid Transaction!" << endl;
                    cout << endl;
                    cout << endl;}

// Mode of Payment Selcetion.   
                    cout << setw (45) << "Mode of Payment: " << endl;
                    cout <<"                            ----------------------------------"<< endl;
                    cout << setw (63) << "|     Cash     |  |     Gcash    | " << endl;
                    cout <<"                            ----------------------------------"<< endl;
                    cout << endl;
                    cout << "Please Input Mode of Paympent: "; cin >> MDP1;
                    cout << endl;
 // Mode of Payment Selcetion (cash)                    
                     if (MDP1 == "cash" || MDP1 == "CASH" || MDP1 == "Cash")
                        {
                    cout << endl; 
                    cout << endl;
                    cout << "Mode of payment Selected - Cash!" << endl;
                    referencen =  (rand () % max2) + 0100;
                    cout << "Reference Number: " << referencen << endl;
                    cout << endl;
// Mode of Payment Selcetion (Credit Card)  
                     }else if (MDP1 == "gcash" || MDP1 == "Gcash" || MDP1 == "GCASH")
                        {
                    cout << endl;
                     cout << endl;
                    cout << "Mode of payment Selected - Gcash" << endl;
                    cout << endl;   
                    cout << "Please Enter the 11 Digit Number of your Gcash!" << endl;
                    cin >> gcashn;
                    referencen =  (rand () % max2) + 11101;
                    cout << "Reference Number: " << referencen << endl;
                    cout << endl;}
                     else{
                    cout << endl;
                    cout << "Invalid Transaction!" << endl;
                    cout << endl;}
                    


// Display of final transaction details for option 1 (Selling of Blood per liter without existing customer records).
                cout << "============================================================================================" << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << "                    .................................................." << endl;
                cout << endl;
                cout << setw(53)<< "CUSTOMER DETAILS" << endl;
                cout << endl;
                cout << "                   Date: " << nowLocal.tm_mday << "/" << nowLocal.tm_mon+1 << "/" << nowLocal.tm_year+1900 << "         Time: " << nowLocal.tm_hour << " : " << nowLocal.tm_min << endl;
                cin.get();
                cout << endl;
                cout << "                   Account Number: " << accountnumnew << endl;
                cout << "                   Name:  " << cname << endl;
                cout << "                   Age:  "  << age << endl;
                cout << "                   Gender:  " << gendername << endl;
                cout << setw(30)<< "                   Address :  " << addr <<  endl;
                cout << "                   Contact Number :  " << contnumber << endl;
                cout << endl;
                                             TOTAL = ATYPEO + ATYPEA + ATYPEB + ATYPEAB;
                                             NOLTOTAL = NOLO + NOLA + NOLB + NOLAB;
                cout << "                              Blood Type O: "<< fixed << setprecision(2) << ATYPEO << endl;
                cout << "                                         A: " << fixed << setprecision(2) << ATYPEA << endl;
                cout << "                                         B: " << fixed << setprecision(2) << ATYPEB << endl;
                cout << "                                        AB: " << fixed << setprecision(2) << ATYPEAB << endl;
                cout << endl;
                cout << "                        Number of Liters O: " << fixed << setprecision(2) << NOLO <<  endl;
                cout << "                                         A: " << fixed << setprecision(2) << NOLA <<  endl;
                cout << "                                         B: " << fixed << setprecision(2) << NOLB <<  endl;
                cout << "                                        AB: " << fixed << setprecision(2) << NOLAB << endl;
                cout << "                    -------------------------------------------------" <<endl;
                cout << "                       Total No. of Liters: " << fixed << setprecision(2) << NOLTOTAL << endl;
                cout << endl;
                cout << "                              Total Amount: P" << fixed << setprecision(2) << TOTAL << endl;
                cout << endl;
                cout << "                       Payment:  " << MDP1 << " " << gcashn << endl; 
                cout << "                       Reference Number: " << referencen << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << "                          Proceed to counter number 2 please!" << endl;
                cout << endl;
                cout << endl;
                cout << setw(55) << "Number of Transaction: " << record++ << endl;
                cout << "                    .................................................." << endl;
                cout << endl;
                cout << endl;
                cout <<"                  Would you like to sell another Blood Type? <Y/N> : "; cin >> yn1;
                cout << endl;} 


                
 // Transaction selection option 2 (Blood Type Selection)
// Blood Type O               
        }else if ( option == 2 )

       {   
            yn2 = 'y';
            while ( yn2 == 'y' || yn2 =='Y')
            {
           cout << "============================================================================================" << endl;
            cout << endl;
            cout << setw(56)<< " 2. - Buy blood per liter  " << endl;
            cout << "              ............................................................"<< endl;
            cout <<  endl;
            cout << setw(68)<< "    Blood Type O - P800 per liter - [Available Liters: " << FONOL << "]  " << endl;
            cout << "                                                 [Remaining Liters: " << ONOL << "]    " << endl;
            cout <<  endl;
            cout << setw(68)<< "    Blood Type A - P1800 per liter - [Available Liters: " << FANOL << "] " << endl;
            cout << "                                                 [Remaining Liters: " << ANOL << "]    " << endl;
            cout <<  endl;
            cout << setw(68)<< "    Blood Type B - P1800 per liter - [Available Liters: " << FBNOL << "]" << endl;
            cout << "                                                 [Remaining Liters: " <<  BNOL << "] "<< endl;
            cout <<  endl;
            cout << setw(69)<< "    Blood Type AB - P2800 per liter - [Available Liters: " << FABNOL << "] " << endl;
            cout << "                                                  [Remaining Liters: " << ABNOL << "]   " << endl;
            cout << endl;
            cout << "              ............................................................"<< endl;
            cout << endl;
            cout << endl;
            cout << "Input your Blood Type:  " ; cin >> BTYPE;
            cout << "" << endl;
            cout << "Input Number of Liters:  " ; cin >> NOL;
            cout << endl;
            cout << endl;
            cout << "============================================================================================" << endl;


// Transaction selection option 2 (Buy)
// Blood Type O         
                    if( BTYPE =="O" || BTYPE == "o" && NOL == 50 )
                        {   
                    AMOUNT = NOL * 800 ;
                    ONOL = FONOL - NOL;
                    cout << endl;
                    cout << "Blood Type Selected: " << BTYPE << "   Number of Liters:  "  << NOL << endl;
                    ATYPEO = AMOUNT;
                    NOLO = NOL;
                    cout << endl;
                    cout << "Total Amount: " << AMOUNT << endl;                    
                    cout << endl;}
// Blood Type A  
                    else if( BTYPE =="A" || BTYPE == "a"  && NOL == 40 )
                         {   
                    AMOUNT = NOL * 1800 ;
                    ANOL = FANOL - NOL;
                    cout << endl;
                    cout << "Blood Type Selected: " << BTYPE << "   Number of Liters:  "  << NOL << endl;
                    ATYPEA = AMOUNT;
                    NOLA = NOL;
                    cout << endl;
                    cout << "Total Amount: " << AMOUNT << endl;                    
                    cout << endl;}
 // Blood Type B                    
                    else if( BTYPE =="B" || BTYPE == "b" && NOL == 45  )
                        {   
                    AMOUNT = NOL * 1800 ;
                    BNOL = FBNOL - NOL;
                    cout << endl;
                    cout << "Blood Type Selected: " << BTYPE << "   Number of Liters:  "  << NOL << endl;
                    ATYPEB = AMOUNT;
                    NOLB = NOL;
                    cout << endl;
                    cout << "Total Amount: " << AMOUNT << endl;                    
                    cout << endl;}
// Blood Type AB                     
                    else if( BTYPE =="AB" || BTYPE == "ab" && NOL == 30)
                            {   
                    AMOUNT = NOL * 2800 ;
                    ABNOL = FABNOL - NOL;
                    cout << endl;
                    cout << "Blood Type Selected: " << BTYPE << "   Number of Liters:  "  << NOL << endl;
                    ATYPEAB = AMOUNT;
                    NOLAB = NOL;
                    cout << endl;
                    cout << "Total Amount: " << AMOUNT << endl;                    
                    cout << endl;}
                    else{
                    cout << endl;
                    cout << endl;
                    cout << setw(57) << "INVALID AMOUNT OF LITERS!" << endl;
                    cout << endl;
                    cout << endl;
                    cout << "============================================================================================" << endl;}


    
// Mode of Payment Selcetion.  
                    cout << endl;
                    cout << endl;
                    cout << setw (45) << "Mode of Payment: " << endl;
                    cout <<"                            ----------------------------------"<< endl;
                    cout << setw (63) << "|   Cash   |  |    Credit/ CC    | " << endl;
                    cout <<"                            ----------------------------------"<< endl;
                    cout << endl;
                    cout << "Please Input Mode of Paympent: "; cin >> MDP1;
                    cout << endl;
// Mode of Payment Selcetion (cash) 
                     if (MDP1 == "CASH" || MDP1 == "cash" || MDP1 == "Cash")
                        {
                    cout << endl; 
                    cout << endl;
                    cout << "Mode of payment Selected - Cash!" << endl;
                    referencen =  (rand () % max2) + 0100;
                    cout << "Reference Number: " << referencen << endl;
                    cout << endl;}
// Mode of Payment Selcetion (Gcash) 
                    else if (MDP1 == "Credit" || MDP1 == "CREDIT" || MDP1 == "credit" || MDP1 == "CC"|| MDP1 == "cc" )
                        {
                    cout << endl;
                    cout << endl;
                    cout << "Mode of payment Selected - Credit Card" << endl;
                    cout << endl;   
                    cout << "Please Enter the 16 Digit Number of your Credit Card!" << endl;
                    cin >> creditcnumber;
                    referencen =  (rand () % max2) + 11101;
                    cout << "Reference Number: " << referencen << endl;
                    cout << endl;}
                    else if (MDP1 == "invalid" || "INVALID")
                    {
                    cout <<"                  Would you like to Select another Blood Type? <Y/N> : "; cin >> yn2;
                    }
                    else{
                    cout << endl;
                    cout << "Invalid Transaction!" << endl;
                    cout << endl;}

// Display of final transaction details for option 2 (Buying of Blood per liter without existing customer records).
                 cout << "============================================================================================" << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << "                    ................................................" << endl;
                cout << "" << endl;
                cout << setw(53)<< "CUSTOMER DETAILS" << endl;
                cout << endl;
                cout << "                    Date: " << nowLocal.tm_mday << "/" << nowLocal.tm_mon+1 << "/" << nowLocal.tm_year+1900 << "         Time: " << nowLocal.tm_hour << " : " << nowLocal.tm_min << endl;
                cin.get();
                cout << endl;
                cout << "                    Account Number: " << accountnumnew << endl;
                cout << "                    Name:  " << cname << endl;
                cout << "                    Age:  "  << age << endl;
                cout << "                    Gender:  " << gendername << endl;
                cout << setw(30)<< "                    Address :  " << addr <<  endl;
                cout << "                    Contact Number :  " << contnumber << endl;
                cout << endl;
                                                           TOTAL = ATYPEO + ATYPEA + ATYPEB + ATYPEAB;
                                             NOLTOTAL = NOLO + NOLA + NOLB + NOLAB;
                cout << "                              Blood Type O: "<< fixed << setprecision(2) << ATYPEO << endl;
                cout << "                                         A: " << fixed << setprecision(2) << ATYPEA << endl;
                cout << "                                         B: " << fixed << setprecision(2) << ATYPEB << endl;
                cout << "                                        AB: " << fixed << setprecision(2) << ATYPEAB << endl;
                cout << endl;
                cout << "                        Number of Liters O: " << fixed << setprecision(2) << NOLO <<  endl;
                cout << "                                         A: " << fixed << setprecision(2) << NOLA <<  endl;
                cout << "                                         B: " << fixed << setprecision(2) << NOLB <<  endl;
                cout << "                                        AB: " << fixed << setprecision(2) << NOLAB << endl;
                cout << "                    -------------------------------------------------" <<endl;
                cout << "                       Total No. of Liters: " << fixed << setprecision(2) << NOLTOTAL << endl;
                cout << endl;
                cout << "                              Total Amount: P" << fixed << setprecision(2) << TOTAL << endl;
                cout << endl;
                cout << "                       Payment:  " << MDP1 << " " << creditcnumber << endl; 
                cout << "                       Reference Number: " << referencen << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << "                          Proceed to counter number 2 please!" << endl;
                cout << endl;
                cout << endl;
                cout << setw(55) << "Number of Transaction: " << record++ << endl;
                cout << "                    ................................................" << endl;
                cout << endl;
                cout << endl;
                cout <<"                  Would you like to Select another Blood Type? <Y/N> : "; cin >> yn2;
                cout << endl;} 
                 }else{
                cout << setw(60) << "NO Transaction Has been Selected" << endl; 
                cout << endl;
                cout << endl;}

//value resets
    AMOUNT = 0, TOTAL = 0, NOLTOTAL = 0;
    ATYPEO = 0, ATYPEA = 0, ATYPEB = 0, ATYPEAB = 0;
    NOL = 0, NOLO = 0, NOLA = 0, NOLB = 0,NOLAB = 0;

// record display and selection for another transaction
cout << setw(56) << "Number of Transaction: " << record3++ << endl;
cout << endl;
cout << endl;
cin.ignore();
cout << setw(58) << "Another Transaction? <Y/N>: "; cin >> ynn;
cin.ignore();
cout << "============================================================================================" << endl;




// Customer with existing account. (with complete data except for gcash and credit card numbers.)
  }else if (firstoption == "E" || firstoption == "e"){

acountnumold = 1450;
contnumberold = "09394585102";
genderold = "Female";
cnameold = "Lux Jinx", addrold = "Wildrift St. Guadalupe, Cebu City";
ageold = 27;
  
    cout << "============================================================================================" << endl;
    cout << endl;
    cout << endl;
    cout << setw(55) << "Red Cross Blood Bank" << endl;
    cout << endl;
    cout << setw(50) <<"Cebu City" << endl;
    cout << endl;
    cout << endl;
    cout << "Account Number: " << acountnumold << endl;
    cout << endl;
    cout << "Customer's Complete Name : " << cnameold << endl;
    cout << endl;
    cout << "Age: " << ageold << endl;
    cout << endl;
    cout << "Gender: " << genderold << endl;
    cout << endl;
    cout << "Address : " << addrold << endl;
    cout << endl;
    cout << "Contact Number : " << contnumberold << endl;
    cout << endl;
    cout << endl;
    cout << "============================================================================================" << endl;

// Transaction selection (buy and sell)
    cout << endl;
    cout << setw(51) << " Available Transaction: " << endl;
    cout << "                           ----------------------------------- " << endl;
    cout << setw(63) << "|  ( 1. ) - Sell  Blood per liter | " << endl;
    cout << setw(63) << "|                                 | " << endl;
    cout << setw(63) << "|  ( 2. ) - Buy Blood per liter   | " << endl;
    cout << "                           ----------------------------------- " << endl;
    cout << endl;
    cout << endl;
    cout << setw(53) << "Select transaction: "; cin >> option; 
    cout << endl;
    cout << endl;
    cout << "============================================================================================" << endl;
    cout << endl;

// Transaction selected(Sell)
if (option == 1 )
        {
               yn3='y';
            while ( yn3 =='y' || yn3 =='Y')
            {
            cout << endl;
            cout << setw(56)<< " 1. - Sell  Blood per liter  " << endl;
            cout << "                            ..................................."<< endl;
            cout << setw(63)<< " |                                 |" << endl;
            cout << setw(63)<< " | Blood Type O - P500 per liter   |" << endl;
            cout << setw(63)<< " |                                 |" << endl;
            cout << setw(63)<< " | Blood Type A - P1000 per liter  |" << endl;
            cout << setw(63)<< " |                                 |" << endl;
            cout << setw(63)<< "| Blood Type B - P1000 per liter  |" << endl;
            cout << setw(63)<< " |                                 |" << endl;
            cout << setw(63)<< "| Blood Type AB - P2000 per liter |" << endl;
            cout << setw(63)<< " |                                 |" << endl;
            cout << "                            ..................................."<< endl;
            cout << endl;
            cout << endl;
            cout << "Input your Blood Type:  " ; cin >> BTYPE;
            cout << endl;
            cout << "Input Number of Liters:  " ; cin >> NOL;
            cout << endl;
            cout << endl;
            cout << "============================================================================================" << endl;

// Transaction selection option 1 (Blood Type Selection)
// Blood Type O
                    if( BTYPE =="O" || BTYPE == "o" )
                         {   
                    AMOUNT = NOL * 500 ;
                    cout << endl;
                    cout << "Blood Type Selected: " << BTYPE << "   Number of Liters:  "  << NOL << endl;
                    ATYPEO = AMOUNT;
                    NOLO = NOL;
                    cout << endl;
                    cout << "Total Amount: " << AMOUNT << endl;                    
                    cout << endl;
                    cout << endl;}
// Blood Type A
                    else if( BTYPE =="A" || BTYPE == "a" )
                         {   
                    AMOUNT = NOL * 1000 ;
                    cout << endl;
                    cout << "Blood Type Selected: " << BTYPE << "   Number of Liters:  "  << NOL << endl;
                    ATYPEA = AMOUNT;
                    NOLA = NOL;
                    cout << endl;
                    cout << "Total Amount: " << AMOUNT << endl;                    
                    cout << "" << endl;}
// Blood Type B
                    else if( BTYPE =="B" || BTYPE == "b" )
                        {   
                    AMOUNT = NOL * 1000 ;
                    cout << endl;
                    cout << "Blood Type Selected: " << BTYPE << "   Number of Liters:  "  << NOL << endl;
                    ATYPEB = AMOUNT;
                    NOLB = NOL;
                    cout << endl;
                    cout << "Total Amount: " << AMOUNT << endl;                    
                    cout << endl;}
// Blood Type AB                    
                    else if( BTYPE =="AB" || BTYPE == "ab" )
                            {   
                    AMOUNT = NOL * 2000 ;
                    cout << endl;
                    cout << "Blood Type Selected: " << BTYPE << "   Number of Liters:  "  << NOL << endl;
                    ATYPEAB = AMOUNT;
                    NOLAB = NOL;
                    cout << endl;
                    cout << "Total Amount: " << AMOUNT << endl;                    
                    cout << endl;}
                    else{
                    cout << endl;
                    cout << "Invalid Transaction!" << endl;
                    cout << endl;
                    cout << endl;}

// Mode of Payment Selcetion.   
                    cout << setw (45) << "Mode of Payment: " << endl;
                    cout <<"                            ----------------------------------"<< endl;
                    cout << setw (63) << "|     Cash     |  |     Gcash    | " << endl;
                    cout <<"                            ----------------------------------"<< endl;
                    cout << endl;
                    cout << "Please Input Mode of Paympent: "; cin >> MDP1;
                    cout << endl;
 // Mode of Payment Selcetion (cash)                    
                     if (MDP1 == "cash" || MDP1 == "CASH")
                        {
                    cout << endl; 
                    cout << endl;
                    cout << "Mode of payment Selected - Cash!" << endl;
                     referencen =  (rand () % max2) + 100;
                    cout << "Reference Number: " << referencen << endl;
                    cout << endl;
// Mode of Payment Selcetion (Credit Card)  
                     }else if (MDP1 == "gcash" || MDP1 == "Gcash" || MDP1 == "GCASH")
                        {
                    cout << endl;
                     cout << endl;
                    cout << "Mode of payment Selected - Gcash" << endl;
                    cout << endl;   
                    cout << "Please Enter the 11 Digit Number of your Gcash!" << endl;
                    cin >> gcashn;
                    referencen =  (rand () % max2) + 11101;
                    cout << "Reference Number: " << referencen << endl;
                    cout << endl;}
                     else{
                    cout << endl;
                    cout << "Invalid Transaction!" << endl;
                    cout << endl;}
                    
// Display of final transaction details for option 1 (Selling of blood per liter with existing customer records).
                cout << "============================================================================================" << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << "                    .................................................." << endl;
                cout << endl;
                cout << setw(53)<< "CUSTOMER DETAILS" << endl;
                cout << endl;
                cout << "                   Date: " << nowLocal.tm_mday << "/" << nowLocal.tm_mon+1 << "/" << nowLocal.tm_year+1900 << "         Time: " << nowLocal.tm_hour << " : " << nowLocal.tm_min << endl;
                cin.get();
                cout << endl;
                cout << "                   Account Number: " << acountnumold << endl;
                cout << endl;
                cout << "                   Name:  " << cnameold << endl;
                cout << endl;
                cout << "                   Age:  "  << ageold << "               Gender:  " << genderold << endl;
                cout << endl;
                cout << setw(30)<< "                   Address :  " << addrold <<  endl;
                cout << endl;
                cout << "                   Contact Number :  " << contnumberold << endl;
                cout << endl;
                                                                TOTAL = ATYPEO + ATYPEA + ATYPEB + ATYPEAB;
                                             NOLTOTAL = NOLO + NOLA + NOLB + NOLAB;
                cout << "                              Blood Type O: " << fixed << setprecision(2) << ATYPEO << endl;
                cout << "                                         A: " << fixed << setprecision(2) << ATYPEA << endl;
                cout << "                                         B: " << fixed << setprecision(2) << ATYPEB << endl;
                cout << "                                        AB: " << fixed << setprecision(2) << ATYPEAB << endl;
                cout << endl;
                cout << "                        Number of Liters O: " << fixed << setprecision(2) << NOLO <<  endl;
                cout << "                                         A: " << fixed << setprecision(2) << NOLA <<  endl;
                cout << "                                         B: " << fixed << setprecision(2) << NOLB <<  endl;
                cout << "                                        AB: " << fixed << setprecision(2) << NOLAB << endl;
                cout << "                    -------------------------------------------------" <<endl;
                cout << "                       Total No. of Liters: " << fixed << setprecision(2) << NOLTOTAL << endl;
                cout << endl;
                cout << "                              Total Amount: P" << fixed << setprecision(2) << TOTAL << endl;
                cout << endl;
                cout << "                       Payment:  " << MDP1 << " " << gcashn << endl; 
                cout << "                       Reference Number: " << referencen << endl;
                cout << endl;
                cout << endl;
                cout << "                          Proceed to counter number 2 please!" << endl;
                cout << endl;
                cout << endl;
                cout << setw(55) << "Number of Transaction: " << record2++ << endl;
                cout << "                    .................................................." << endl;
                cout << endl;
                cout <<"                  Would you like to sell another Blood Type? <Y/N> : "; cin >> yn3;
                cout << endl; }
         
// Transaction selection option 2 (Blood Type Selection)
// Blood Type O               
         }else if ( option == 2 )

       {   
            yn4 = 'y';
            while ( yn4 == 'y' || yn4 =='Y')
            {
            cout << "============================================================================================" << endl;
            cout << endl;
            cout << setw(56)<< " 2. - Buy blood per liter  " << endl;
            cout << "              ............................................................"<< endl;
            cout <<  endl;
            cout << setw(68)<< "    Blood Type O - P800 per liter - [Available Liters: " << FONOL << "]  " << endl;
            cout << "                                                 [Remaining Litters: " << ONOL << "]    " << endl;
            cout <<  endl;
            cout << setw(68)<< "    Blood Type A - P1800 per liter - [Available Liters: " << FANOL << "] " << endl;
            cout << "                                                 [Remaining Litters: " << ANOL << "]    " << endl;
            cout <<  endl;
            cout << setw(68)<< "    Blood Type B - P1800 per liter - [Available Liters: " << FBNOL << "]" << endl;
            cout << "                                                 [Remaining Litters: " <<  BNOL << "] "<< endl;
            cout <<  endl;
            cout << setw(69)<< "    Blood Type AB - P2800 per liter - [Available Liters: " << FABNOL << "] " << endl;
            cout << "                                                  [Remaining Litters: " << ABNOL << "]   " << endl;
            cout << endl;
            cout << "              ............................................................"<< endl;
            cout << endl;
            cout << endl;
            cout << "Input your Blood Type:  " ; cin >> BTYPE;
            cout << "" << endl;
            cout << "Input Number of Liters:  " ; cin >> NOL;
            cout << endl;
            cout << endl;
            cout << "============================================================================================" << endl;

// Transaction selection option 2 (buy)
// Blood Type O         
                    if( BTYPE == "O" || BTYPE == "o" && NOL == 50 )
                        {   
                    AMOUNT = NOL * 800 ;
                    ONOL = FONOL - NOL;
                    cout << endl;
                    cout << "Blood Type Selected: " << BTYPE << "   Number of Liters:  "  << NOL << endl;
                    ATYPEO = AMOUNT;
                    NOLO = NOL;
                    cout << endl;
                    cout << "Total Amount: " << AMOUNT << endl;                    
                    cout << endl;}
// Blood Type A  
                    else if( BTYPE =="A" || BTYPE == "a"  && NOL == 40 )
                         {   
                    AMOUNT = NOL * 1800 ;
                    ANOL = FANOL - NOL;
                    cout << endl;
                    cout << "Blood Type Selected: " << BTYPE << "   Number of Liters:  "  << NOL << endl;
                    ATYPEA = AMOUNT;
                    NOLA = NOL;
                    cout << endl;
                    cout << "Total Amount: " << AMOUNT << endl;                    
                    cout << endl;}
 // Blood Type B                    
                    else if( BTYPE =="B" || BTYPE == "b" && NOL == 45  )
                        {   
                    AMOUNT = NOL * 1800 ;
                    BNOL = FBNOL - NOL;
                    cout << endl;
                    cout << "Blood Type Selected: " << BTYPE << "   Number of Liters:  "  << NOL << endl;
                    ATYPEB = AMOUNT;
                    NOLB = NOL;
                    cout << endl;
                    cout << "Total Amount: " << AMOUNT << endl;                    
                    cout << endl;}
// Blood Type AB                     
                    else if( BTYPE == "AB" || BTYPE == "ab" && NOL == 30)
                            {   
                    AMOUNT = NOL * 2800 ;
                    ABNOL = FABNOL - NOL;
                    cout << endl;
                    cout << "Blood Type Selected: " << BTYPE << "   Number of Liters:  "  << NOL << endl;
                    ATYPEAB = AMOUNT;
                    NOLAB = NOL;
                    cout << endl;
                    cout << "Total Amount: " << AMOUNT << endl;                    
                    cout << endl;}
                    else{
                    cout << endl;
                    cout << endl;
                    cout << setw(57) << "INVALID AMOUNT OF LITERS!" << endl;
                    cout << endl;
                    cout << endl;
                    cout << "============================================================================================" << endl;}
                    
// Mode of Payment Selcetion.  
                    cout << endl;
                    cout << endl;
                    cout << setw (45) << "Mode of Payment: " << endl;
                    cout <<"                            ----------------------------------"<< endl;

                    cout << setw (63) << "|   Cash   |  |    Credit/ CC    | " << endl;

                    cout <<"                            ----------------------------------"<< endl;
                    cout << endl;
                    cout << "Please Input Mode of Paympent: "; cin >> MDP1;
                    cout << endl;
// Mode of Payment Selcetion (cash) 
                     if (MDP1 == "CASH" || MDP1 == "cash" || MDP1 == "Cash")
                        {
                    cout << endl; 
                    cout << endl;
                    cout << "Mode of payment Selected - Cash!" << endl;
                    referencen =  (rand () % max2) + 100;
                    cout << "Reference Number: " << referencen << endl;
                    cout << endl;}
// Mode of Payment Selcetion (Gcash) 
                    else if (MDP1 == "Credit" || MDP1 == "CREDIT" || MDP1 == "credit" || MDP1 == "CC"|| MDP1 == "cc" )
                        {
                    cout << endl;
                    cout << endl;
                    cout << "Mode of payment Selected - Credit Card" << endl;
                    cout << endl;   
                    cout << "Please Enter the 16 Digit Number of your Credit Card!" << endl;
                    cin >> creditcnumber;
                    referencen =  (rand () % max2) + 11101;
                    cout << "Reference Number: " << referencen << endl;
                    cout << endl;}
                    else{
                    cout << endl;
                    cout << "Invalid Transaction!" << endl;
                    cout << endl;}


// Display of final transaction details for option 2 (Buying of blood per liter with existing customer records).
                 cout << "============================================================================================" << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << "                    ................................................" << endl;
                cout << "" << endl;
                cout << setw(53)<< "CUSTOMER DETAILS" << endl;
                cout << endl;
                cout << "                    Date: " << nowLocal.tm_mday << "/" << nowLocal.tm_mon+1 << "/" << nowLocal.tm_year+1900 << "         Time: " << nowLocal.tm_hour << " : " << nowLocal.tm_min << endl;
                cin.get();
                cout << endl;
                cout << "                    Account Number: " << acountnumold << endl;
                cout << "                    Name:  " << cnameold << endl;
                cout << "                    Age:  "  << ageold  << endl;
                cout << "                    Gender:  " << genderold << endl;
                cout << setw(30)<< "                    Address :  " << addrold <<  endl;
                cout << "                    Contact Number :  " << contnumberold << endl;
                cout << endl;
                                             TOTAL = ATYPEO + ATYPEA + ATYPEB + ATYPEAB;
                                             NOLTOTAL = NOLO + NOLA + NOLB + NOLAB;
                cout << "                              Blood Type O: "<< fixed << setprecision(2) << ATYPEO << endl;
                cout << "                                         A: " << fixed << setprecision(2) << ATYPEA << endl;
                cout << "                                         B: " << fixed << setprecision(2) << ATYPEB << endl;
                cout << "                                        AB: " << fixed << setprecision(2) << ATYPEAB << endl;
                cout << endl;
                cout << "                        Number of Liters O: " << fixed << setprecision(2) << NOLO <<  endl;
                cout << "                                         A: " << fixed << setprecision(2) << NOLA <<  endl;
                cout << "                                         B: " << fixed << setprecision(2) << NOLB <<  endl;
                cout << "                                        AB: " << fixed << setprecision(2) << NOLAB << endl;
                cout << "                    -------------------------------------------------" <<endl;
                cout << "                       Total No. of Liters: " << fixed << setprecision(2) << NOLTOTAL << endl;
                cout << endl;
                cout << "                              Total Amount: P" << fixed << setprecision(2) << TOTAL << endl;
                cout << endl;
                cout << "                       Payment:  " << MDP1 << " " << creditcnumber << endl; 
                cout << "                       Reference Number: " << referencen << endl;
                cout << endl;
                cout << endl;
                cout << "                          Proceed to counter number 2 please!" << endl;
                cout << endl;
                cout << endl;
                cout << setw(55) << "Number of Transaction: " << record2++ << endl;
                cout << "                    ................................................" << endl;
                cout << endl;
                cout <<"                  Would you like to Select another Blood Type? <Y/N> : "; cin >> yn4;
                cout << endl; } 
                 } else{
                cout << setw(60) << "NO Transaction Has been Selected" << endl; 
                cout << endl;
                cout << endl;}

//value resets
AMOUNT = 0, TOTAL = 0, NOLTOTAL = 0;
ATYPEO = 0, ATYPEA = 0, ATYPEB = 0, ATYPEAB = 0;
NOL = 0, NOLO = 0, NOLA = 0, NOLB = 0,NOLAB = 0;

// record display and selection for another transaction
cout << setw(56) << "Number of Transaction: " << record3++ << endl;
cout << endl;
cout << endl;
cin.ignore();
cout << setw(58) << "Another Transaction? <Y/N>: "; cin >> ynn;
cin.ignore();
cout << "============================================================================================" << endl;}
  

  }
         

    return 0;
    }