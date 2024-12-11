#include<iostream>
#include<string>
#include<cstdlib>
#include<iomanip>
using namespace std;
void clearscreen ()
{
	system ("cls");
}
//ADD STAFF
struct addstaff
{
	double id;
	string name;
	string role;
	double contact;
	double salary;
	
};
addstaff A[10];
int track_staff = 0;
//ADD customers
struct addcustomers
{
	int serialno;
	string name;
    string gender;
	double contact;
	double IDcard;
	
};
addcustomers a[40];
int track_customers=0;
// Function is used to display the rooms in a table format
void displayRooms(bool rooms[], const int totalRooms)
 {
    cout << "\nRoom Availability Status:\n";
    cout << "+------------+---------------------+\n";
    cout << "| Room No.  | Availability         |\n";
    cout << "+------------+---------------------+\n";
    for (int i = 0; i < totalRooms; ++i) 
	{	
       // cout << "| " << setw(9) << i + 1 << " | " << (rooms[i] ? "Reserved" : "Available") << "       |\n";
       cout << "| " << setw(9) << i + 1 << " | ";
if (rooms[i]) {
    cout << "Reserved";
} else {
    cout << "Available";
}
cout << "       |\n";

    }
    cout << "+------------+---------------------+\n";
}
// Function is used for room reservation
void reserveRoom(bool rooms[], int roomNumber) 
{
    if (rooms[roomNumber]) 
	{
        cout << "Sorry, room is already reserved." << roomNumber + 1<< endl;
    } 
	else
	{
        rooms[roomNumber] = true;
        cout << "Room has been reserved successfully."<< roomNumber + 1 << endl;
    }
}
// Function is used to check the room availability
void checkAvailability(bool rooms[], int roomNumber) 
{
    if (rooms[roomNumber]) 
	{
        cout << "Room is already reserved."<< roomNumber + 1 << endl;
    }
	 else 
	{
        cout << "Room is available."<< roomNumber + 1 << endl;
    }
}
// Function to calculate the bill according to the room type and number of days
float calculateBill(string roomType, int days) 
{
    float rate = 0.0;
    // Assigning rates according to their room type
    if (roomType == "single")
	{
        rate = 100.0;
    } 
	else if (roomType == "double") 
	{
        rate = 150.0;
    } 
	else if (roomType == "suite") 
	{
        rate = 200.0;
    } 
	else 
	{
        cout << "Invalid room type!" << endl;
        return 0;
    }
    return rate * days;
}
const int MAX_ROOMS = 10;
string rooms[MAX_ROOMS];           // Room statuses ("Available" or customer name)
string customerDetails[MAX_ROOMS]; // Customer details (name and info)

const string ADMIN_PASSWORD = "MKM"; // Predefined admin password

// Function Prototypes
void initializeRooms();
void showMenu();
void bookRoom();
void checkOut();
void viewRoomStatuses();
bool authenticateUser();  // Function to authenticate user

// Initialize all rooms as "Available"
void initializeRooms() {
    for (int i = 0; i < MAX_ROOMS; ++i) {
        rooms[i] = "Available";
        customerDetails[i] = "";
    }
}

// Authenticate user by checking password
bool authenticateUser() {
    string password;
    cout << "Enter admin password: ";
    cin >> password;

    if (password == ADMIN_PASSWORD) {
        return true;
    } else {
        cout << "Incorrect password. Access denied.\n";
        return false;
    }
}
// Display menu
void showMenu() {
    cout << "\ncostomer portal\n";
    cout << "1. Book Room\n";
    cout << "2. Check-Out\n";
    cout << "3. View Room Statuses\n";
    cout << "4. Exit\n";
    cout << "Enter your choice: ";
}

// Book a room
void bookRoom() {
    int roomNum;
    string name, details;
    cout << "Enter room number to book (1-" << MAX_ROOMS << "): ";
    cin >> roomNum;

    if (roomNum >= 1 && roomNum <= MAX_ROOMS) {
        if (rooms[roomNum - 1] == "Available") {
            cin.ignore(); // Clear input buffer
            cout << "Enter your name: ";
            getline(cin, name);
            cout << "Enter your details (e.g., contact or ID): ";
            getline(cin, details);

            rooms[roomNum - 1] = name;
            customerDetails[roomNum - 1] = details;

            cout << "Room " << roomNum << " successfully booked for " << name << ".\n";
        } else {
            cout << "Room " << roomNum << " is already occupied.\n";
        }
    } else {
        cout << "Invalid room number. Please enter a number between 1 and " << MAX_ROOMS << ".\n";
    }
}

// Check out of a room
void checkOut() {
    int roomNum;
    cout << "Enter room number to check-out (1-" << MAX_ROOMS << "): ";
    cin >> roomNum;

    if (roomNum >= 1 && roomNum <= MAX_ROOMS) {
        if (rooms[roomNum - 1] != "Available") {
            cout << "Room " << roomNum << " is checked out.\n";
            cout << "Customer Name: " << rooms[roomNum - 1] << "\n";
            cout << "Details: " << customerDetails[roomNum - 1] << "\n";

            rooms[roomNum - 1] = "Available";
            customerDetails[roomNum - 1] = "";
        } else {
            cout << "Room " << roomNum << " is already available.\n";
        }
    } else {
        cout << "Invalid room number. Please enter a number between 1 and " << MAX_ROOMS << ".\n";
    }
}

// View room statuses with customer details
void viewRoomStatuses() {
    cout << "\nRoom Statuses:\n";
    for (int i = 0; i < MAX_ROOMS; ++i) {
        cout << "Room " << i + 1 << " | ";
        cout << "Status: " << (rooms[i] == "Available" ? "Available" : "Occupied") << " | ";
        if (rooms[i] != "Available") {
            cout << "Customer: " << rooms[i] << " | ";
            cout << "Details: " << customerDetails[i];
        }
        cout << endl;
    }
}


int main ()
{
	const int totalRooms = 5;
    bool rooms[totalRooms] = {false, false, false, false, false}; // this means rooms are available
    int choice, roomNumber, days;
    string roomType;
	system("color 5F");
	double password;
	string username;
	char choice1;
	cout<<"                 *******************************************************"<<endl;
	cout<<"                 *                                                     *"<<endl;
	cout<<"                 *     WELCOME TO LAVISH LAIR HOTELS ONLINE PORTAL     *"<<endl;
	cout<<"                 *                                                     *"<<endl;
	cout<<"                 *******************************************************"<<endl;
	cout<<"Please verify that you are an authentic user:"<<endl;
	a:
	cout<<"Enter your username: "<<endl;
	cin>>username;
	cout<<"Enter the password: "<<endl;
	cin>>password;
	if (username=="LAVISHLAIR" && password==7468)
	{
	    clearscreen();
	    system("color 3F");
		cout<<"Login successfully!"<<endl;
		up:
			cout<<" ****************(MAIN MENU)****************       "<<endl;
	cout<<"\t\tPress A for ADMIN portal "<<endl;
	cout<<"\t\tPress S for Staff portal "<<endl;
	cout<<"\t\tPress C for Customer portal "<<endl;
	cout<<"\t\tPress E to EXIT portal "<<endl;
		cin>>choice1;
		switch (choice1)
		{
			case 'A':
				{
				double ID, password;
	cout<<"Please proof your identity as admin: "<<endl;
m:
	cout<<"Enter your ID: "<<endl;
	cin>>ID;
	cout<<"Enter your Password:"<<endl;
	cin>>password;
	if (ID==63977 && password==1234)
	{
		clearscreen ();
			system("color 1F");
		cout<<"Login successfully!"<<endl;
		//ADMIN MENU:
		int choice;
		p:
			cout<<"***************(ADMIN PORTAL)******************** "<<endl;
		cout<<"\t\tEnter 1 for Staff details: "<<endl;
		cout<<"\t\tEnter 2 for Customers details: "<<endl;
		cout<<"\t\tEnter 3 to Exit : "<<endl;
		cin>>choice;
		clearscreen();
		system("color 2F");
		switch (choice)
		{
			case 1:
	{
		//Staff details:
		string enter;
         while (true)
     	{
     		s:
     			cout<<"**********(Staff details)**********"<<endl;
			cout<<"\tEnter Add staff: "<<endl;
		cout<<"\tEnter Update staff: "<<endl;
		cout<<"\tEnter View staff: "<<endl;
		cout<<"\tEnter Fire staff: "<<endl;
		cout<<"\tEnter Exit for admin menu: "<<endl;
		cout<<"\tEnter your choice: "<<endl;
		cin>>enter;
		if (enter=="Add")
	{
		int staff;
		cout<<"Enter the number of staff members you want to add: "<<endl;
		cin>>staff;
		track_staff +=staff;
		for (int i=1; i<=staff; i++)
		{
		cout<<"Enter ID (only in numbers) :";
		cin>>A[i].id;
		cout<<"Enter Name:";
		cin.ignore();
		getline(cin,A[i].name);
		cout<<"Enter the Role:";
		cin.ignore();
		getline(cin,A[i].role);
		cout<<"Enter the Contact number:";
		cin>>A[i].contact;
		cout<<"Enter the Salary: ";
		cin>>A[i].salary;
		cout<<"New Staff member added successfully!"<<endl;
        }
        
        goto s;
}
    else if (enter=="View")
{
	    for(int i = 1; i<=track_staff; i++  )
     	{
		 cout<<"ID: "<<A[i].id<<endl;
		 cout<<"Name: "<<A[i].name<<endl;
	     cout<<"Role: "<<A[i].role<<endl;
		 cout<<"Contact: "<<A[i].contact<<endl;
		 cout<<"Salary: "<<A[i].salary<<endl;
		 cout<<endl;
		 
		}
		goto s;
}
			else if (enter == "Update")
	{
		double id;
		cout<<"Enter ID number :";
		cin>>id;
		for(int i=1; i<=track_staff; i++)
		{
			if(id == A[i].id)
			{
				cout<<"ID matched at "<<i<<"!";
				cout<<"Enter the new details!";
				cout<<"Enter name : "<<endl;
				cin.ignore();
	         	getline(cin,A[i].name);
		        cout<<"Role:"<<endl;
		        cin.ignore();
		        getline(cin,A[i].role);
		        cout<<"Contact:"<<endl;
		        cin>>A[i].contact;
		        cout<<"Salary: "<<endl;
		        cin>>A[i].salary;
		        cout<<"Staff member updated successfully!"<<endl;
			}
		}
		
		goto s;
}
    else if (enter=="Fire")
    {
    	 double id;
    cout << "Enter the staff ID to fire: ";
    cin >> id;
    for (int i = 1; i <= track_staff ; i++) {
        if (A[i].id == id)
		 {
            for (int j = i; j < track_staff- 1; j++)
			 {
                A[j] = A[j + 1];
            }
            track_staff--;
            cout << "Staff member fired successfully!" << endl;
            goto s;
        }
    }
    cout << "Staff ID not found!" << endl;
     goto s;
	}
	else if (enter=="Exit")
	{
		clearscreen();
		goto p;
	}
	else 
	{
		cout<<"Login Failed! Please Try again."<<endl;
 	goto p;
	}
	break;
}
}
      case 2:
   	{
	   //Customer details:				  
		int choice;
c:
	system("color 6F");
	cout<<"**************(Customer details)**************"<<endl;
		cout<<"Enter 2 to UPDATE customer. "<<endl;
		cout<<"Enter 3 to VIEW customer. "<<endl;
		cout<<"Enter 4 to REMOVE customer. "<<endl;
		cout<<"Enter 5 to EXIT portal. "<<endl;
		cin>>choice;
		if (choice==1)
		{
			int num;
			cout<<"Enter the number of Customers you want to add: "<<endl;
			cin>>num;
			track_customers+=num;
			for (int i=1; i<=num; i++)
			{
				cout<<"Enter the following details :"<<endl;
				cout<<"Serial number: ";
				cin>>a[i].serialno;
				cout<<"Name: ";
				cin.ignore();
				getline(cin,a[i].name);
				cout<<"Gender: ";
				getline(cin,a[i].gender);
				cout<<"Contact number: ";
				cin>>a[i].contact;
				cout<<"ID card number: ";
				cin>>a[i].IDcard;	
				cout<<"Customer added successfully! "<<endl;
			}
			goto c;
}
		else if (choice==2)
		{
			int serialno;
			cout<<"Enter the serial number: "<<endl;
			cin>>serialno;
			for (int i=1; i<=track_customers; i++)
			{
				if (serialno==a[i].serialno)
				{
					cout<<"Serial number matched at "<<i<<"!";
					cout<<"Enter the new details:";
					cout<<"Serial number: ";
				    cin>>a[i].serialno;
				    cout<<"Name: ";
				    cin.ignore();
				    getline(cin,a[i].name);
				    cout<<"Gender: ";
				    getline(cin,a[i].gender);
				    cout<<"Contact number: ";
			      	cin>>a[i].contact;
			    	cout<<"ID card number: ";
				    cin>>a[i].IDcard;	
				    cout<<"Customer added successfully! "<<endl;
					
				}
			}
			goto c;
}
		else if (choice==3)
		{
			for (int i=1; i<=track_customers; i++)
			{
					cout<<"Customer "<<i <<" details:"<<endl;
					cout<<"Serial number: "<<a[i].serialno<<endl;
				    cout<<"Name: "<<a[i].name<<endl;
				    cout<<"Gender: "<<a[i].gender<<endl;
				    cout<<"Contact number: "<<a[i].contact<<endl;
			        cout<<"ID card number: "<<a[i].IDcard<<endl;	
			}
			goto c;
		}
		else if (choice==4)
		{
			int serialNo;
    cout << "Enter customer serial number to remove: ";
    cin >> serialNo;
    for (int i = 1; i <=track_customers; i++)
	 {
        if (a[i].serialno == serialNo)
		 {
            for (int j = i; j < track_customers ; j++) 
			{
                a[j] = a[j + 1];
            }
            track_customers--;
            cout << "Customer removed successfully!" << endl;
            goto c;
        }
    else {
    cout << "Customer serial number not found!" << endl;
}
}
goto c;
		}
		else if (choice==5)
		{
			clearscreen();
			goto p;
		}
		else 
		{
			break;;
		}
		break;
}
  case 3:
  	{goto up;
	  }
}
}
     else 
     {
     	cout<<"Invalid ID or password!. Try again: "<<endl;
     	goto m;
	 }
}
				system("color 3F");
				break;
				case 'S':
					clearscreen();
					system("color 5F");
    while (true) 
	{
        cout << "\nstaff management system:\n";
        cout << "1. Check room availability\n";
        cout << "2. Reserve room\n";
        cout << "3. Calculate Bill\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        clearscreen();

        switch (choice) 
		{
            case 1:
                displayRooms(rooms, totalRooms); 
                cout << "Enter room number to check availability (1-" << totalRooms << "):";
                cin >> roomNumber;
                if (roomNumber < 1 || roomNumber > totalRooms) 
				{
                    cout << "Invalid room number! Please enter a number between 1 and " << totalRooms << endl;
                } 
				else 
				{
                    checkAvailability(rooms, roomNumber - 1); // Check room availability
                }
                break;
                clearscreen();

            case 2:
                displayRooms(rooms, totalRooms);  
                cout << "Enter room type (single/double/suite):"<<endl;
                cin >> roomType;

                // room type validation
                if (roomType != "single" && roomType != "double" && roomType != "suite") 
				{
                    cout << "Invalid room type! Please select from 'single', 'double', or 'suite'." << endl;
                    break;
                }
                cout << "Enter room number to reserve (1-" << totalRooms << "): ";
                cin >> roomNumber;
                if (roomNumber < 1 || roomNumber > totalRooms) 
				{
                    cout << "Invalid room number! Please enter a number between 1 and " << totalRooms << endl;
                } 
				else 
				{
                    reserveRoom(rooms, roomNumber - 1); // Reserve the room
                }
                break;
                clearscreen();

            case 3:
                cout << "Enter the room type (single/double/suite): ";
                cin >> roomType;
                cout << "Enter the room number (1-" << totalRooms << "): ";
                cin >> roomNumber;
                cout << "Enter the number of days for your stay: ";
                cin >> days;

                if (days <= 0) 
				{
                    cout << "Invalid number of days!" << endl;
                } 
                else if  (roomNumber < 1 || roomNumber > totalRooms) 
				{
                cout << "Invalid room number.\n";
                }
                else if (!rooms[roomNumber - 1]) // Check user reserved room or not reserved 
                {
                    cout << "Room is not reserved yet. Please reserve the room first." << roomNumber << endl;
                }
		        else 
				{
                    cout << "\nBill Calculation:\n";
                    cout << "+-------------------+------------+----------+------------+\n";
                    cout << "| Room Type        | Room No.  | Days    | Total Bill |\n";
                    cout << "+-------------------+------------+----------+------------+\n";
                    cout << "| " << setw(17) << roomType << " | " << setw(9) << roomNumber 
                         << " | " << setw(7) << days << " | RS." << setw(10) 
                         << calculateBill(roomType, days) << " |\n";
                    cout << "+-------------------+------------+----------+------------+\n";
                }
                break;
                clearscreen();

            case 4:
                goto up;

            default:
                cout << "Invalid input! Please choose a valid choice." << endl;
        }
    }
					
                clearscreen();
                break;
         case 'C':
         	clearscreen();
         	system("color 2F");
                	 // Authenticate before allowing access to the system
    if (!authenticateUser()) {
        return 0; // Exit the program if authentication fails
    }

    initializeRooms();
    int choice;

    do {
        showMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                bookRoom();
                break;
            case 2:
                checkOut();
                break;
            case 3:
                viewRoomStatuses();
                break;
            case 4:
            	clearscreen();
                goto up;
                
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);
    break;
    case 'E':
    	{
    	return 0;
		}
		break;	 }
    }
	else
	{
		cout<<"Invalid username or password! Please try again "<<endl;
		goto a;
	}


}