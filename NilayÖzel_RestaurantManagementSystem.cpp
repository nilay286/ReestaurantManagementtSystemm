#include <iostream>
#include <string>
#include <vector>

using namespace std;
//customer
void CustomerInfo();
void customerOperation();
void AddCustomer();
void DeleteCustomer();
void EditCustomer();
void ShowCustomer();

void compareCustomerId();
void compareCustomerPhone();
void compareCustomerTablenum();

//table
void TableInfo();
void tableOperation();
void AddTable();
void DeleteTable();
void EditTable();
void ShowTable();

void compareTableId();
void compareTableBill();


//waiter
void WaiterInfo();
void waiterOperation();
void AddWaiter();
void DeleteCustomer();
void EditWaiter();
void ShowCustomer();

void compareWaiterId();
void compareWaiterPhone();
void compareWaiterSalary();

//chef
void ChefInfo();
void chefOperation();
void AddChef();
void DeleteChef();
void EditChef();
void ShowChef();

void compareChefId();
void compareChefPhone();
void compareChefSalary();

void HomeScreen();

class Customer{
	
	public:
		int customerId;
		string customerName;
		int customerPhone;
		string customerAddress;
		int customerTablenum;
			
	Customer(int, string, int, string, int);
			
	void CustomerInfo() {
		cout << "Customer Id: "<<customerId<< endl;
		cout << "	 Name: "<<customerName<< endl;
		cout << "   	 Phone: "<<customerPhone<< endl;
		cout << "	 Address: "<<customerAddress<< endl;
		cout << "	 Table Number: "<<customerTablenum<< endl;
		cout<<"\n";
	}
						
};

vector<Customer>Customers;

Customer::Customer(int customerId, string customerName, int customerPhone, string customerAddress, int customerTablenum){
	
	this->customerId=customerId;
	this->customerName=customerName;     
	this->customerPhone=customerPhone;
	this->customerAddress=customerAddress;
	this->customerTablenum=customerTablenum;
	
	Customers.push_back(*this);
}

void compareCustomerId(int y){

	int array[]={};
	
	for(auto x : Customers){	
		for(int i=0 ; i<Customers.size(); i++){
			array[i]=x.customerId;
	
		if(y==array[i]){
			cout<<"please check your id";
			Customers.erase(Customers.end() - 1);
			AddCustomer();
			}
		else{
			customerOperation();
			}
		}
	}	
}


void compareCustomerPhone(int y){

	int array[]={};
	
	for(auto x : Customers){ 	
		for(int i=0 ; i<Customers.size(); i++){
			array[i]=x.customerPhone;
	
		if(y==array[i]){
			cout<<"please check your phone";
			Customers.erase(Customers.end() - 1);
			AddCustomer();
			}
		else{
			customerOperation();
			}
		}
	}	
}

void compareCustomerTablenum(int y){

	double array[]={};
	
	for(auto x : Customers){ 	
		for(int i=0 ; i<Customers.size(); i++){
			array[i]=x.customerTablenum;
	
		if(y==array[i]){
			cout<<"please check your table number";
			Customers.erase(Customers.end() - 1);
			AddCustomer();
			}
		else{
			customerOperation();
			}
		}
	}	
}

void AddCustomer() {

	int custId;
	string custName;
	int custPhone;
	string custAddress;
	int custTablenum;
	
	cout<<"\nNEW CUSTOMER INFORMATION"<<endl;
	cout << "Id: ";
	cin>>custId ;
	compareCustomerId(custId);
	cout << "Name:  ";
	cin >>custName;
	cout << "Phone: ";
	cin >>custPhone;
	compareCustomerPhone(custPhone);
	cout << "Address: ";
	cin >>custAddress;
	cout << "Table number: ";
	cin >>custTablenum;

	Customer newCustomer(custId, custName, custPhone, custAddress, custTablenum );
	
//  compareCustomerId(custId);
//	compareCustomerPhone(custPhone);
//	compareCustomerTablenum(custTablenum);

}

void DeleteCustomer(){
	int a;
	cout<<"Enter The Customer Queue You Want To Be Deleted"<<endl;
	cin>>a;
	Customers.erase(Customers.begin()+(a-1));
		
}

void EditCustomer(){
	int a;
	cout<<"Enter The Customer Queue You Want To Be Edited"<<endl;
	cin>>a;
	Customers.erase(Customers.begin()+(a-1));
	AddCustomer();		
	
}

void ShowCustomer(){
	
		cout<<"\nAll Customers "<<endl;
			for(auto x: Customers){
			x.CustomerInfo();
			} 
				
}


class Table{
	
	public:
		
		int tableId;
		double tableBill;
	
	Table(int, double);	
		
	void TableInfo() {
		cout << "Table Id: "<<tableId<< endl;
		cout << "      Bill: "<<tableBill<< endl;
		cout<<"\n";
	}
	
};

vector<Table>Tables;

Table::Table(int tableId, double tableBill){
	
	this->tableId=tableId;
	this->tableBill=tableBill;
	
	Tables.push_back(*this);
}

void compareTableId(int y){

	int array[]={};
	
	for(auto x : Tables){	
		for(int i=0 ; i<Tables.size(); i++){
			array[i]=x.tableId;
	
		if(y==array[i]){
			cout<<"please check your id";
			Tables.erase(Tables.end() - 1);
			AddTable();
			}
		else{
			tableOperation();
			}
		}
	}	
}

void AddTable() {

	int tblId;
	double tblBill;
	
	cout<<"\nNEW TABLE INFORMATION"<<endl;
	cout << "Id: ";
	cin>>tblId ;
	cout << "Table Bill: ";
	cin >>tblBill;

	Table newTable(tblId, tblBill);
	
	compareTableId(tblId);
//	compareBill(tblBill);

}

void DeleteTable(){
	int a;
	cout<<"Enter The Table Queue You Want To Be Deleted"<<endl;
	cin>>a;
	Tables.erase(Tables.begin()+(a-1));
		
}

void EditTable(){
	int a;
	cout<<"Enter The Table Queue You Want To Be Edited"<<endl;
	cin>>a;
	Tables.erase(Tables.begin()+(a-1));
	AddTable();		
	
}

void ShowTable(){
		cout<<"\nAll Tables "<<endl;
			for(auto y: Tables){
			y.TableInfo();	
		}
			
}


class Waiter{
	
	public:
		
		int waiterId;
		string waiterName;
		int waiterPhone;
		double waiterSalary;

	Waiter(int, string, int, double);	
		
	void WaiterInfo() {
		cout << "Waiter Id: "<<waiterId<< endl;
		cout << "       Name: "<<waiterName<< endl;
		cout << "       Phone: "<<waiterPhone<< endl;
		cout << "       Salary: "<<waiterSalary<< endl;
		cout<<"\n";
	}
};

vector<Waiter>Waiters;

Waiter::Waiter(int waiterId, string waiterName, int waiterPhone, double waiterSalary){
	
	this->waiterId=waiterId;
	this->waiterName=waiterName;
	this->waiterPhone=waiterPhone;
	this->waiterSalary=waiterSalary;
	
	Waiters.push_back(*this);
}

void compareWaiterId(int y){

	int array[]={};
	
	for(auto x : Waiters){	
		for(int i=0 ; i<Waiters.size(); i++){
			array[i]=x.waiterId;
	
		if(y==array[i]){
			cout<<"please check your id";
			Waiters.erase(Waiters.end() - 1);
			AddWaiter();
			}
		else{
			waiterOperation();
			}
		}
	}	
}

void compareWaiterPhone(int y){

	int array[]={};
	
	for(auto x : Waiters){ 	
		for(int i=0 ; i<Waiters.size(); i++){
			array[i]=x.waiterPhone;
	
		if(y==array[i]){
			cout<<"please check your phone";
			Waiters.erase(Waiters.end() - 1);
			AddWaiter();
			}
		else{
			waiterOperation();
			}
		}
	}	
}

void AddWaiter() {

	int wtrId;
	string wtrName;
	int wtrPhone;
	double wtrSalary;

	cout<<"\nNEW WAITER INFORMATION"<<endl;
	cout << "Id: ";
	cin >>wtrId ;
	cout << "Name:  ";
	cin >>wtrName;
	cout << "Phone: ";
	cin >>wtrPhone;
	cout << "Salary: ";
	cin >>wtrSalary;

	Waiter newWaiter(wtrId, wtrName, wtrPhone, wtrSalary);

	compareWaiterId(wtrId);
	compareWaiterPhone(wtrPhone);
	
}

void DeleteWaiter(){
	int a;
	cout<<"Enter The Waiter Queue You Want To Be Deleted"<<endl;
	cin>>a;
	Waiters.erase(Waiters.begin()+(a-1));
	
}

void EditWaiter(){
	int a;
	cout<<"Enter The Waiter Queue You Want To Be Edited"<<endl;
	cin>>a;
	Waiters.erase(Waiters.begin()+(a-1));
	AddWaiter();		
	
}

void ShowWaiter(){
		cout<<"\nAll Waiters "<<endl;
			for(auto x: Waiters){
			x.WaiterInfo();
		}
}
	
class Chef{
	
	public:
		
		int chefId;
		string chefName;
		int chefPhone;
		double chefSalary;	
	
	Chef(int, string, int, double);	
	
	void ChefInfo() {
		cout << "Chef Id: "<<chefId<< endl;
		cout << "     Name: "<<chefName<< endl;
		cout << "     Phone: "<<chefPhone<< endl;
		cout << "     Salary: "<<chefSalary<< endl;
		cout<<"\n";
	}		
};

vector<Chef>Chefs;

Chef::Chef(int chefId, string chefName, int chefPhone, double chefSalary){
	
	this->chefId=chefId;
	this->chefName=chefName;
	this->chefPhone=chefPhone;
	this->chefSalary=chefSalary;
	
	Chefs.push_back(*this);
}

void compareChefId(int y){

	int array[]={};
	
	for(auto x : Chefs){	
		for(int i=0 ; i<Chefs.size(); i++){
			array[i]=x.chefId;
	
		if(y==array[i]){
			cout<<"please check your id";
			Chefs.erase(Chefs.end() - 1);
			AddChef();
			}
		else{
			chefOperation();
			}
		}
	}	
}

void compareChefPhone(int y){

	int array[]={};
	
	for(auto x : Chefs){ 	
		for(int i=0 ; i<Chefs.size(); i++){
			array[i]=x.chefPhone;
	
		if(y==array[i]){
			cout<<"please check your phone";
			Chefs.erase(Chefs.end() - 1);
			AddChef();
			}
		else{
			chefOperation();
			}
		}
	}	
}

void AddChef(){

	int chfId;
	string chfName;
	int chfPhone;
	double chfSalary;

	cout<<"\nNEW CHEF INFORMATION"<<endl;
	cout << "Id: ";
	cin >>chfId ;
	cout << "Name:  ";
	cin >>chfName;
	cout << "Phone: ";
	cin >>chfPhone;
	cout << "Salary: ";
	cin >>chfSalary;

	Chef newChefs(chfId, chfName, chfPhone, chfSalary);
	
	compareChefId(chfId);
	compareChefPhone(chfPhone);
}

void DeleteChef(){
	int a;
	cout<<"Enter The Chef Queue You Want To Be Deleted"<<endl;
	cin>>a;
	Chefs.erase(Chefs.begin()+(a-1));
	
}

void EditChef(){
	int a;
	cout<<"Enter The Chef Queue You Want To Be Edited"<<endl;
	cin>>a;
	Chefs.erase(Chefs.begin()+(a-1));
	AddChef();		
	
}

void ShowChef(){
		cout<<"\nAll Chefs "<<endl;
			for(auto x: Chefs){
			x.ChefInfo();
	}
}


void HomeScreen(){
	
	cout<<"\n- - - - - - - - - - RESTAURANT MANAGEMENT SYSTEM - - - - - - - - - - \n"<<endl;
	
	int a;
	
	cout<<"Choose one of this operations: "<<endl;
	
	cout<<"1 - Customer Operation"<<endl;
	cout<<"2 - Table Operation"<<endl;
	cout<<"3 - Waiter Operation"<<endl;
	cout<<"4 - Chef Operation"<<endl;

	cin>>a;

	switch(a){
		case 1:{
			customerOperation();
		}
			break;
		
		case 2:{
			tableOperation();
		}
			break;
				
		case 3:{
			waiterOperation();
		}
			break;
		
		case 4:{
			chefOperation();
		}
			break;
	}
		
}

int main(){
	
	Customer customer1(767, "Nilay",537000, "Pendik", 1);
	Customer customer2(247, "Nihal", 539000, "Beykoz", 2);
	
	Table table1(767, 238.75);
	Table table2(247, 434.00);
	
	Waiter waiter1(9878523, "Yusuf", 0532000, 4.000);
	Waiter waiter2(7686835, "Ayse",  0524000, 4.000);
	
	Chef chef1(76874545, "Ali", 0562000, 8.000);
	Chef chef2(33534256, "Asli", 0543000, 10.000);
	
	HomeScreen();
	
	return 0;
}


void customerOperation(){
	
	int x;
	int y=0;
	
while(y!=-1){
	
	cout<<"\nCustomer Operation"<<endl;
	cout<<"1. Add Customer"<<endl;
	cout<<"2. Delete Customer"<<endl;
	cout<<"3. Edit Customer"<<endl;
	cout<<"4. Show Customer's Information"<<endl;
	cout<<"5. Exit"<<endl;
	cin>>x;

	switch(x){
		
		case 1:{		
			AddCustomer();
			cout<<"That Customer is added."<<endl;
			cout <<"\nAll Customers In Restaurant is: "<<Customers.size() << endl;			
			break;
		}
			
		case 2:{			
			DeleteCustomer();
			cout<<"That Customer is deleted."<<endl;
			cout <<"\nAll Customers In Restaurant is: "<<Customers.size() << endl;
			break;
		}
		
		case 3:			
			EditCustomer();
			
		case 4:			
			ShowCustomer();
			
		case 5:
			HomeScreen();
		}
	}
}			

void tableOperation(){
	
	int x;
	int y=0;
	
while(y!=-1){
	
	cout<<"\nTable Operation"<<endl;
	cout<<"1. Add Table"<<endl;
	cout<<"2. Delete Table"<<endl;
	cout<<"3. Edit Table"<<endl;
	cout<<"4. Show Table's Information"<<endl;
	cout<<"5. Exit"<<endl;
	cin>>x;

	switch(x){
		
		case 1:{			
		int tblId;
		double tblBill;
	
		cout << "Id: ";
		cin >>tblId ;
		cout << "Bill:  ";
		cin >>tblBill;

		Table newTables(tblId, tblBill);
		
		cout <<"\nNumber Of Tables With Reservation is: "<<Tables.size() << endl;			
		
		break;
		}
		
		case 2:
			DeleteTable();
			cout<<"That Table is deleted."<<endl;
			cout <<"\nAll Tables In Restaurant is: "<<Tables.size() << endl;
			break;

		case 3:	
			EditTable();
				
		case 4:			
			ShowTable();
			
		case 5:
			HomeScreen();
		}
	}
	
}

void waiterOperation(){
	
	int x;
	int y=0;
	
	while(y!=-1){
			
	cout<<"\nWaiter Operation"<<endl;																											
	cout<<"1. Add Waiter"<<endl;
	cout<<"2. Delete Waiter"<<endl;
	cout<<"3. Edit Waiter"<<endl;
	cout<<"4. Show Waiter's Information"<<endl;
	cout<<"5. Exit"<<endl;
	cin>>x;
	
	switch(x){
		
		case 1:	
			AddWaiter();
			cout<<"That Waiter is added."<<endl;
			cout <<"\nAll Waiters In Restaurant is: "<<Waiters.size() << endl;
			break;
	
		case 2:
			DeleteWaiter();
			cout<<"That Waiter is deleted."<<endl;
			cout <<"\nAll Waiters In Restaurant is: "<<Waiters.size() << endl;
			break;

		case 3:	
				EditWaiter();
						
		case 4:	
				ShowWaiter();
				
		case 5:			
				HomeScreen();
					
		}
	}
}

void chefOperation(){

	int x;
	int y=0;
	
while(y!=-1){
	
	cout<<"\nChef Operation"<<endl;
	cout<<"1. Add Chef"<<endl;
	cout<<"2. Delete Chef"<<endl;
	cout<<"3. Edit Chef"<<endl;
	cout<<"4. Show Chef's Information"<<endl;
	cout<<"5. Exit"<<endl;
	cin>>x;
	
	
	switch(x){
		case 1:
			AddChef();
			cout<<"That Chef is added."<<endl;
			cout <<"\nAll Chefs In Restaurant is: "<<Chefs.size() << endl;
			break;
			
		case 2:	
			DeleteChef();
			cout<<"That Chef is deleted."<<endl;
			cout <<"\nAll Chefs In Restaurant is: "<<Chefs.size() << endl;
			break;
			
		case 3:		
				EditChef();	
						
		case 4:		
				ShowChef();
			
		case 5:
				HomeScreen();				
		}
	}
}


