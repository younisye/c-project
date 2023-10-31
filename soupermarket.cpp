#include <iostream>

#include <string>

#include <fstream>

using namespace std;



struct Item {  // Structure for item details

    string name;

    int quantity;

       double price;

};

 

// Function to add item in the file

    void addItem(Item item) {  // Function to add item in the file

    ofstream outfile; // Create object of ofstream class to open a file in output mode. 

    outfile.open("item.txt", ios::app); // Open a file in append mode. 

    outfile << item.name << " " << item.quantity << " " << item.price << endl;
				 // Write data into the file. 

    outfile.close(); // Close the file stream object.  
				   }

// Function to edit an existing item in the file
  void editItem(string name, Item newItem)
		 {
			   ifstream infile;
     ofstream tempfile;   
     infile.open("item.txt");
     tempfile.open("tempitem.txt");  
     string line;   
     while (getline(infile, line)) 
					{
			 string tempName = line.substr(0, line.find(' '));  
    if (tempName == name)
				 {
     tempfile << newItem.name<<" "<< newItem.quantity<<" "<< newItem.price << endl;
     } 
					else
				 {
     tempfile << line << endl; 
     }
     } 
     infile.close(); 
     tempfile.close();   
     remove("item.txt");  
     rename("tempitem", "item"); 
					}


  // Function to edit an existing item in the file
  void editItem( string name, Item newItem)
		 {
			   ifstream infile;
     ofstream tempfile;   
     infile.open("item.txt");
     tempfile.open("tempitem.txt");  
     string line;   
     while (getline(infile, line)) 
					{
			 string tempName = line.substr(0, line.find(' '));  
    if (tempName == name)
				 {
	tempfile << newItem.name <<" "<< newItem.quantity <<" "<<newItem.price<< endl;
     } 
					else
				 {
     tempfile << line << endl; 
     }
     } 
     infile.close(); 
     tempfile.close();   
     remove("item.txt");  
     rename("tempitem", "item"); 
					}

  // Function to display all items 
		void displayItems()
		 {
   ifstream infile;
   infile.open("items");
   string line;   
			  while(getline(inFile, line))
					{
     cout<<line<<endl;
					}
  infile close();
		}    

//Function to search for any item 
void searchForAnyItem()
{
ifstream infile;
string searchName, name, quantityStr, priceStr;
      int quantityInt; 
     double priceDouble;
cout<<"Enter Name Of The Item You Want To Search For:";
      cin>>searchName:      infile open("items");
      while (!inFile eof())   
						    {
	 getLine(inFile, name,' ', quantityStr,' ', priceStr);  
					 quantityInt stoi(quantityStr); 
      priceDouble stod(priceStr);
      if (!searchName compareToIgnoreCase(name))   
      cout<<"The Item Found With The Following Details:";
      cout<<"Name:"<<name;      
						cout<<"Quantity:"<<quantityInt;
						  cout<<"Price:"priceDouble;
								        }}

     int main()  // Main function starts here 

    { 

    int choice = 0; // Variable for storing user choice 

    do{ 

        cout << "\n\t\t\tMini Supermarket Management System\n";
								 // Menu for user interaction 

        cout << "\t\t\t----------------------------------\n"; 

        cout << "\t\t\t1 - Add Item \n"; 

        cout << "\t\t\t2 - Edit Item \n"; 

        cout << "\t\t\t3 - Delete Item \n"; 

        cout << "\t\t\t4 - Sort Items \n"; 


       }
       cin>>choice; 
     switch(choice)
									{                
						case 1:                  
									  if(size<maxSize) 
        addItem(Items,size); 
				  else                  
				     cout<<"The Super Market Is Full";
						 break;
      case 2: 
           editItem(Items,size); 
     break;
     case 3: 
         deleteItem(Items,size);
									                    
					break;
     case 4:
									    sortItems(Items,size);
     break;
     case 5: 
         displayItems(Items,size);

     break;              
			  case 6:   
           searchItems(Items,size);
     break;
     default:
     	cout<<"enter from 1 to 7";
     break;
} 
}
	}
							}
