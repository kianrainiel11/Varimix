#include <iostream>
using namespace std;
#include <ctime>



class variMix{

    public: 
    int packCost;
    string description;

};


int main(){
	char corder;
	int cart1;
	int cpay;
	int mop;
	int opay;
	int total;
	int totalQuantity = 0;
    char variChoice;
    int variMenu;
    int variQuantity;
    int varitotalPrice;
    int method;
    int prod1,prod2;
    char choice;
    int price = 77;
    string p1 = "Tobleron Bits", p2 = "Trolly Gummies",  p3 = "Dairy Milk Sweetlings",  p4 = "Snickers Fillies", p5 = "Mars Frozen Milkies",  
	       p6 = "Golden Fretzels",  p7 = "Magnum ChocoFlakes",  p8 = "Gourmet Dark Chocolate",  p9 = "Nip's Mallows Deluxe",  p10 = "Roasty Curly Top's";
    int variQ1 = 0, variQ2 = 0, variQ3 = 0, variQ4 = 0, variQ5 = 0, variQ6 = 0, variQ7 = 0, variQ8 = 0, variQ9 = 0, variQ10 = 0;
    int variQA1 = 0, variQA2 = 0, variQA3 = 0, variQA4 = 0, variQA5 = 0, variQA6 = 0, variQA7 = 0, variQA8 = 0, variQA9 = 0, variQA10 = 0;
    int variQB1 = 0, variQB2 = 0, variQB3 = 0, variQB4 = 0, variQB5 = 0, variQB6 = 0, variQB7 = 0, variQB8 = 0, variQB9 = 0, variQB10 = 0;
    int variQC1 = 0, variQC2 = 0, variQC3 = 0, variQC4 = 0, variQC5 = 0, variQC6 = 0, variQC7 = 0, variQC8 = 0, variQC9 = 0, variQC10 = 0;
    int variQD1 = 0, variQD2 = 0, variQD3 = 0, variQD4 = 0, variQD5 = 0, variQD6 = 0, variQD7 = 0, variQD8 = 0, variQD9 = 0, variQD10 = 0;
    int variQE1 = 0, variQE2 = 0, variQE3 = 0, variQE4 = 0, variQE5 = 0, variQE6 = 0, variQE7 = 0, variQE8 = 0, variQE9 = 0, variQE10 = 0;
    int variQF1 = 0, variQF2 = 0, variQF3 = 0, variQF4 = 0, variQF5 = 0, variQF6 = 0, variQF7 = 0, variQF8 = 0, variQF9 = 0, variQF10 = 0;
    int variQG1 = 0, variQG2 = 0, variQG3 = 0, variQG4 = 0, variQG5 = 0, variQG6 = 0, variQG7 = 0, variQG8 = 0, variQG9 = 0, variQG10 = 0;
    int variQH1 = 0, variQH2 = 0, variQH3 = 0, variQH4 = 0, variQH5 = 0, variQH6 = 0, variQH7 = 0, variQH8 = 0, variQH9 = 0, variQH10 = 0;
    int variQI1 = 0, variQI2 = 0, variQI3 = 0, variQI4 = 0, variQI5 = 0, variQI6 = 0, variQI7 = 0, variQI8 = 0, variQI9 = 0, variQI10 = 0;
    int opay2;
    string name;
    string addr;
    int no;
    
    
    
    variMix delightfulBites;
    delightfulBites.packCost = 77;
    delightfulBites.description = " Delightful Bites Contain a mixture of mushy cookies with delightful flavors";

    variMix sugarHighs;
    sugarHighs.packCost = 77;
    sugarHighs.description = "Sugar Highs Contain a mixture of mushy cookies with delightful flavors";

variPacks:
    cout << "                             +============================+\n";
    cout << "                               |Welcome to Varimix & Bits| \n";
    cout << "                             +============================+\n";

    cout << "               Varimix & Bits is a custom made mix of sweets in one pack\n";
    cout << "                   with a affordable price that only 77 Pesos. !!!!\n";
    cout << "BEST SELLERS MIX IS AVAILABLE!!BEST SELLERS MIX IS AVAILABLE!!BEST SELLERS MIX IS AVAILABLE!!\n\n";
again:   	
	cout << "\nPlease Select if you want to Mix It Yourself or get a Pre-mix by Us!\n";
	cout << "[1] (MYI) Mix It Yourelf\n";
	cout << "[2] (Mixies) Pre-mix by Us\n";
	cout << "Enter your choice: ";
	cin >> method;
		if (method < 1 || method > 2) {
            cout << "Invalid choice. Redirecting.\n";
           	goto again;
        }
		else if (method == 2){
			goto mixed;
		}
	
		else if(method == 1){
MIY:
	cout << "\n\n[------------------------------| Mix It Yourself |---------------------------------]\n";
    cout << "         >>>>>>>>>>>>>>>>>>>>>>>>>> List of Products <<<<<<<<<<<<<<<<<<<<<<<<<<<<\n\n";
    cout << "               [1]        Tobleron Bits\n";
    cout << "               [2]        Trolly Gummies\n";
    cout << "               [3]        Dairy Milk Sweetlings\n";
    cout << "               [4]        Snickers Fillies\n"; 
    cout << "               [5]        Mars Frozen Milkies\n"; 
    cout << "               [6]        Golden Fretzels\n"; 
    cout << "               [7]        Magnum Choco Flakes\n"; 
    cout << "               [8]        Gourmet Dark Chocolate\n";     
    cout << "               [9]        Nip's Mallows Deluxe\n"; 
    cout << "               [10]       Roasty Curly Top's\n\n"; 
    cout << "\nEnter the 1st Product: ";
	cin >> prod1; 
	cout << "Enter the 2nd Product: ";
	cin >> prod2; 
			if (prod1 < 1 || prod1 > 10 || prod2 < 1 || prod2  > 10) {
            cout << "Invalid choice. Redirecting to Menu.\n";
            	goto MIY;
        
	    }
			else if(prod1 == 1 && prod2 == 2){ 
			cout << "\n\nYou ordered a mixed of " << p1 << " and " << p2 << "!";
			cout << "\nHow many packs do you want: ";
			cin >> variQA1;
			cout << p1 << " and " << p2 << " x " <<  variQA1  << endl;
			cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
						if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
		}
			else if(prod1 == 1 && prod2 == 3){ 
			cout << "\n\nYou ordered a mixed of " << p1 << " and " << p3 << "!";
			cout << "\nHow many packs do you want: ";
			cin >> variQA2;
			cout << p1 << " and " << p3 << " x " <<  variQA2 << endl;
			cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
					
		}
			else if(prod1 == 1 && prod2 == 4){ 
			cout << "\n\nYou ordered a mixed of " << p1 << " and " << p4 << "!";
			cout << "\nHow many packs do you want: ";
			cin >> variQA3;
			cout << p1 << " and " << p4 << " x " <<  variQA3 << endl;
			cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
		}
			else if(prod1 == 1 && prod2 == 5){ 
			cout << "\n\nYou ordered a mixed of " << p1 << " and " << p5 << "!";
			cout << "\nHow many packs do you want: ";
			cin >> variQA4;
			cout << p1 << " and " << p5 << " x " <<  variQA4 << endl;
			cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
		}
			else if(prod1 == 1 && prod2 == 6){ 
			cout << "\n\nYou ordered a mixed of " << p1 << " and " << p6 << "!";
			cout << "\nHow many packs do you want: ";
			cin >> variQA5;
			cout << p1 << " and " << p6 << " x " <<  variQA5 << endl;
			cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
		}
			else if(prod1 == 1 && prod2 == 7){ 
			cout << "\n\nYou ordered a mixed of " << p1 << " and " << p7 << "!";
			cout << "\nHow many packs do you want: ";
			cin >> variQA6;
			cout << p1 << " and " << p7 << " x " <<  variQA6 << endl;
			cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
			    	if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
		}
			else if(prod1 == 1 && prod2 == 8){ 
			cout << "\n\nYou ordered a mixed of " << p1 << " and " << p8 << "!";
			cout << "\nHow many packs do you want: ";
			cin >> variQA7;
			cout << p1 << " and " << p8 << " x " <<  variQA7 << endl;
			cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
		}
			else if(prod1 == 1 && prod2 == 9){ 
			cout << "\n\nYou ordered a mixed of " << p1 << " and " << p9 << "!";
			cout << "\nHow many packs do you want: ";
			cin >> variQA8;
			cout << p1 << " and " << p9 << " x " <<  variQA8 << endl;
			cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
		}
			else if(prod1 == 1 && prod2 == 10){ 
			cout << "\n\nYou ordered a mixed of " << p1 << " and " << p10 << "!";
			cout << "\nHow many packs do you want: ";
			cin >> variQA9;
			cout << p1 << " and " << p10 << " x " <<  variQA9 << endl;
			cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
		}
			else if(prod1 == 2 && prod2 == 3){ 
			cout << "\n\nYou ordered a mixed of " << p2 << " and " << p3 << "!";
			cout << "\nHow many packs do you want: ";
			cin >> variQA10;
			cout << p2 << " and " << p3 << " x " <<  variQA10 << endl;
			cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
		}
			else if(prod1 == 2 && prod2 == 4){ 
			cout << "\n\nYou ordered a mixed of " << p2 << " and " << p4 << "!";
			cout << "\nHow many packs do you want: ";
			cin >> variQB1;
			cout << p2 << " and " << p4 << " x " <<  variQB1 << endl;
			cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
		}
			else if(prod1 == 2 && prod2 == 5){ 
			cout << "\n\nYou ordered a mixed of " << p2 << " and " << p5 << "!";
			cout << "\nHow many packs do you want: ";
			cin >> variQB2;
			cout << p2 << " and " << p5 << " x " <<  variQB2 << endl;
			cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
		}	else if(prod1 == 2 && prod2 == 6){ 
			cout << "\n\nYou ordered a mixed of " << p2 << " and " << p6 << "!";
			cout << "\nHow many packs do you want: ";
			cin >> variQB3;
			cout << p2 << " and " << p6 << " x " <<  variQB3 << endl;
			cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
		}
			else if(prod1 == 2 && prod2 == 7){ 
			cout << "\n\nYou ordered a mixed of " << p2 << " and " << p7 << "!";
			cout << "\nHow many packs do you want: ";
			cin >> variQB4;
			cout << p2 << " and " << p7 << " x " <<  variQB4 << endl;
			cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
		}
			else if(prod1 == 2 && prod2 == 8){ 
			cout << "\n\nYou ordered a mixed of " << p2 << " and " << p8 << "!";
			cout << "\nHow many packs do you want: ";
			cin >> variQB5;
			cout << p2 << " and " << p8 << " x " <<  variQB5 << endl;
			cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
		}
			else if(prod1 == 2 && prod2 == 9){ 
			cout << "\n\nYou ordered a mixed of " << p2 << " and " << p9 << "!";
			cout << "\nHow many packs do you want: ";
			cin >> variQB6;
			cout << p2 << " and " << p9 << " x " <<  variQB6 << endl;
			cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
		}
			else if(prod1 == 2 && prod2 == 10){ 
			cout << "\n\nYou ordered a mixed of " << p2 << " and " << p10 << "!";
			cout << "\nHow many packs do you want: ";
			cin >> variQB7;
			cout << p2 << " and " << p10 << " x " <<  variQB7 << endl;
			cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
		}
			else if(prod1 == 3 && prod2 == 4){ 
			cout << "\n\nYou ordered a mixed of " << p3 << " and " << p4 << "!";
			cout << "\nHow many packs do you want: ";
			cin >> variQB8;
			cout << p3 << " and " << p4 << " x " <<  variQB8 << endl;
			cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
		}	else if(prod1 == 3 && prod2 == 5){ 
			cout << "\n\nYou ordered a mixed of " << p3 << " and " << p5 << "!";
			cout << "\nHow many packs do you want: ";
			cin >> variQB9;
			cout << p3 << " and " << p5 << " x " <<  variQB9 << endl;
			cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
		}
			else if(prod1 == 3 && prod2 == 6){ 
			cout << "\n\nYou ordered a mixed of " << p3 << " and " << p6 << "!";
			cout << "\nHow many packs do you want: ";
			cin >> variQB10;
			cout << p3 << " and " << p6 << " x " <<  variQB10 << endl;
			cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
		}	else if(prod1 == 3 && prod2 == 7){ 
			cout << "\n\nYou ordered a mixed of " << p3 << " and " << p7 << "!";
			cout << "\nHow many packs do you want: ";
			cin >> variQC1;
			cout << p3 << " and " << p7 << " x " <<  variQC1 << endl;
			cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
		}
			else if(prod1 == 3 && prod2 == 8){ 
			cout << "\n\nYou ordered a mixed of " << p3 << " and " << p8 << "!";
			cout << "\nHow many packs do you want: ";
			cin >> variQC2;
			cout << p3 << " and " << p8 << " x " <<  variQC2 << endl;
			cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
		}
			else if(prod1 == 3 && prod2 == 9){ 
			cout << "\n\nYou ordered a mixed of " << p3 << " and " << p9 << "!";
			cout << "\nHow many packs do you want: ";
			cin >> variQC3;
			cout << p3 << " and " << p9 << " x " <<  variQC3 << endl;
			cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
		}
		else if(prod1 == 3 && prod2 == 10){ 
			cout << "\n\nYou ordered a mixed of " << p3 << " and " << p10 << "!";
			cout << "\nHow many packs do you want: ";
			cin >> variQC4;
			cout << p10 << " and " << p10 << " x " <<  variQC4 << endl;
			cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
		}
		else if(prod1 == 4 && prod2 == 5){ 
			cout << "\n\nYou ordered a mixed of " << p4 << " and " << p5 << "!";
			cout << "\nHow many packs do you want: ";
			cin >> variQC5;
			cout << p4 << " and " << p5 << " x " <<  variQC5 << endl;
			cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
		}
		else if(prod1 == 4 && prod2 == 6){ 
			cout << "\n\nYou ordered a mixed of " << p4 << " and " << p6 << "!";
			cout << "\nHow many packs do you want: ";
			cin >> variQC6;
			cout << p4 << " and " << p6 << " x " <<  variQC6  << endl;
			cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
		}
		else if(prod1 == 4 && prod2 == 7){ 
			cout << "\n\nYou ordered a mixed of " << p4 << " and " << p7 << "!";
			cout << "\nHow many packs do you want: ";
			cin >> variQC7;
			cout << p4 << " and " << p7 << " x " <<  variQC7 << endl;
			cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
		}else if(prod1 == 4 && prod2 == 8){ 
			cout << "\n\nYou ordered a mixed of " << p4 << " and " << p8 << "!";
			cout << "\nHow many packs do you want: ";
			cin >> variQC8;
			cout << p4 << " and " << p8 << " x " <<  variQC8 << endl;
			cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
		}
		else if(prod1 == 4 && prod2 == 9){ 
			cout << "\n\nYou ordered a mixed of " << p4 << " and " << p9 << "!";
			cout << "\nHow many packs do you want: ";
			cin >> variQC9;
			cout << p4 << " and " << p9 << " x " <<  variQC9  << endl;
			cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
		}else if(prod1 == 4 && prod2 == 10){ 
			cout << "\n\nYou ordered a mixed of " << p4 << " and " << p10 << "!";
			cout << "\nHow many packs do you want: ";
			cin >> variQC10;
			cout << p4 << " and " << p10 << " x " <<  variQC10  << endl;
			cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
		}
		else if(prod1 == 5 && prod2 == 6){ 
			cout << "\n\nYou ordered a mixed of " << p5 << " and " << p6 << "!";
			cout << "\nHow many packs do you want: ";
			cin >> variQD1;
			cout << p5 << " and " << p6 << " x " <<  variQD1  << endl;
			cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
		}
		else if(prod1 == 5 && prod2 == 7){ 
			cout << "\n\nYou ordered a mixed of " << p5 << " and " << p7 << "!";
			cout << "\nHow many packs do you want: ";
			cin >> variQD2;
			cout << p5 << " and " << p7 << " x " <<  variQD2 << endl;
			cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
		}
		else if(prod1 == 5 && prod2 == 8){ 
			cout << "\n\nYou ordered a mixed of " << p5 << " and " << p8 << "!";
			cout << "\nHow many packs do you want: ";
			cin >> variQD3;
			cout << p5 << " and " << p8 << " x " <<  variQD3  << endl;
			cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
		}
		else if(prod1 == 5 && prod2 == 9){ 
			cout << "\n\nYou ordered a mixed of " << p5 << " and " << p9 << "!";
			cout << "\nHow many packs do you want: ";
			cin >> variQD4;
			cout << p5 << " and " << p9 << " x " <<  variQD4 << endl;
			cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;	
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
		}else if(prod1 == 5 && prod2 == 10){ 
			cout << "\n\nYou ordered a mixed of " << p5 << " and " << p10 << "!";
			cout << "\nHow many packs do you want: ";
			cin >> variQD5;
			cout << p5 << " and " << p10 << " x " <<  variQD5  << endl;
			cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
		}else if(prod1 == 6 && prod2 == 7){ 
			cout << "\n\nYou ordered a mixed of " << p6 << " and " << p7 << "!";
			cout << "\nHow many packs do you want: ";
			cin >> variQD6;
			cout << p6 << " and " << p7 << " x " <<  variQD6  << endl;
			cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
		}else if(prod1 == 6 && prod2 == 8){ 
			cout << "\n\nYou ordered a mixed of " << p6 << " and " << p8 << "!";
			cout << "\nHow many packs do you want: ";
			cin >> variQD7;
			cout << p6 << " and " << p8 << " x " <<  variQD7  << endl;
			cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
		}else if(prod1 == 6 && prod2 == 9){ 
			cout << "\n\nYou ordered a mixed of " << p6 << " and " << p9 << "!";
			cout << "\nHow many packs do you want: ";
			cin >> variQD8;
			cout << p6 << " and " << p9 << " x " <<  variQD8 << endl;
			cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
		}else if(prod1 == 6 && prod2 == 10){ 
			cout << "\n\nYou ordered a mixed of " << p6 << " and " << p10 << "!";
			cout << "\nHow many packs do you want: ";
			cin >> variQD9;
			cout << p6 << " and " << p10 << " x " <<  variQD9 << endl;
			cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
		}else if(prod1 == 7 && prod2 == 8){ 
			cout << "\n\nYou ordered a mixed of " << p7 << " and " << p8 << "!";
			cout << "\nHow many packs do you want: ";
			cin >> variQD10;
			cout << p7 << " and " << p8 << " x " <<  variQD10  << endl;
			cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
		}else if(prod1 == 7 && prod2 == 9){ 
			cout << "\n\nYou ordered a mixed of " << p7 << " and " << p9 << "!";
			cout << "\nHow many packs do you want: ";
			cin >> variQE1;
			cout << p7 << " and " << p9 << " x " <<  variQE1 << endl;
			cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
		}else if(prod1 == 7 && prod2 == 10){ 
			cout << "\n\nYou ordered a mixed of " << p7 << " and " << p10 << "!";
			cout << "\nHow many packs do you want: ";
			cin >> variQE2;
			cout << p7 << " and " << p10 << " x " <<  variQE2  << endl;
			cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
		}else if(prod1 == 8 && prod2 == 9){ 
			cout << "\n\nYou ordered a mixed of " << p8 << " and " << p9 << "!";
			cout << "\nHow many packs do you want: ";
			cin >> variQE3;
			cout << p8 << " and " << p9 << " x " <<  variQE3  << endl;
			cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
		}
			else if(prod1 == 8 && prod2 == 10){ 
			cout << "\n\nYou ordered a mixed of " << p8 << " and " << p10 << "!";
			cout << "\nHow many packs do you want: ";
			cin >> variQE4;
			cout << p8 << " and " << p10 << " x " <<  variQE4 << endl;
			cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
		}
			else if(prod1 == 9 && prod2 == 10){ 
			cout << "\n\nYou ordered a mixed of " << p9 << " and " << p10 << "!";
			cout << "\nHow many packs do you want: ";
			cin >> variQE5;
			cout << p9 << " and " << p10 << " x " <<  variQE5 << endl;
			cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
		}
			else if(prod1 == 2 && prod2 == 1){ 
			cout << "\n\nYou ordered a mixed of " << p2 << " and " << p1 << "!";
			cout << "\nHow many packs do you want: ";
			cin >> variQE6;
			cout << p2 << " and " << p1 << " x " <<  variQE6  << endl;
			cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
						if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
		}
			else if(prod1 == 3 && prod2 == 1){ 
			cout << "\n\nYou ordered a mixed of " << p3 << " and " << p1 << "!";
			cout << "\nHow many packs do you want: ";
			cin >> variQE7;
			cout << p3 << " and " << p1 << " x " <<  variQE7 << endl;
			cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
					
		}
			else if(prod1 == 4 && prod2 == 1){ 
			cout << "\n\nYou ordered a mixed of " << p4 << " and " << p1 << "!";
			cout << "\nHow many packs do you want: ";
			cin >> variQE8;
			cout << p4 << " and " << p1 << " x " <<  variQE8 << endl;
			cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
		}
			else if(prod1 == 5 && prod2 == 1){ 
			cout << "\n\nYou ordered a mixed of " << p5 << " and " << p1 << "!";
			cout << "\nHow many packs do you want: ";
			cin >> variQE9;
			cout << p5 << " and " << p1 << " x " <<  variQE9 << endl;
			cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
		}
			else if(prod1 == 6 && prod2 == 1){ 
			cout << "\n\nYou ordered a mixed of " << p6 << " and " << p1 << "!";
			cout << "\nHow many packs do you want: ";
			cin >> variQE10;
			cout << p6 << " and " << p1 << " x " <<  variQE10 << endl;
			cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
		}
			else if(prod1 == 7 && prod2 == 1){ 
			cout << "\n\nYou ordered a mixed of " << p7 << " and " << p1 << "!";
			cout << "\nHow many packs do you want: ";
			cin >> variQF1;
			cout << p7 << " and " << p1 << " x " <<  variQF1 << endl;
			cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
			    	if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
		}
			else if(prod1 == 8 && prod2 == 1){ 
			cout << "\n\nYou ordered a mixed of " << p8 << " and " << p1 << "!";
			cout << "\nHow many packs do you want: ";
			cin >> variQF2;
			cout << p8 << " and " << p1 << " x " <<  variQF2 << endl;
			cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
		}
			else if(prod1 == 9 && prod2 == 1){ 
			cout << "\n\nYou ordered a mixed of " << p9 << " and " << p1 << "!";
			cout << "\nHow many packs do you want: ";
			cin >> variQF3;
			cout << p9 << " and " << p1 << " x " <<  variQF3 << endl;
			cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
		}
			else if(prod1 == 10 && prod2 == 1){ 
			cout << "\n\nYou ordered a mixed of " << p10 << " and " << p1 << "!";
			cout << "\nHow many packs do you want: ";
			cin >> variQF4;
			cout << p10 << " and " << p1 << " x " <<  variQF4 << endl;
			cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
		}
			else if(prod1 == 3 && prod2 == 2){ 
			cout << "\n\nYou ordered a mixed of " << p3 << " and " << p2 << "!";
			cout << "\nHow many packs do you want: ";
			cin >> variQF5;
			cout << p3 << " and " << p2 << " x " <<  variQF5 << endl;
			cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
		}
			else if(prod1 == 4 && prod2 == 2){ 
			cout << "\n\nYou ordered a mixed of " << p4 << " and " << p2 << "!";
			cout << "\nHow many packs do you want: ";
			cin >> variQF6;
			cout << p4 << " and " << p2 << " x " <<  variQF6 << endl;
			cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
		}
			else if(prod1 == 5 && prod2 == 2){ 
			cout << "\n\nYou ordered a mixed of " << p5 << " and " << p2 << "!";
			cout << "\nHow many packs do you want: ";
			cin >> variQF7;
			cout << p5 << " and " << p2 << " x " <<  variQF7 << endl;
			cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
		}	else if(prod1 == 6 && prod2 == 2){ 
			cout << "\n\nYou ordered a mixed of " << p6 << " and " << p2 << "!";
			cout << "\nHow many packs do you want: ";
			cin >> variQF8;
			cout << p6 << " and " << p2 << " x " <<  variQF8 << endl;
			cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
		}
			else if(prod1 == 7 && prod2 == 2){ 
			cout << "\n\nYou ordered a mixed of " << p7 << " and " << p2 << "!";
			cout << "\nHow many packs do you want: ";
			cin >> variQF9;
			cout << p7 << " and " << p2 << " x " <<  variQF9 << endl;
			cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
		}
			else if(prod1 == 8 && prod2 == 2){ 
			cout << "\n\nYou ordered a mixed of " << p8 << " and " << p2 << "!";
			cout << "\nHow many packs do you want: ";
			cin >> variQF10;
			cout << p8 << " and " << p2 << " x " <<  variQF10 << endl;
			cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
		}
			else if(prod1 == 9 && prod2 == 2){ 
			cout << "\n\nYou ordered a mixed of " << p9 << " and " << p2 << "!";
			cout << "\nHow many packs do you want: ";
			cin >> variQG1;
			cout << p9 << " and " << p2 << " x " <<  variQG1 << endl;
			cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
		}
			else if(prod1 == 10 && prod2 == 2){ 
			cout << "\n\nYou ordered a mixed of " << p10 << " and " << p2 << "!";
			cout << "\nHow many packs do you want: ";
			cin >> variQG2;
			cout << p10 << " and " << p2 << " x " <<  variQG2 << endl;
			cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
		}
			else if(prod1 == 4 && prod2 == 3){ 
			cout << "\n\nYou ordered a mixed of " << p4 << " and " << p3 << "!";
			cout << "\nHow many packs do you want: ";
			cin >> variQG3;
			cout << p4 << " and " << p3 << " x " <<  variQG3 << endl;
			cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
		}	else if(prod1 == 5 && prod2 == 3){ 
			cout << "\n\nYou ordered a mixed of " << p5 << " and " << p3 << "!";
			cout << "\nHow many packs do you want: ";
			cin >> variQG4;
			cout << p5 << " and " << p3 << " x " <<  variQG4 << endl;
			cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
		}
			else if(prod1 == 6 && prod2 == 3){ 
			cout << "\n\nYou ordered a mixed of " << p6 << " and " << p3 << "!";
			cout << "\nHow many packs do you want: ";
			cin >> variQG5;
			cout << p6 << " and " << p3 << " x " <<  variQG5 << endl;
			cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
		}	else if(prod1 == 7 && prod2 == 3){ 
			cout << "\n\nYou ordered a mixed of " << p7 << " and " << p3 << "!";
			cout << "\nHow many packs do you want: ";
			cin >> variQG6;
			cout << p7 << " and " << p3 << " x " <<  variQG6 << endl;
			cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
		}
			else if(prod1 == 8 && prod2 == 3){ 
			cout << "\n\nYou ordered a mixed of " << p8 << " and " << p3 << "!";
			cout << "\nHow many packs do you want: ";
			cin >> variQG7;
			cout << p8 << " and " << p3 << " x " <<  variQG7 << endl;
			cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
		}
			else if(prod1 == 9 && prod2 == 3){ 
			cout << "\n\nYou ordered a mixed of " << p9 << " and " << p3 << "!";
			cout << "\nHow many packs do you want: ";
			cin >> variQG8;
			cout << p9 << " and " << p3 << " x " <<  variQG8 << endl;
			cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
		}
		else if(prod1 == 10 && prod2 == 3){ 
			cout << "\n\nYou ordered a mixed of " << p10 << " and " << p3 << "!";
			cout << "\nHow many packs do you want: ";
			cin >> variQG9;
			cout << p10 << " and " << p3 << " x " <<  variQG9 << endl;
			cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
		}
		else if(prod1 == 5 && prod2 == 4){ 
			cout << "\n\nYou ordered a mixed of " << p5 << " and " << p4 << "!";
			cout << "\nHow many packs do you want: ";
			cin >> variQG10;
			cout << p5 << " and " << p4 << " x " <<  variQG10 << endl;
			cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
		}
		else if(prod1 == 6 && prod2 == 4){ 
			cout << "\n\nYou ordered a mixed of " << p6 << " and " << p4 << "!";
			cout << "\nHow many packs do you want: ";
			cin >> variQH1;
			cout << p6 << " and " << p4 << " x " <<  variQH1  << endl;
			cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
		}
		else if(prod1 == 7 && prod2 == 4){ 
			cout << "\n\nYou ordered a mixed of " << p7 << " and " << p4 << "!";
			cout << "\nHow many packs do you want: ";
			cin >> variQH2;
			cout << p7 << " and " << p4 << " x " <<  variQH2 << endl;
			cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
		}else if(prod1 == 8 && prod2 == 4){ 
			cout << "\n\nYou ordered a mixed of " << p8 << " and " << p4 << "!";
			cout << "\nHow many packs do you want: ";
			cin >> variQH3;
			cout << p8 << " and " << p4 << " x " <<  variQH3 << endl;
			cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
		}
		else if(prod1 == 9 && prod2 == 4){ 
			cout << "\n\nYou ordered a mixed of " << p9 << " and " << p4 << "!";
			cout << "\nHow many packs do you want: ";
			cin >> variQH4;
			cout << p9 << " and " << p4 << " x " <<  variQH4  << endl;
			cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
		}else if(prod1 == 10 && prod2 == 4){ 
			cout << "\n\nYou ordered a mixed of " << p10 << " and " << p4 << "!";
			cout << "\nHow many packs do you want: ";
			cin >> variQH5;
			cout << p10 << " and " << p4 << " x " <<  variQH5  << endl;
			cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
		}
		else if(prod1 == 6 && prod2 == 5){ 
			cout << "\n\nYou ordered a mixed of " << p6 << " and " << p5 << "!";
			cout << "\nHow many packs do you want: ";
			cin >> variQH6;
			cout << p6 << " and " << p5 << " x " <<  variQH6 << endl;
			cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
		}
		else if(prod1 == 7 && prod2 == 5){ 
			cout << "\n\nYou ordered a mixed of " << p7 << " and " << p5 << "!";
			cout << "\nHow many packs do you want: ";
			cin >> variQH7;
			cout << p7 << " and " << p5 << " x " <<  variQH7 << endl;
			cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
		}
		else if(prod1 == 8 && prod2 == 5){ 
			cout << "\n\nYou ordered a mixed of " << p8 << " and " << p5 << "!";
			cout << "\nHow many packs do you want: ";
			cin >> variQH8;
			cout << p8 << " and " << p5 << " x " <<  variQH8  << endl;
			cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
		}
		else if(prod1 == 9 && prod2 == 5){ 
			cout << "\n\nYou ordered a mixed of " << p9 << " and " << p5 << "!";
			cout << "\nHow many packs do you want: ";
			cin >> variQH9;
			cout << p9 << " and " << p5 << " x " <<  variQH9 << endl;
			cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;	
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
		}else if(prod1 == 10 && prod2 == 5){ 
			cout << "\n\nYou ordered a mixed of " << p10 << " and " << p5 << "!";
			cout << "\nHow many packs do you want: ";
			cin >> variQH10;
			cout << p10 << " and " << p5 << " x " <<  variQH10  << endl;
			cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
		}else if(prod1 == 7 && prod2 == 6){ 
			cout << "\n\nYou ordered a mixed of " << p7 << " and " << p6 << "!";
			cout << "\nHow many packs do you want: ";
			cin >> variQI1;
			cout << p7 << " and " << p6 << " x " <<  variQI1  << endl;
			cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
		}else if(prod1 == 8 && prod2 == 6){ 
			cout << "\n\nYou ordered a mixed of " << p8 << " and " << p6 << "!";
			cout << "\nHow many packs do you want: ";
			cin >> variQI2;
			cout << p8 << " and " << p6 << " x " <<  variQI2  << endl;
			cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
		}else if(prod1 == 9 && prod2 == 6){ 
			cout << "\n\nYou ordered a mixed of " << p9 << " and " << p6 << "!";
			cout << "\nHow many packs do you want: ";
			cin >> variQI3;
			cout << p9 << " and " << p6 << " x " <<  variQI3 << endl;
			cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
		}else if(prod1 == 10 && prod2 == 6){ 
			cout << "\n\nYou ordered a mixed of " << p10 << " and " << p6 << "!";
			cout << "\nHow many packs do you want: ";
			cin >> variQI4;
			cout << p10 << " and " << p6 << " x " <<  variQI4 << endl;
			cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
		}else if(prod1 == 8 && prod2 == 7){ 
			cout << "\n\nYou ordered a mixed of " << p8 << " and " << p7 << "!";
			cout << "\nHow many packs do you want: ";
			cin >> variQ5;
			cout << p8 << " and " << p7 << " x " <<  variQI5 << endl;
			cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
		}else if(prod1 == 9 && prod2 == 7){ 
			cout << "\n\nYou ordered a mixed of " << p9 << " and " << p7 << "!";
			cout << "\nHow many packs do you want: ";
			cin >> variQI6;
			cout << p9 << " and " << p7 << " x " <<  variQI6 << endl;
			cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
		}else if(prod1 == 10 && prod2 == 7){ 
			cout << "\n\nYou ordered a mixed of " << p10 << " and " << p7 << "!";
			cout << "\nHow many packs do you want: ";
			cin >> variQI7;
			cout << p10 << " and " << p7 << " x " <<  variQI7 << endl;
			cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
		}else if(prod1 == 9 && prod2 == 8){ 
			cout << "\n\nYou ordered a mixed of " << p9 << " and " << p8 << "!";
			cout << "\nHow many packs do you want: ";
			cin >> variQI8;
			cout << p9 << " and " << p8 << " x " <<  variQI8 << endl;
			cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
		}else if(prod1 == 10 && prod2 == 8){ 
			cout << "\n\nYou ordered a mixed of " << p10 << " and " << p8 << "!";
			cout << "\nHow many packs do you want: ";
			cin >> variQI9;
			cout << p10 << " and " << p8 << " x " <<  variQI9 << endl;
			cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
		}else if(prod1 == 10 && prod2 == 9){ 
			cout << "\n\nYou ordered a mixed of " << p10 << " and " << p9 << "!";
			cout << "\nHow many packs do you want: ";
			cin >> variQI10;
			cout << p10 << " and " << p9 << " x " <<  variQI10 << endl;
			cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
		
	}


mixed:   
    cout << "\n[------------------------------| List Of Products |---------------------------------]\n";
    cout << "       >>>>>>>>>>>>>>>>>>>>>>>>>>  BEST SELLERS MIX  <<<<<<<<<<<<<<<<<<<<<<<<<<<<\n\n";
    cout << "               [1]        Delightful Bites\n";
    cout << "               [2]        Sugar Highs\n";
    cout << "               [3]        Sugar Coated Dreams\n";
    cout << "               [4]        Divine Delicacies\n"; 
    cout << "               [5]        Heart Raider\n"; 
    cout << "               [6]        White Soul Sneakers\n"; 
    cout << "               [7]        Spicy Little Candy\n"; 
    cout << "               [8]        G.O.D Pack\n";     
    cout << "               [9]        El Sigma Dulce Caramelo\n"; 
    cout << "               [10]       Des Sucreries m�langer\n"; 

    cout << "Please select a pack: ";  
    cin  >> variMenu; 
    
    if (variMenu < 1 || variMenu > 10) {
            cout << "Invalid choice. Redirecting to Menu.";
            	goto mixed;
    }

   else if(variMenu == 1){
		cout << "     ==============================     \n";
		cout << "     |         VariDetails        | \n";
		cout << "     ==============================     \n";
		cout << "Delighful Delights is a mixture of delectable blend of sweet treats perfect for any occasion:\n";
		cout << "*Chocolate-Covered Almonds\n*Mini Marshmallows\n*Dried Cranberries\n*Caramel Popcorn\n*Honey Roasted Peanuts\n*White Chocolate Chips\n\n";


        cout << "Enter how many packs: ";
        cin >> variQ1;
        cout << "Delighful Delights : x" << variQ1 << endl;
        varitotalPrice = varitotalPrice + variQuantity * delightfulBites.packCost;
        cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
    }
    else if(variMenu == 2){
		cout << "     ==============================     \n";
		cout << "     |         VariDetails        | \n";
		cout << "     ==============================     \n";
		cout << "Sugar Highs is a mixture of A heavenly assortment of sugary confections:\n";
		cout << "*Gummy Bears\n*Sour Patch Kids\n*Candy Corn\n*Chocolate-Covered Raisins\n*Jelly Beans\n*M&M's\n\n";


        cout << "Enter how many packs: ";
        cin >> variQ2;
        cout << "Sugar Highs : x" << variQ2<< endl;
        varitotalPrice = varitotalPrice + variQuantity * sugarHighs.packCost;
        cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
     }
    else if(variMenu == 3){
		cout << "     ==============================     \n";
		cout << "     |         VariDetails        | \n";
		cout << "     ==============================     \n";
		cout << "Sugar Coated Dreams is a mixture of delightful assortment of sweet indulgences:\n";
		cout << "*Chocolate-Covered Pretzels\n*Marshmallow Bits\n*Toffee Pieces\n*Fruit-Flavored Gummies\n*Coconut Flakes\n*Mini Chocolate Chips\n\n";


        cout << "Enter how many packs: ";
        cin >> variQ3;
        cout << "Sugar Coated Dreams : x" << variQ3 << endl;
        varitotalPrice = varitotalPrice + variQuantity * sugarHighs.packCost;
        cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
    }
    else if(variMenu == 4){
		cout << "     ==============================     \n";
		cout << "     |         VariDetails        | \n";
		cout << "     ==============================     \n";
		cout << "Divine is a mixture of an exquisite blend of sweet delights:\n";
		cout << "*Dark Chocolate Chunks\n*Dried Apricots\n*Toffee Pieces\n*Candied Pecans\n*Milk Chocolate Caramel Bites\n*Cinnamon Sugar Pretzel Bites\n\n";


        cout << "Enter how many packs: ";
        cin >> variQ4;
        cout << "Divine Delicacies : x" << variQ4 << endl;
        varitotalPrice = varitotalPrice + variQuantity * sugarHighs.packCost;
        cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
    }
    else if(variMenu == 5){
		cout << "     ==============================     \n";
		cout << "     |         VariDetails        | \n";
		cout << "     ==============================     \n";
		cout << "Heart Raider is a mixture of an irresistible mix of sweet treats:\n";
		cout << "*Red Velvet Cake Bites\n*Strawberry Yogurt-Covered Pretzels\n*Dark Chocolate Hearts\n*Cherry Licorice Bites\n*White Chocolate Drizzled Popcorn\n*Cinnamon Gummies\n\n";


        cout << "Enter how many packs: ";
        cin >> variQ5;
        cout << "Heart Raider : x" << variQ5 << endl;
        varitotalPrice = varitotalPrice + variQuantity * sugarHighs.packCost;
        cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
    }
    else if(variMenu == 6){
		cout << "     ==============================     \n";
		cout << "     |         VariDetails        | \n";
		cout << "     ==============================     \n";
		cout << "White Soul Sneakers is a mixture of an captivating blend of sweet white treats:\n";
		cout << "*White Chocolate Chips\n*Vanilla Yogurt-Covered Pretzels\n*Coconut Macaroons\n*White Chocolate-Covered Almonds\n*Mini Meringues\n*Marshmallow Bits\n\n";


        cout << "Enter how many packs: ";
        cin >> variQ6;
        cout << "White Soul Sneakers : x" << variQ6 << endl;
        varitotalPrice = varitotalPrice + variQuantity * sugarHighs.packCost;
        cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
    }
    else if(variMenu == 7){
		cout << "     ==============================     \n";
		cout << "     |         VariDetails        | \n";
		cout << "     ==============================     \n";
		cout << "Spicy Little Candy is a mixture of an tantalizing blend of sweet and spicy treats:\n";
		cout << "*Cinnamon Red Hots\n*Spicy Chocolate-Covered Almonds\n*Candied Ginger Pieces\n*Hot Tamales\n*Cinnamon Sugar Pecans\n\n";


        cout << "Enter how many packs: ";
        cin >> variQ7;
        cout << "Spicy Little Candy : x" << variQ7 << endl;
        varitotalPrice = varitotalPrice + variQuantity * sugarHighs.packCost;
       cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
   	}
    else if(variMenu == 8){
		cout << "     ==============================     \n";
		cout << "     |         VariDetails        | \n";
		cout << "     ==============================     \n";
		cout << "G.O.D Pack is a mixture of an heavenly selection of the finest sweet treats:\n";
		cout << "*Gourmet Dark Chocolate Truffles\n*Organic Dried Blueberries\n*Deluxe Caramel Popcorn\n*Artisanal Honey Roasted Nuts\n*Luxury White Chocolate Bark\n*Handmade Toffee Pieces\n\n";


        cout << "Enter how many packs: ";
        cin >> variQ8;
        cout << "G.O.D Pack : x" << variQ8 << endl;
        varitotalPrice = varitotalPrice + variQuantity * sugarHighs.packCost;
        cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
   	}
    else if(variMenu == 9){
		cout << "     ==============================     \n";
		cout << "     |         VariDetails        | \n";
		cout << "     ==============================     \n";
		cout << "El Sigma Dulce Caramelo is a mixture of an sumptuous collection of caramel-infused sweets:\n";
		cout << "*Salted Caramel Popcorn\n*Caramel-Filled Chocolates\n*Caramel-Coated Pretzels\n*Soft Caramel Chews\n*Caramelized Nuts\n\n";


        cout << "Enter how many packs: ";
        cin >> variQ9;
        cout << "El Sigma Dulce Caramelo : x" << variQ9 << endl;
        varitotalPrice = varitotalPrice + variQuantity * sugarHighs.packCost;
        cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
    }
    else if(variMenu == 10){
		cout << "     ==============================     \n";
		cout << "     |         VariDetails        | \n";
		cout << "     ==============================     \n";
		cout << "Des Sucreries m�langer is a mixture of an exquisite assortment of French sweet delicacies:\n";
		cout << "*Financiers\n*Calissons d'Aix\n*Truffes au Chocolat\n*Dragées\n*Nougat de Montélimar\n*Palets Bretons\n\n";


        cout << "Enter how many packs: ";
        cin >> variQ10;
        cout << "Des Sucreries m�langer : x" << variQ10 << endl;
        varitotalPrice = varitotalPrice + variQuantity * sugarHighs.packCost;
        cout << "\nDo you want to make another order? Y/N: ";
			cin >> choice;
					if (choice == 'Y' || choice == 'y'){
						goto again;
					}
					else if(choice == 'N' || choice == 'n'){
						goto payment;
					}
	}
   


payment:
	totalQuantity = variQ1 + variQ2 + variQ3 + variQ4 + variQ5 + variQ6 + variQ7 + variQ8 + variQ9 + variQ10
				+ variQA1 + variQA2 + variQA3 + variQA4 + variQA5 + variQA6 + variQA7 + variQA8 + variQA9 + variQA10
				+variQB1 + variQB2 + variQB3 + variQB4 + variQB5 + variQB6 + variQB7 + variQB8 + variQB9 + variQB10
				+variQC1 + variQC2 + variQC3 + variQC4 + variQC5 + variQC6 + variQC7 + variQC8 + variQC9 + variQC10
				+variQD1 + variQD2 + variQD3 + variQD4 + variQD5 + variQD6 + variQD7 + variQD8 + variQD9 + variQD10
				+variQE1 + variQE2 + variQE3 + variQE4 + variQE5 + variQE6 + variQE7 + variQE8 + variQE9 + variQE10
				+variQF1 + variQF2 + variQF3 + variQF4 + variQF5 + variQF6 + variQF7 + variQF8 + variQF9 + variQF10
				+variQG1 + variQG2 + variQG3 + variQG4 + variQG5 + variQG6 + variQG7 + variQG8 + variQG9 + variQG10
				+variQH1 + variQH2 + variQH3 + variQH4 + variQH5 + variQH6 + variQH7 + variQH8 + variQH9 + variQH10
				+variQI1 + variQI2 + variQI3 + variQI4 + variQI5 + variQI6 + variQI7 + variQI8 + variQI9 + variQI10;
	cout<< "\nTotal Number of Orders: " << 	totalQuantity;
	cout << "\nAmount Per Order: " << "Php" << price;
	cout << "\nTotal Payment: " << "Php" << price * totalQuantity;

again2:
	cout << "\n\nAre you now ready to place your order?\n";
	cout << "     [1] Yes, Proceed to Payment.\n";
	cout << "     [2] No, I have to make another order.\n";
	cout << "     [3] View Cart\n";
	cout << "Enter here: ";
	cin >> cpay;
	
		if(cpay < 1 || cpay > 3){
			cout << "Invalid Choice. Redirecting.";
			goto again2;
		}
		else if(cpay == 1){
			goto porder;
		}
		else if (cpay == 2){
			goto again;
		}
		else if (cpay == 3){
			cout << " \n\t\tShopping Cart\n";
			
	cout << "                             \t\n[Order Details]\n";
	
	cout<<"Name of Item                                  Quantity       Total Price       "<<endl;
        if(variQ1>0)
    cout<<"Delighful Delights                                " <<variQ1<<"             Php"<<variQ1*price<<endl;
        if(variQ2>0)
    cout<<"Sugar Highs                                       " <<variQ2<<"             Php"<<variQ2*price<<endl;
        if(variQ3>0)
    cout<<"Sugar Coated Dreams                               " <<variQ3<<"             Php"<<variQ3*price<<endl;
        if(variQ4>0)
    cout<<"Divine Delicacies                                 " <<variQ4<<"             Php"<<variQ4*price<<endl;
        if(variQ5>0)
    cout<<"Heart Raider                                      " <<variQ5<<"             Php"<<variQ5*price<<endl;
        if(variQ6>0) 
    cout<<"White Soul Sneakers                               " <<variQ6<<"             Php"<<variQ6*price<<endl;
        if(variQ7>0)
    cout<<"Spicy Little Candy                                " <<variQ7<<"             Php"<<variQ7*price<<endl;
        if(variQ8>0)
    cout<<"G.O.D. Pack                                       " <<variQ8<<"             Php"<<variQ8*price<<endl;
        if(variQ9>0) 
    cout<<"El Sigma Dulce Caramelo                           " <<variQ9<<"             Php"<<variQ9*price<<endl;
	    if(variQ10>0)
    cout<<"Des Sucreries m�langer                          " <<variQ10<<"            Php"<<variQ10*price<<endl;
    
	   if(variQA1>0)
    cout<< p1 << " + " << p2 << "                    " <<variQA1<<"             Php"<<variQA1*price<<endl;
        if(variQA2>0)
    cout<< p1 << " + " << p3 << "             " <<variQA2<<"             Php"<<variQA2*price<<endl;
        if(variQA3>0)
    cout<< p1 << " + " << p4 << "                  " <<variQA3<<"             Php"<<variQA3*price<<endl;
        if(variQA4>0)
    cout<<p1 << " + " << p5 << "               " <<variQA4<<"             Php"<<variQA4*price<<endl;
        if(variQA5>0)
    cout<<p1 << " + " << p6 << "                   " <<variQA5<<"             Php"<<variQA5*price<<endl;
        if(variQA6>0) 
    cout<<p1 << " + " << p7 << "                " <<variQA6<<"             Php"<<variQA6*price<<endl;
        if(variQA7>0)
    cout<<p1 << " + " << p8 << "            " <<variQA7<<"             Php"<<variQA7*price<<endl;
        if(variQA8>0)
    cout<<p1 << " + " << p9 << "              " <<variQA8<<"             Php"<<variQA8*price<<endl;
        if(variQA9>0)
    cout<<p1 << " + " << p10 << "                " <<variQA9<<"             Php"<<variQA9*price<<endl;
        if(variQA10>0)
    cout<<p2 << " + " << p3 << "            " <<variQA10<<"             Php"<<variQA10*price<<endl;
        if(variQB1>0)
    cout<<p2 << " + " << p4 << "                 " <<variQB1<<"             Php"<<variQB1*price<<endl;
        if(variQB2>0)
    cout<<p2 << " + " << p5 << "              " <<variQB2<<"             Php"<<variQB2*price<<endl;
        if(variQB3>0)
    cout<<p2 << " + " << p6 << "                  " <<variQB3<<"             Php"<<variQB3*price<<endl;
        if(variQB4>0)
    cout<<p2 << " + " << p7 << "               " <<variQB4<<"             Php"<<variQB4*price<<endl;
        if(variQB5>0)
    cout<<p2 << " + " << p8 << "           " <<variQB5<<"             Php"<<variQB5*price<<endl;
        if(variQB6>0) 
    cout<<p2 << " + " << p9 << "             " <<variQB6<<"             Php"<<variQB6*price<<endl;
        if(variQB7>0)
    cout<<p2 << " + " << p10 << "               " <<variQB7<<"             Php"<<variQB7*price<<endl;
        if(variQB8>0)
    cout<<p3 << " + " << p4 << "          " <<variQB8<<"             Php"<<variQB8*price<<endl;
        if(variQB9>0)
    cout<<p3 << " + " << p5 << "       " <<variQB9<<"             Php"<<variQB9*price<<endl;
        if(variQB10>0)
    cout<<p3 << " + " << p6 << "           " <<variQB10<<"             Php"<<variQB10*price<<endl;
        if(variQC1>0)
    cout<<p3 << " + " << p7 << "        " <<variQC1<<"             Php"<<variQC1*price<<endl;
        if(variQC2>0)
    cout<<p3 << " + " << p8 << "    " <<variQC2<<"             Php"<<variQC2*price<<endl;
        if(variQC3>0)
    cout<<p3 << " + " << p9 << "      " <<variQC3<<"             Php"<<variQC3*price<<endl;
        if(variQC4>0)
    cout<<p3 << " + " << p10 << "        " <<variQC4<<"             Php"<<variQC4*price<<endl;
        if(variQC5>0)
    cout<<p4 << " + " << p5<< "            " <<variQC5<<"             Php"<<variQC5*price<<endl;
        if(variQC6>0) 
    cout<<p4 << " + " << p6 << "                " <<variQC6<<"             Php"<<variQC6*price<<endl;
        if(variQC7>0)
    cout<<p4 << " + " << p7 << "             " <<variQC7<<"             Php"<<variQC7*price<<endl;
        if(variQC8>0)
    cout<<p4 << " + " << p8 << "         " <<variQC8<<"             Php"<<variQC8*price<<endl;
        if(variQC9>0)
    cout<<p4 << " + " << p9 << "           " <<variQC9<<"             Php"<<variQC9*price<<endl;
        if(variQC10>0)
    cout<<p4 << " + " << p10 << "             " <<variQC10<<"             Php"<<variQC10*price<<endl;
        if(variQD1>0)
    cout<<p5 << " + " << p6<< "             " <<variQD1<<"             Php"<<variQD1*price<<endl;
        if(variQD2>0)
    cout<<p5 << " + " << p7 << "          " <<variQD2<<"             Php"<<variQD2*price<<endl;
        if(variQD3>0)
    cout<<p5 << " + " << p8 << "      " <<variQD3<<"             Php"<<variQD3*price<<endl;
        if(variQD4>0)
    cout<<p5 << " + " << p9 << "        " <<variQD4<<"             Php"<<variQD4*price<<endl;
        if(variQD5>0)
    cout<<p5 << " + " << p10 << "          " <<variQD5<<"             Php"<<variQD5*price<<endl;
        if(variQD6>0) 
    cout<<p6 << " + " << p7<< "              " <<variQD6<<"             Php"<<variQD6*price<<endl;
        if(variQD7>0)
    cout<<p6 << " + " << p8 << "          " <<variQD7<<"             Php"<<variQD7*price<<endl;
        if(variQD8>0)
    cout<<p6 << " + " << p9 << "            " <<variQD8<<"             Php"<<variQD8*price<<endl;
        if(variQD9>0)
    cout<<p6 << " + " << p10 << "              " <<variQD9<<"             Php"<<variQD9*price<<endl;
        if(variQD10>0)
    cout<<p7 << " + " << p8<< "       " <<variQD10<<"            Php"<<variQD10*price<<endl;
        if(variQE1>0)
    cout<<p7 << " + " << p9 << "         " <<variQE1<<"             Php"<<variQE1*price<<endl;
        if(variQE2>0)
    cout<<p7 << " + " << p10 << "           " <<variQE2<<"             Php"<<variQE2*price<<endl;
        if(variQE3>0)
    cout<<p8 << " + " << p9<< "     " <<variQE3<<"             Php"<<variQE3*price<<endl;
        if(variQE4>0)
    cout<<p8 << " + " << p10 << "       " <<variQE4<<"             Php"<<variQE4*price<<endl;
        if(variQE5>0)
    cout<<p9 << " + " << p10<< "         " <<variQE5<<"             Php"<<variQE5*price<<endl;
        if(variQE6>0) 
    cout<<p2 << " + " << p1 << "                    " <<variQE6<<"             Php"<<variQE6*price<<endl;
        if(variQE7>0)
    cout<<p3 << " + " << p1 << "             " <<variQE7<<"             Php"<<variQE7*price<<endl;
        if(variQE8>0)
    cout<<p4 << " + " << p1 << "                  " <<variQE8<<"             Php"<<variQE8*price<<endl;
        if(variQE9>0)
    cout<<p5 << " + " << p1 << "               " <<variQE9<<"             Php"<<variQE9*price<<endl;
        if(variQE10>0)
    cout<<p6 << " + " << p1 << "                   " <<variQE10<<"            Php"<<variQE10*price<<endl;
        if(variQF1>0)
    cout<<p7 << " + " << p1 << "                " <<variQF1<<"             Php"<<variQF1*price<<endl;
        if(variQF2>0)
    cout<<p8 << " + " << p1 << "            " <<variQF2<<"             Php"<<variQF2*price<<endl;
        if(variQF3>0)
    cout<<p9 << " + " << p1 << "              " <<variQF3<<"             Php"<<variQF3*price<<endl;
        if(variQF4>0)
    cout<<p10 << " + " << p1 << "                " <<variQF4<<"             Php"<<variQF4*price<<endl;
        if(variQF5>0)
    cout<<p3<< " + " << p2 << "            " <<variQF5<<"             Php"<<variQF5*price<<endl;
        if(variQF6>0) 
    cout<<p4 << " + " << p2 << "                 " <<variQF6<<"             Php"<<variQF6*price<<endl;
        if(variQF7>0)
    cout<<p5 << " + " << p2 << "              " <<variQF7<<"             Php"<<variQF7*price<<endl;
        if(variQF8>0)
    cout<<p6 << " + " << p2 << "                  " <<variQF8<<"             Php"<<variQF8*price<<endl;
        if(variQF9>0)
    cout<<p7 << " + " << p2 << "               " <<variQF9<<"             Php"<<variQF9*price<<endl;
        if(variQF10>0)
    cout<<p8 << " + " << p2 << "           " <<variQF10<<"             Php"<<variQF10*price<<endl;
        if(variQG1>0)
    cout<<p9 << " + " << p2 << "             " <<variQG1<<"             Php"<<variQG1*price<<endl;
        if(variQG2>0)
    cout<<p10 << " + " << p2 << "               " <<variQG2<<"             Php"<<variQG2*price<<endl;
        if(variQG3>0)
    cout<<p4<< " + " << p3 << "          " <<variQG3<<"             Php"<<variQG3*price<<endl;
        if(variQG4>0)
    cout<<p5 << " + " << p3 << "       " <<variQG4<<"             Php"<<variQG4*price<<endl;
        if(variQG5>0)
    cout<<p6 << " + " << p3 << "           " <<variQG5<<"             Php"<<variQG5*price<<endl;
        if(variQG6>0) 
    cout<<p7 << " + " << p3 << "        " <<variQG6<<"             Php"<<variQG6*price<<endl;
        if(variQG7>0)
    cout<<p8 << " + " << p3 << "    " <<variQG7<<"             Php"<<variQG7*price<<endl;
        if(variQG8>0)
    cout<<p9 << " + " << p3 << "      " <<variQG8<<"             Php"<<variQG8*price<<endl;
        if(variQG9>0)
    cout<<p10 << " + " << p3 << "        " <<variQG9<<"             Php"<<variQG9*price<<endl;
        if(variQG10>0)
    cout<<p5<< " + " << p4 << "            " <<variQG10<<"             Php"<<variQG10*price<<endl;
        if(variQH1>0)
    cout<<p6 << " + " << p4 << "                " <<variQH1<<"             Php"<<variQH1*price<<endl;
        if(variQH2>0)
    cout<<p7 << " + " << p4 << "             " <<variQH2<<"             Php"<<variQH2*price<<endl;
        if(variQH3>0)
    cout<<p8 << " + " << p4 << "         " <<variQH3<<"             Php"<<variQH3*price<<endl;
        if(variQH4>0)
    cout<<p9 << " + " << p4 << "           " <<variQH4<<"             Php"<<variQH4*price<<endl;
        if(variQH5>0)
    cout<<p10 << " + " << p4 << "             " <<variQH5<<"             Php"<<variQH5*price<<endl;
        if(variQH6>0) 
    cout<<p6<< " + " << p5 << "             " <<variQH6<<"             Php"<<variQH6*price<<endl;
        if(variQH7>0)
    cout<<p7 << " + " << p5 << "          " <<variQH7<<"             Php"<<variQH7*price<<endl;
        if(variQH8>0)
    cout<<p8 << " + " << p5 << "      " <<variQH8<<"             Php"<<variQH8*price<<endl;
        if(variQH9>0)
    cout<<p9 << " + " << p5 << "        " <<variQH9<<"             Php"<<variQH9*price<<endl;
        if(variQH10>0)
    cout<<p10 << " + " << p5 << "          " <<variQH10<<"             Php"<<variQH10*price<<endl;
        if(variQI1>0)
    cout<<p7 << " + " << p6 << "              " <<variQI1<<"             Php"<<variQI1*price<<endl;
        if(variQI2>0)
    cout<<p8 << " + " << p6 << "          " <<variQI2<<"             Php"<<variQI2*price<<endl;
        if(variQI3>0)
    cout<<p9 << " + " << p6 << "            " <<variQI3<<"             Php"<<variQI3*price<<endl;
        if(variQI4>0)
    cout<<p10 << " + " << p6 << "              " <<variQI4<<"             Php"<<variQI4*price<<endl;
        if(variQI5>0)
    cout<<p8 << " + " << p7 << "       " <<variQI5<<"             Php"<<variQI5*price<<endl;
        if(variQI6>0) 
    cout<<p9 << " + " << p7 << "         " <<variQI6<<"             Php"<<variQI6*price<<endl;
        if(variQI7>0)
    cout<<p10 << " + " << p7 << "           " <<variQI7<<"             Php"<<variQI7*price<<endl;
        if(variQI8>0)
    cout<<p9<< " + " << p8 << "     " <<variQI8<<"             Php"<<variQI8*price<<endl;
        if(variQI9>0)
    cout<<p10 << " + " << p8 << "       " <<variQI9<<"             Php"<<variQI9*price<<endl;
        if(variQI10>0)
    cout<<p10 << " + " << p9 << "         " <<variQI10<<"             Php"<<variQI10*price<<endl;    
	
    cout<< "\nTotal Number of Orders: " << 	totalQuantity;
	cout << "\nTotal Payment: " << "Php" << price * totalQuantity;
        
	cout << "   \n\n[1] Place Order";
	cout << "   \n[2] Back to Menu";
	cout << "\nEnter: ";
	cin >> cart1;
		if (cart1 == 2){
			goto again;
		}		
		
		else if (cart1 == 1){
			goto MOP;
		}
		
		}

porder:
	cout << "   \n\n[1] Place Order";
	cout << "   \n[2] Cancel Order";
	cout << "\nEnter: ";
	cin >> opay;
		if (opay == 2){
			cout << "     [1] Exit\n";
			cout << "     [2] Display Menu\n";
			cout << "Enter: ";
			cin >> opay2;
				if (opay2 == 1){
					return 0;
				}	
				else if (opay2 == 2){
					goto variPacks;
				}		
		}
		else if (opay == 1){
			goto MOP;
		}
    
MOP:	
	cout << "\n\nChoose Method of Payment:\n ";
	cout << "     [1] E-Payment (Gcash)\n";
	cout << "      [2] Cash on Delivery ";
	cout << "\nEnter: ";
	cin >> mop;
		if (mop == 1){
			goto trans;
		}
		else if (mop == 2){
			goto trans2;
		}
		

    
trans:
	cout << "\nVarimix and Bits Order Transaction\n";  
	
	cout<< "\nTotal Number of Orders: " << 	totalQuantity;
	cout << "\nAmount Per Order: " << "Php" << price;
	cout << "\nTotal Payment: " << "Php" << price * totalQuantity;
	
	cout << "\n\nCustomer's Name: ";
	cin >> name;
	cout << "Address: ";
	cin >> addr;
	cout << "Contact Number: ";
	cin >> no;
	cout << "Confirm Order. Y/N: ";
	cin >> corder;
	if (corder == 'Y' || corder == 'y'){
receipt:	
		cout << "   \n+++Varimix and Bits Order Receipt+++\n"; 
	 
	cout << "\nCustomer's Name: " << name;
	cout << "\nAddress: " << addr;
	cout << "\nContact Number: +63" << no;
	cout << "                             \t\n[Order Details]\n";
	
	cout<<"Name of Item                                  Quantity       Total Price       "<<endl;
        if(variQ1>0)
    cout<<"Delighful Delights                                " <<variQ1<<"             Php"<<variQ1*price<<endl;
        if(variQ2>0)
    cout<<"Sugar Highs                                       " <<variQ2<<"             Php"<<variQ2*price<<endl;
        if(variQ3>0)
    cout<<"Sugar Coated Dreams                               " <<variQ3<<"             Php"<<variQ3*price<<endl;
        if(variQ4>0)
    cout<<"Divine Delicacies                                 " <<variQ4<<"             Php"<<variQ4*price<<endl;
        if(variQ5>0)
    cout<<"Heart Raider                                      " <<variQ5<<"             Php"<<variQ5*price<<endl;
        if(variQ6>0) 
    cout<<"White Soul Sneakers                               " <<variQ6<<"             Php"<<variQ6*price<<endl;
        if(variQ7>0)
    cout<<"Spicy Little Candy                                " <<variQ7<<"             Php"<<variQ7*price<<endl;
        if(variQ8>0)
    cout<<"G.O.D. Pack                                       " <<variQ8<<"             Php"<<variQ8*price<<endl;
        if(variQ9>0) 
    cout<<"El Sigma Dulce Caramelo                           " <<variQ9<<"             Php"<<variQ9*price<<endl;
	    if(variQ10>0)
    cout<<"Des Sucreries m�langer                          " <<variQ10<<"            Php"<<variQ10*price<<endl;
    
	   if(variQA1>0)
    cout<< p1 << " + " << p2 << "                    " <<variQA1<<"             Php"<<variQA1*price<<endl;
        if(variQA2>0)
    cout<< p1 << " + " << p3 << "             " <<variQA2<<"             Php"<<variQA2*price<<endl;
        if(variQA3>0)
    cout<< p1 << " + " << p4 << "                  " <<variQA3<<"             Php"<<variQA3*price<<endl;
        if(variQA4>0)
    cout<<p1 << " + " << p5 << "               " <<variQA4<<"             Php"<<variQA4*price<<endl;
        if(variQA5>0)
    cout<<p1 << " + " << p6 << "                   " <<variQA5<<"             Php"<<variQA5*price<<endl;
        if(variQA6>0) 
    cout<<p1 << " + " << p7 << "                " <<variQA6<<"             Php"<<variQA6*price<<endl;
        if(variQA7>0)
    cout<<p1 << " + " << p8 << "            " <<variQA7<<"             Php"<<variQA7*price<<endl;
        if(variQA8>0)
    cout<<p1 << " + " << p9 << "              " <<variQA8<<"             Php"<<variQA8*price<<endl;
        if(variQA9>0)
    cout<<p1 << " + " << p10 << "                " <<variQA9<<"             Php"<<variQA9*price<<endl;
        if(variQA10>0)
    cout<<p2 << " + " << p3 << "            " <<variQA10<<"             Php"<<variQA10*price<<endl;
        if(variQB1>0)
    cout<<p2 << " + " << p4 << "                 " <<variQB1<<"             Php"<<variQB1*price<<endl;
        if(variQB2>0)
    cout<<p2 << " + " << p5 << "              " <<variQB2<<"             Php"<<variQB2*price<<endl;
        if(variQB3>0)
    cout<<p2 << " + " << p6 << "                  " <<variQB3<<"             Php"<<variQB3*price<<endl;
        if(variQB4>0)
    cout<<p2 << " + " << p7 << "               " <<variQB4<<"             Php"<<variQB4*price<<endl;
        if(variQB5>0)
    cout<<p2 << " + " << p8 << "           " <<variQB5<<"             Php"<<variQB5*price<<endl;
        if(variQB6>0) 
    cout<<p2 << " + " << p9 << "             " <<variQB6<<"             Php"<<variQB6*price<<endl;
        if(variQB7>0)
    cout<<p2 << " + " << p10 << "               " <<variQB7<<"             Php"<<variQB7*price<<endl;
        if(variQB8>0)
    cout<<p3 << " + " << p4 << "          " <<variQB8<<"             Php"<<variQB8*price<<endl;
        if(variQB9>0)
    cout<<p3 << " + " << p5 << "       " <<variQB9<<"             Php"<<variQB9*price<<endl;
        if(variQB10>0)
    cout<<p3 << " + " << p6 << "           " <<variQB10<<"             Php"<<variQB10*price<<endl;
        if(variQC1>0)
    cout<<p3 << " + " << p7 << "        " <<variQC1<<"             Php"<<variQC1*price<<endl;
        if(variQC2>0)
    cout<<p3 << " + " << p8 << "    " <<variQC2<<"             Php"<<variQC2*price<<endl;
        if(variQC3>0)
    cout<<p3 << " + " << p9 << "      " <<variQC3<<"             Php"<<variQC3*price<<endl;
        if(variQC4>0)
    cout<<p3 << " + " << p10 << "        " <<variQC4<<"             Php"<<variQC4*price<<endl;
        if(variQC5>0)
    cout<<p4 << " + " << p5<< "            " <<variQC5<<"             Php"<<variQC5*price<<endl;
        if(variQC6>0) 
    cout<<p4 << " + " << p6 << "                " <<variQC6<<"             Php"<<variQC6*price<<endl;
        if(variQC7>0)
    cout<<p4 << " + " << p7 << "             " <<variQC7<<"             Php"<<variQC7*price<<endl;
        if(variQC8>0)
    cout<<p4 << " + " << p8 << "         " <<variQC8<<"             Php"<<variQC8*price<<endl;
        if(variQC9>0)
    cout<<p4 << " + " << p9 << "           " <<variQC9<<"             Php"<<variQC9*price<<endl;
        if(variQC10>0)
    cout<<p4 << " + " << p10 << "             " <<variQC10<<"             Php"<<variQC10*price<<endl;
        if(variQD1>0)
    cout<<p5 << " + " << p6<< "             " <<variQD1<<"             Php"<<variQD1*price<<endl;
        if(variQD2>0)
    cout<<p5 << " + " << p7 << "          " <<variQD2<<"             Php"<<variQD2*price<<endl;
        if(variQD3>0)
    cout<<p5 << " + " << p8 << "      " <<variQD3<<"             Php"<<variQD3*price<<endl;
        if(variQD4>0)
    cout<<p5 << " + " << p9 << "        " <<variQD4<<"             Php"<<variQD4*price<<endl;
        if(variQD5>0)
    cout<<p5 << " + " << p10 << "          " <<variQD5<<"             Php"<<variQD5*price<<endl;
        if(variQD6>0) 
    cout<<p6 << " + " << p7<< "              " <<variQD6<<"             Php"<<variQD6*price<<endl;
        if(variQD7>0)
    cout<<p6 << " + " << p8 << "          " <<variQD7<<"             Php"<<variQD7*price<<endl;
        if(variQD8>0)
    cout<<p6 << " + " << p9 << "            " <<variQD8<<"             Php"<<variQD8*price<<endl;
        if(variQD9>0)
    cout<<p6 << " + " << p10 << "              " <<variQD9<<"             Php"<<variQD9*price<<endl;
        if(variQD10>0)
    cout<<p7 << " + " << p8<< "       " <<variQD10<<"            Php"<<variQD10*price<<endl;
        if(variQE1>0)
    cout<<p7 << " + " << p9 << "         " <<variQE1<<"             Php"<<variQE1*price<<endl;
        if(variQE2>0)
    cout<<p7 << " + " << p10 << "           " <<variQE2<<"             Php"<<variQE2*price<<endl;
        if(variQE3>0)
    cout<<p8 << " + " << p9<< "     " <<variQE3<<"             Php"<<variQE3*price<<endl;
        if(variQE4>0)
    cout<<p8 << " + " << p10 << "       " <<variQE4<<"             Php"<<variQE4*price<<endl;
        if(variQE5>0)
    cout<<p9 << " + " << p10<< "         " <<variQE5<<"             Php"<<variQE5*price<<endl;
        if(variQE6>0) 
    cout<<p2 << " + " << p1 << "                    " <<variQE6<<"             Php"<<variQE6*price<<endl;
        if(variQE7>0)
    cout<<p3 << " + " << p1 << "             " <<variQE7<<"             Php"<<variQE7*price<<endl;
        if(variQE8>0)
    cout<<p4 << " + " << p1 << "                  " <<variQE8<<"             Php"<<variQE8*price<<endl;
        if(variQE9>0)
    cout<<p5 << " + " << p1 << "               " <<variQE9<<"             Php"<<variQE9*price<<endl;
        if(variQE10>0)
    cout<<p6 << " + " << p1 << "                   " <<variQE10<<"            Php"<<variQE10*price<<endl;
        if(variQF1>0)
    cout<<p7 << " + " << p1 << "                " <<variQF1<<"             Php"<<variQF1*price<<endl;
        if(variQF2>0)
    cout<<p8 << " + " << p1 << "            " <<variQF2<<"             Php"<<variQF2*price<<endl;
        if(variQF3>0)
    cout<<p9 << " + " << p1 << "              " <<variQF3<<"             Php"<<variQF3*price<<endl;
        if(variQF4>0)
    cout<<p10 << " + " << p1 << "                " <<variQF4<<"             Php"<<variQF4*price<<endl;
        if(variQF5>0)
    cout<<p3<< " + " << p2 << "            " <<variQF5<<"             Php"<<variQF5*price<<endl;
        if(variQF6>0) 
    cout<<p4 << " + " << p2 << "                 " <<variQF6<<"             Php"<<variQF6*price<<endl;
        if(variQF7>0)
    cout<<p5 << " + " << p2 << "              " <<variQF7<<"             Php"<<variQF7*price<<endl;
        if(variQF8>0)
    cout<<p6 << " + " << p2 << "                  " <<variQF8<<"             Php"<<variQF8*price<<endl;
        if(variQF9>0)
    cout<<p7 << " + " << p2 << "               " <<variQF9<<"             Php"<<variQF9*price<<endl;
        if(variQF10>0)
    cout<<p8 << " + " << p2 << "           " <<variQF10<<"             Php"<<variQF10*price<<endl;
        if(variQG1>0)
    cout<<p9 << " + " << p2 << "             " <<variQG1<<"             Php"<<variQG1*price<<endl;
        if(variQG2>0)
    cout<<p10 << " + " << p2 << "               " <<variQG2<<"             Php"<<variQG2*price<<endl;
        if(variQG3>0)
    cout<<p4<< " + " << p3 << "          " <<variQG3<<"             Php"<<variQG3*price<<endl;
        if(variQG4>0)
    cout<<p5 << " + " << p3 << "       " <<variQG4<<"             Php"<<variQG4*price<<endl;
        if(variQG5>0)
    cout<<p6 << " + " << p3 << "           " <<variQG5<<"             Php"<<variQG5*price<<endl;
        if(variQG6>0) 
    cout<<p7 << " + " << p3 << "        " <<variQG6<<"             Php"<<variQG6*price<<endl;
        if(variQG7>0)
    cout<<p8 << " + " << p3 << "    " <<variQG7<<"             Php"<<variQG7*price<<endl;
        if(variQG8>0)
    cout<<p9 << " + " << p3 << "      " <<variQG8<<"             Php"<<variQG8*price<<endl;
        if(variQG9>0)
    cout<<p10 << " + " << p3 << "        " <<variQG9<<"             Php"<<variQG9*price<<endl;
        if(variQG10>0)
    cout<<p5<< " + " << p4 << "            " <<variQG10<<"             Php"<<variQG10*price<<endl;
        if(variQH1>0)
    cout<<p6 << " + " << p4 << "                " <<variQH1<<"             Php"<<variQH1*price<<endl;
        if(variQH2>0)
    cout<<p7 << " + " << p4 << "             " <<variQH2<<"             Php"<<variQH2*price<<endl;
        if(variQH3>0)
    cout<<p8 << " + " << p4 << "         " <<variQH3<<"             Php"<<variQH3*price<<endl;
        if(variQH4>0)
    cout<<p9 << " + " << p4 << "           " <<variQH4<<"             Php"<<variQH4*price<<endl;
        if(variQH5>0)
    cout<<p10 << " + " << p4 << "             " <<variQH5<<"             Php"<<variQH5*price<<endl;
        if(variQH6>0) 
    cout<<p6<< " + " << p5 << "             " <<variQH6<<"             Php"<<variQH6*price<<endl;
        if(variQH7>0)
    cout<<p7 << " + " << p5 << "          " <<variQH7<<"             Php"<<variQH7*price<<endl;
        if(variQH8>0)
    cout<<p8 << " + " << p5 << "      " <<variQH8<<"             Php"<<variQH8*price<<endl;
        if(variQH9>0)
    cout<<p9 << " + " << p5 << "        " <<variQH9<<"             Php"<<variQH9*price<<endl;
        if(variQH10>0)
    cout<<p10 << " + " << p5 << "          " <<variQH10<<"             Php"<<variQH10*price<<endl;
        if(variQI1>0)
    cout<<p7 << " + " << p6 << "              " <<variQI1<<"             Php"<<variQI1*price<<endl;
        if(variQI2>0)
    cout<<p8 << " + " << p6 << "          " <<variQI2<<"             Php"<<variQI2*price<<endl;
        if(variQI3>0)
    cout<<p9 << " + " << p6 << "            " <<variQI3<<"             Php"<<variQI3*price<<endl;
        if(variQI4>0)
    cout<<p10 << " + " << p6 << "              " <<variQI4<<"             Php"<<variQI4*price<<endl;
        if(variQI5>0)
    cout<<p8 << " + " << p7 << "       " <<variQI5<<"             Php"<<variQI5*price<<endl;
        if(variQI6>0) 
    cout<<p9 << " + " << p7 << "         " <<variQI6<<"             Php"<<variQI6*price<<endl;
        if(variQI7>0)
    cout<<p10 << " + " << p7 << "           " <<variQI7<<"             Php"<<variQI7*price<<endl;
        if(variQI8>0)
    cout<<p9<< " + " << p8 << "     " <<variQI8<<"             Php"<<variQI8*price<<endl;
        if(variQI9>0)
    cout<<p10 << " + " << p8 << "       " <<variQI9<<"             Php"<<variQI9*price<<endl;
        if(variQI10>0)
    cout<<p10 << " + " << p9 << "         " <<variQI10<<"             Php"<<variQI10*price<<endl;    
	   
	
    cout<< "\nTotal Number of Orders: " << 	totalQuantity;
	cout << "\nTotal Payment: " << "Php" << price * totalQuantity;
        
	cout << "                  Payment: Gcash\n\n";
		cout << "        You've Ordered Successfully!\n";
	cout << "         Your order is on its Way\n";
	cout << "      You'll Receive an Update through SMS\n";
	cout << "                                              ";

	time_t now = time(0);
	char*dt = ctime(&now);
	return 0;	
		
	}
	else if (corder == 'N' || corder == 'n'){
		cout << "   \n\n[1] Place Order";
		cout << "   \n[2] Cancel Order";
		cout << "\nEnter: ";
		cin >> opay;
		if (opay == 2){
			cout << "     [1] Exit\n";
			cout << "     [2] Display Menu\n";
			cout << "Enter: ";
			cin >> opay2;
				if (opay2 == 1){
					return 0;
				}	
				else if (opay2 == 2){
					goto variPacks;
				}		
		}
		else if (opay == 1){
			goto MOP;
		}
	}
	
		
trans2: 
	cout << "Varimix and Bits Order Transaction\n"; 
	cout<< "\nTotal Number of Orders: " << 	totalQuantity;
	cout << "\nAmount Per Order: " << "Php" << price;
	cout << "\nTotal Payment: " << "Php" << price * totalQuantity;  
	cout << "Varimix and Bits Order Transaction";  
	cout << "\n\nCustomer's Name: ";
	getline(cin,name);
	cout << "\nAddress: ";
	getline(cin,addr);
	cout << "\nContact Number: ";
	cin >> no;
	cout << "\nConfirm Order. Y/N: ";
	cin >> corder;
	if (corder == 'Y' || corder == 'y'){
		
receipt2:		
		cout << "   \n+++Varimix and Bits Order Receipt+++\n"; 
	 
	cout << "\nCustomer's Name: " << name;
	cout << "\nAddress: " << addr;
	cout << "\nContact Number: +63" << no;
	cout << "                             \t\n[Order Details]\n";
	
	cout<<"Name of Item                                  Quantity       Total Price       "<<endl;
        if(variQ1>0)
    cout<<"Delighful Delights                                " <<variQ1<<"             Php"<<variQ1*price<<endl;
        if(variQ2>0)
    cout<<"Sugar Highs                                       " <<variQ2<<"             Php"<<variQ2*price<<endl;
        if(variQ3>0)
    cout<<"Sugar Coated Dreams                               " <<variQ3<<"             Php"<<variQ3*price<<endl;
        if(variQ4>0)
    cout<<"Divine Delicacies                                 " <<variQ4<<"             Php"<<variQ4*price<<endl;
        if(variQ5>0)
    cout<<"Heart Raider                                      " <<variQ5<<"             Php"<<variQ5*price<<endl;
        if(variQ6>0) 
    cout<<"White Soul Sneakers                               " <<variQ6<<"             Php"<<variQ6*price<<endl;
        if(variQ7>0)
    cout<<"Spicy Little Candy                                " <<variQ7<<"             Php"<<variQ7*price<<endl;
        if(variQ8>0)
    cout<<"G.O.D. Pack                                       " <<variQ8<<"             Php"<<variQ8*price<<endl;
        if(variQ9>0) 
    cout<<"El Sigma Dulce Caramelo                           " <<variQ9<<"             Php"<<variQ9*price<<endl;
	    if(variQ10>0)
    cout<<"Des Sucreries m�langer                          " <<variQ10<<"            Php"<<variQ10*price<<endl;
    
	   if(variQA1>0)
    cout<< p1 << " + " << p2 << "                    " <<variQA1<<"             Php"<<variQA1*price<<endl;
        if(variQA2>0)
    cout<< p1 << " + " << p3 << "             " <<variQA2<<"             Php"<<variQA2*price<<endl;
        if(variQA3>0)
    cout<< p1 << " + " << p4 << "                  " <<variQA3<<"             Php"<<variQA3*price<<endl;
        if(variQA4>0)
    cout<<p1 << " + " << p5 << "               " <<variQA4<<"             Php"<<variQA4*price<<endl;
        if(variQA5>0)
    cout<<p1 << " + " << p6 << "                   " <<variQA5<<"             Php"<<variQA5*price<<endl;
        if(variQA6>0) 
    cout<<p1 << " + " << p7 << "                " <<variQA6<<"             Php"<<variQA6*price<<endl;
        if(variQA7>0)
    cout<<p1 << " + " << p8 << "            " <<variQA7<<"             Php"<<variQA7*price<<endl;
        if(variQA8>0)
    cout<<p1 << " + " << p9 << "              " <<variQA8<<"             Php"<<variQA8*price<<endl;
        if(variQA9>0)
    cout<<p1 << " + " << p10 << "                " <<variQA9<<"             Php"<<variQA9*price<<endl;
        if(variQA10>0)
    cout<<p2 << " + " << p3 << "            " <<variQA10<<"             Php"<<variQA10*price<<endl;
        if(variQB1>0)
    cout<<p2 << " + " << p4 << "                 " <<variQB1<<"             Php"<<variQB1*price<<endl;
        if(variQB2>0)
    cout<<p2 << " + " << p5 << "              " <<variQB2<<"             Php"<<variQB2*price<<endl;
        if(variQB3>0)
    cout<<p2 << " + " << p6 << "                  " <<variQB3<<"             Php"<<variQB3*price<<endl;
        if(variQB4>0)
    cout<<p2 << " + " << p7 << "               " <<variQB4<<"             Php"<<variQB4*price<<endl;
        if(variQB5>0)
    cout<<p2 << " + " << p8 << "           " <<variQB5<<"             Php"<<variQB5*price<<endl;
        if(variQB6>0) 
    cout<<p2 << " + " << p9 << "             " <<variQB6<<"             Php"<<variQB6*price<<endl;
        if(variQB7>0)
    cout<<p2 << " + " << p10 << "               " <<variQB7<<"             Php"<<variQB7*price<<endl;
        if(variQB8>0)
    cout<<p3 << " + " << p4 << "          " <<variQB8<<"             Php"<<variQB8*price<<endl;
        if(variQB9>0)
    cout<<p3 << " + " << p5 << "       " <<variQB9<<"             Php"<<variQB9*price<<endl;
        if(variQB10>0)
    cout<<p3 << " + " << p6 << "           " <<variQB10<<"             Php"<<variQB10*price<<endl;
        if(variQC1>0)
    cout<<p3 << " + " << p7 << "        " <<variQC1<<"             Php"<<variQC1*price<<endl;
        if(variQC2>0)
    cout<<p3 << " + " << p8 << "    " <<variQC2<<"             Php"<<variQC2*price<<endl;
        if(variQC3>0)
    cout<<p3 << " + " << p9 << "      " <<variQC3<<"             Php"<<variQC3*price<<endl;
        if(variQC4>0)
    cout<<p3 << " + " << p10 << "        " <<variQC4<<"             Php"<<variQC4*price<<endl;
        if(variQC5>0)
    cout<<p4 << " + " << p5<< "            " <<variQC5<<"             Php"<<variQC5*price<<endl;
        if(variQC6>0) 
    cout<<p4 << " + " << p6 << "                " <<variQC6<<"             Php"<<variQC6*price<<endl;
        if(variQC7>0)
    cout<<p4 << " + " << p7 << "             " <<variQC7<<"             Php"<<variQC7*price<<endl;
        if(variQC8>0)
    cout<<p4 << " + " << p8 << "         " <<variQC8<<"             Php"<<variQC8*price<<endl;
        if(variQC9>0)
    cout<<p4 << " + " << p9 << "           " <<variQC9<<"             Php"<<variQC9*price<<endl;
        if(variQC10>0)
    cout<<p4 << " + " << p10 << "             " <<variQC10<<"             Php"<<variQC10*price<<endl;
        if(variQD1>0)
    cout<<p5 << " + " << p6<< "             " <<variQD1<<"             Php"<<variQD1*price<<endl;
        if(variQD2>0)
    cout<<p5 << " + " << p7 << "          " <<variQD2<<"             Php"<<variQD2*price<<endl;
        if(variQD3>0)
    cout<<p5 << " + " << p8 << "      " <<variQD3<<"             Php"<<variQD3*price<<endl;
        if(variQD4>0)
    cout<<p5 << " + " << p9 << "        " <<variQD4<<"             Php"<<variQD4*price<<endl;
        if(variQD5>0)
    cout<<p5 << " + " << p10 << "          " <<variQD5<<"             Php"<<variQD5*price<<endl;
        if(variQD6>0) 
    cout<<p6 << " + " << p7<< "              " <<variQD6<<"             Php"<<variQD6*price<<endl;
        if(variQD7>0)
    cout<<p6 << " + " << p8 << "          " <<variQD7<<"             Php"<<variQD7*price<<endl;
        if(variQD8>0)
    cout<<p6 << " + " << p9 << "            " <<variQD8<<"             Php"<<variQD8*price<<endl;
        if(variQD9>0)
    cout<<p6 << " + " << p10 << "              " <<variQD9<<"             Php"<<variQD9*price<<endl;
        if(variQD10>0)
    cout<<p7 << " + " << p8<< "       " <<variQD10<<"            Php"<<variQD10*price<<endl;
        if(variQE1>0)
    cout<<p7 << " + " << p9 << "         " <<variQE1<<"             Php"<<variQE1*price<<endl;
        if(variQE2>0)
    cout<<p7 << " + " << p10 << "           " <<variQE2<<"             Php"<<variQE2*price<<endl;
        if(variQE3>0)
    cout<<p8 << " + " << p9<< "     " <<variQE3<<"             Php"<<variQE3*price<<endl;
        if(variQE4>0)
    cout<<p8 << " + " << p10 << "       " <<variQE4<<"             Php"<<variQE4*price<<endl;
        if(variQE5>0)
    cout<<p9 << " + " << p10<< "         " <<variQE5<<"             Php"<<variQE5*price<<endl;
        if(variQE6>0) 
    cout<<p2 << " + " << p1 << "                    " <<variQE6<<"             Php"<<variQE6*price<<endl;
        if(variQE7>0)
    cout<<p3 << " + " << p1 << "             " <<variQE7<<"             Php"<<variQE7*price<<endl;
        if(variQE8>0)
    cout<<p4 << " + " << p1 << "                  " <<variQE8<<"             Php"<<variQE8*price<<endl;
        if(variQE9>0)
    cout<<p5 << " + " << p1 << "               " <<variQE9<<"             Php"<<variQE9*price<<endl;
        if(variQE10>0)
    cout<<p6 << " + " << p1 << "                   " <<variQE10<<"            Php"<<variQE10*price<<endl;
        if(variQF1>0)
    cout<<p7 << " + " << p1 << "                " <<variQF1<<"             Php"<<variQF1*price<<endl;
        if(variQF2>0)
    cout<<p8 << " + " << p1 << "            " <<variQF2<<"             Php"<<variQF2*price<<endl;
        if(variQF3>0)
    cout<<p9 << " + " << p1 << "              " <<variQF3<<"             Php"<<variQF3*price<<endl;
        if(variQF4>0)
    cout<<p10 << " + " << p1 << "                " <<variQF4<<"             Php"<<variQF4*price<<endl;
        if(variQF5>0)
    cout<<p3<< " + " << p2 << "            " <<variQF5<<"             Php"<<variQF5*price<<endl;
        if(variQF6>0) 
    cout<<p4 << " + " << p2 << "                 " <<variQF6<<"             Php"<<variQF6*price<<endl;
        if(variQF7>0)
    cout<<p5 << " + " << p2 << "              " <<variQF7<<"             Php"<<variQF7*price<<endl;
        if(variQF8>0)
    cout<<p6 << " + " << p2 << "                  " <<variQF8<<"             Php"<<variQF8*price<<endl;
        if(variQF9>0)
    cout<<p7 << " + " << p2 << "               " <<variQF9<<"             Php"<<variQF9*price<<endl;
        if(variQF10>0)
    cout<<p8 << " + " << p2 << "           " <<variQF10<<"             Php"<<variQF10*price<<endl;
        if(variQG1>0)
    cout<<p9 << " + " << p2 << "             " <<variQG1<<"             Php"<<variQG1*price<<endl;
        if(variQG2>0)
    cout<<p10 << " + " << p2 << "               " <<variQG2<<"             Php"<<variQG2*price<<endl;
        if(variQG3>0)
    cout<<p4<< " + " << p3 << "          " <<variQG3<<"             Php"<<variQG3*price<<endl;
        if(variQG4>0)
    cout<<p5 << " + " << p3 << "       " <<variQG4<<"             Php"<<variQG4*price<<endl;
        if(variQG5>0)
    cout<<p6 << " + " << p3 << "           " <<variQG5<<"             Php"<<variQG5*price<<endl;
        if(variQG6>0) 
    cout<<p7 << " + " << p3 << "        " <<variQG6<<"             Php"<<variQG6*price<<endl;
        if(variQG7>0)
    cout<<p8 << " + " << p3 << "    " <<variQG7<<"             Php"<<variQG7*price<<endl;
        if(variQG8>0)
    cout<<p9 << " + " << p3 << "      " <<variQG8<<"             Php"<<variQG8*price<<endl;
        if(variQG9>0)
    cout<<p10 << " + " << p3 << "        " <<variQG9<<"             Php"<<variQG9*price<<endl;
        if(variQG10>0)
    cout<<p5<< " + " << p4 << "            " <<variQG10<<"             Php"<<variQG10*price<<endl;
        if(variQH1>0)
    cout<<p6 << " + " << p4 << "                " <<variQH1<<"             Php"<<variQH1*price<<endl;
        if(variQH2>0)
    cout<<p7 << " + " << p4 << "             " <<variQH2<<"             Php"<<variQH2*price<<endl;
        if(variQH3>0)
    cout<<p8 << " + " << p4 << "         " <<variQH3<<"             Php"<<variQH3*price<<endl;
        if(variQH4>0)
    cout<<p9 << " + " << p4 << "           " <<variQH4<<"             Php"<<variQH4*price<<endl;
        if(variQH5>0)
    cout<<p10 << " + " << p4 << "             " <<variQH5<<"             Php"<<variQH5*price<<endl;
        if(variQH6>0) 
    cout<<p6<< " + " << p5 << "             " <<variQH6<<"             Php"<<variQH6*price<<endl;
        if(variQH7>0)
    cout<<p7 << " + " << p5 << "          " <<variQH7<<"             Php"<<variQH7*price<<endl;
        if(variQH8>0)
    cout<<p8 << " + " << p5 << "      " <<variQH8<<"             Php"<<variQH8*price<<endl;
        if(variQH9>0)
    cout<<p9 << " + " << p5 << "        " <<variQH9<<"             Php"<<variQH9*price<<endl;
        if(variQH10>0)
    cout<<p10 << " + " << p5 << "          " <<variQH10<<"             Php"<<variQH10*price<<endl;
        if(variQI1>0)
    cout<<p7 << " + " << p6 << "              " <<variQI1<<"             Php"<<variQI1*price<<endl;
        if(variQI2>0)
    cout<<p8 << " + " << p6 << "          " <<variQI2<<"             Php"<<variQI2*price<<endl;
        if(variQI3>0)
    cout<<p9 << " + " << p6 << "            " <<variQI3<<"             Php"<<variQI3*price<<endl;
        if(variQI4>0)
    cout<<p10 << " + " << p6 << "              " <<variQI4<<"             Php"<<variQI4*price<<endl;
        if(variQI5>0)
    cout<<p8 << " + " << p7 << "       " <<variQI5<<"             Php"<<variQI5*price<<endl;
        if(variQI6>0) 
    cout<<p9 << " + " << p7 << "         " <<variQI6<<"             Php"<<variQI6*price<<endl;
        if(variQI7>0)
    cout<<p10 << " + " << p7 << "           " <<variQI7<<"             Php"<<variQI7*price<<endl;
        if(variQI8>0)
    cout<<p9<< " + " << p8 << "     " <<variQI8<<"             Php"<<variQI8*price<<endl;
        if(variQI9>0)
    cout<<p10 << " + " << p8 << "       " <<variQI9<<"             Php"<<variQI9*price<<endl;
        if(variQI10>0)
    cout<<p10 << " + " << p9 << "         " <<variQI10<<"             Php"<<variQI10*price<<endl;    
	
	
    cout<< "\nTotal Number of Orders: " << 	totalQuantity;
	cout << "\nTotal Payment: " << "Php" << price * totalQuantity;
        
	cout << "                  Payment: Cash on Delivery\n\n";
	cout << "        You've Ordered Successfully!\n";
	cout << "         Your order is on its Way\n";
	cout << "      You'll Receive an Update through SMS\n";
	cout << "                                              ";

	time_t now = time(0);
	char*dt = ctime(&now);
	return 0;	
	}
	else if (corder == 'N' || corder == 'n'){
		cout << "   \n\n[1] Place Order";
		cout << "   \n[2] Cancel Order";
		cout << "\nEnter: ";
		cin >> opay;
		if (opay == 2){
			cout << "     [1] Exit\n";
			cout << "     [2] Display Menu\n";
			cout << "Enter: ";
			cin >> opay2;
				if (opay2 == 1){
					return 0;
				}	
				else if (opay2 == 2){
					goto variPacks;
				}		
		}
		else if (opay == 1){
			goto MOP;
		}
	}
	
}
    
}
    
        
