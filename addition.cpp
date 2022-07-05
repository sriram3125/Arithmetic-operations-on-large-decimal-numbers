#include<iostream>
#include<fstream>

using namespace std;

struct node // single node
{
	char data;
	node* next;
	node* prev;
};

class list // a list of links
{
	private:
	    node * head; // pointer to the head link
	    node * tail; // pointer to the tail link

    public:
    	list(){       // constructor
    		head=NULL;
    		tail = NULL;	
    	}

    	void additem(char d);  // adds a data item to the linked list (in front)
    	void addend(char d);  // adds a data item to the linked list (at the back)
    	void display(); // displays the whole linked list
    	node* topnode(); // return the pointer of top node
};

void list::additem(char d) // added a new node in front of the list
{
	node *newnode = new node;

	newnode-> data = d;
	newnode-> prev = NULL;
	newnode->next = head;

	if(head!=NULL)
	{
		head->prev = newnode;
	}


	head = newnode;


	if (newnode->next!=NULL and (newnode->next)->next==NULL)  // the first instance where the head and tail separate out
	{
		tail=newnode->next;
	}

}

void list::addend(char d)
{
	node* newnode = new node;
	newnode->data = d;

	if(tail!=NULL)
	{
		tail->next = newnode;
	}

	newnode->prev=tail;         // initially attaches new node after tail

	tail = newnode;         // tail becomes the last node once again

	tail->next = NULL;

	if (newnode->prev!=NULL and (newnode->prev)->prev==NULL)  // the first instance where the head and tail separate out
	{
		head=newnode->prev;
	}

}
 
void list::display(){
	node* current = head;
	while(current != NULL)
	{
		cout << current->data;
		current = current->next;
	}
	cout<<endl;
}

node* list::topnode(){
	return head;
}

void addchars(char a,char b,char &c,char &carry){ // adds two chars and
	if((a == '0')&&(b == '0')){                   // updates the value of
		c = '0';                                // chars c and carry
		carry = '0';
	}
	else if((a == '0')&&(b == '1')){
		c = '1';
		carry = '0';
	}
	else if((a == '0')&&(b == '2')){
		c = '2';
		carry = '0';
	}
	else if((a == '0')&&(b == '3')){
		c = '3';
		carry = '0';
	}
	else if((a == '0')&&(b == '4')){
		c = '4';
		carry = '0';
	}
	else if((a == '0')&&(b == '5')){
		c = '5';
		carry = '0';
	}
	else if((a == '0')&&(b == '6')){
		c = '6';
		carry = '0';
	}
	else if((a == '0')&&(b == '7')){
		c = '7';
		carry = '0';
	}
	else if((a == '0')&&(b == '8')){
		c = '8';
		carry = '0';
	}
	else if((a == '0')&&(b == '9')){
		c = '9';
		carry = '0';
	}
	else if((a == '1')&&(b == '0')){
		c = '1';
		carry = '0';
	}
	else if((a == '1')&&(b == '1')){
		c = '2';
		carry = '0';
	}
	else if((a == '1')&&(b == '2')){
		c = '3';
		carry = '0';
	}
	else if((a == '1')&&(b == '3')){
		c = '4';
		carry = '0';
	}
	else if((a == '1')&&(b == '4')){
		c = '5';
		carry = '0';
	}
	else if((a == '1')&&(b == '5')){
		c = '6';
		carry = '0';
	}
	else if((a == '1')&&(b == '6')){
		c = '7';
		carry = '0';
	}
	else if((a == '1')&&(b == '7')){
		c = '8';
		carry = '0';
	}
	else if((a == '1')&&(b == '8')){
		c = '9';
		carry = '0';
	}
	else if((a == '1')&&(b == '9')){
		c = '0';
		carry = '1';
	}
	else if((a == '2')&&(b == '0')){
		c = '2';
		carry = '0';
	}
	else if((a == '2')&&(b == '1')){
		c = '3';
		carry = '0';
	}
	else if((a == '2')&&(b == '2')){
		c = '4';
		carry = '0';
	}
	else if((a == '2')&&(b == '3')){
		c = '5';
		carry = '0';
	}
	else if((a == '2')&&(b == '4')){
		c = '6';
		carry = '0';
	}
	else if((a == '2')&&(b == '5')){
		c = '7';
		carry = '0';
	}
	else if((a == '2')&&(b == '6')){
		c = '8';
		carry = '0';
	}
	else if((a == '2')&&(b == '7')){
		c = '9';
		carry = '0';
	}
	else if((a == '2')&&(b == '8')){
		c = '0';
		carry = '1';
	}
	else if((a == '2')&&(b == '9')){
		c = '1';
		carry = '1';
	}
	else if((a == '3')&&(b == '0')){
		c = '3';
		carry = '0';
	}
	else if((a == '3')&&(b == '1')){
		c = '4';
		carry = '0';
	}
	else if((a == '3')&&(b == '2')){
		c = '5';
		carry = '0';
	}
	else if((a == '3')&&(b == '3')){
		c = '6';
		carry = '0';
	}
	else if((a == '3')&&(b == '4')){
		c = '7';
		carry = '0';
	}
	else if((a == '3')&&(b == '5')){
		c = '8';
		carry = '0';
	}
	else if((a == '3')&&(b == '6')){
		c = '9';
		carry = '0';
	}
	else if((a == '3')&&(b == '7')){
		c = '0';
		carry = '1';
	}
	else if((a == '3')&&(b == '8')){
		c = '1';
		carry = '1';
	}
	else if((a == '3')&&(b == '9')){
		c = '2';
		carry = '1';
	}
	else if((a == '4')&&(b == '0')){
		c = '4';
		carry = '0';
	}
	else if((a == '4')&&(b == '1')){
		c = '5';
		carry = '0';
	}
	else if((a == '4')&&(b == '2')){
		c = '6';
		carry = '0';
	}
	else if((a == '4')&&(b == '3')){
		c = '7';
		carry = '0';
	}
	else if((a == '4')&&(b == '4')){
		c = '8';
		carry = '0';
	}
	else if((a == '4')&&(b == '5')){
		c = '9';
		carry = '0';
	}
	else if((a == '4')&&(b == '6')){
		c = '0';
		carry = '1';
	}
	else if((a == '4')&&(b == '7')){
		c = '1';
		carry = '1';
	}
	else if((a == '4')&&(b == '8')){
		c = '2';
		carry = '1';
	}
	else if((a == '4')&&(b == '9')){
		c = '3';
		carry = '1';
	}
	else if((a == '5')&&(b == '0')){
		c = '5';
		carry = '0';
	}
	else if((a == '5')&&(b == '1')){
		c = '6';
		carry = '0';
	}
	else if((a == '5')&&(b == '2')){
		c = '7';
		carry = '0';
	}
	else if((a == '5')&&(b == '3')){
		c = '8';
		carry = '0';
	}
	else if((a == '5')&&(b == '4')){
		c = '9';
		carry = '0';
	}
	else if((a == '5')&&(b == '5')){
		c = '0';
		carry = '1';
	}
	else if((a == '5')&&(b == '6')){
		c = '1';
		carry = '1';
	}
	else if((a == '5')&&(b == '7')){
		c = '2';
		carry = '1';
	}
	else if((a == '5')&&(b == '8')){
		c = '3';
		carry = '1';
	}
	else if((a == '5')&&(b == '9')){
		c = '4';
		carry = '1';
	}
	else if((a == '6')&&(b == '0')){
		c = '6';
		carry = '0';
	}
	else if((a == '6')&&(b == '1')){
		c = '7';
		carry = '0';
	}
	else if((a == '6')&&(b == '2')){
		c = '8';
		carry = '0';
	}
	else if((a == '6')&&(b == '3')){
		c = '9';
		carry = '0';
	}
	else if((a == '6')&&(b == '4')){
		c = '0';
		carry = '1';
	}
	else if((a == '6')&&(b == '5')){
		c = '1';
		carry = '1';
	}
	else if((a == '6')&&(b == '6')){
		c = '2';
		carry = '1';
	}
	else if((a == '6')&&(b == '7')){
		c = '3';
		carry = '1';
	}
	else if((a == '6')&&(b == '8')){
		c = '4';
		carry = '1';
	}
	else if((a == '6')&&(b == '9')){
		c = '5';
		carry = '1';
	}
	else if((a == '7')&&(b == '0')){
		c = '7';
		carry = '0';
	}
	else if((a == '7')&&(b == '1')){
		c = '8';
		carry = '0';
	}
	else if((a == '7')&&(b == '2')){
		c = '9';
		carry = '0';
	}
	else if((a == '7')&&(b == '3')){
		c = '0';
		carry = '1';
	}
	else if((a == '7')&&(b == '4')){
		c = '1';
		carry = '1';
	}
	else if((a == '7')&&(b == '5')){
		c = '2';
		carry = '1';
	}
	else if((a == '7')&&(b == '6')){
		c = '3';
		carry = '1';
	}
	else if((a == '7')&&(b == '7')){
		c = '4';
		carry = '1';
	}
	else if((a == '7')&&(b == '8')){
		c = '5';
		carry = '1';
	}
	else if((a == '7')&&(b == '9')){
		c = '6';
		carry = '1';
	}
	else if((a == '8')&&(b == '0')){
		c = '8';
		carry = '0';
	}
	else if((a == '8')&&(b == '1')){
		c = '9';
		carry = '0';
	}
	else if((a == '8')&&(b == '2')){
		c = '0';
		carry = '1';
	}
	else if((a == '8')&&(b == '3')){
		c = '1';
		carry = '1';
	}
	else if((a == '8')&&(b == '4')){
		c = '2';
		carry = '1';
	}
	else if((a == '8')&&(b == '5')){
		c = '3';
		carry = '1';
	}
	else if((a == '8')&&(b == '6')){
		c = '4';
		carry = '1';
	}
	else if((a == '8')&&(b == '7')){
		c = '5';
		carry = '1';
	}
	else if((a == '8')&&(b == '8')){
		c = '6';
		carry = '1';
	}
	else if((a == '8')&&(b == '9')){
		c = '7';
		carry = '1';
	}
	else if((a == '9')&&(b == '0')){
		c = '9';
		carry = '0';
	}
	else if((a == '9')&&(b == '1')){
		c = '0';
		carry = '1';
	}
	else if((a == '9')&&(b == '2')){
		c = '1';
		carry = '1';
	}
	else if((a == '9')&&(b == '3')){
		c = '2';
		carry = '1';
	}
	else if((a == '9')&&(b == '4')){
		c = '3';
		carry = '1';
	}
	else if((a == '9')&&(b == '5')){
		c = '4';
		carry = '1';
	}
	else if((a == '9')&&(b == '6')){
		c = '5';
		carry = '1';
	}
	else if((a == '9')&&(b == '7')){
		c = '6';
		carry = '1';
	}
	else if((a == '9')&&(b == '8')){
		c = '7';
		carry = '1';
	}
	else if((a == '9')&&(b == '9')){
		c = '8';
		carry = '1';
	}

}

void addzeros(list &l1,list &l2){  // append zeros to make length of number after decimal point
	node *temp1 = l1.topnode();    // same for both numbers. If we are adding two decimals numbers,
	while(temp1->data != '.'){     // poistion of decimal point should be same from end of both numbers
		temp1 = temp1->next;       
	}                         //takes pointer to the position of the decimal

	node *temp2 = l2.topnode(); 
	while(temp2->data != '.'){
		temp2 = temp2->next;     //takes pointer to the position of the decimal
	}

	while(temp1 != NULL || temp2 != NULL){
		if(temp1 != NULL && temp2 != NULL){  // going to next node until one of them
			temp1 = temp1->next;             // reaches the end
			temp2 = temp2->next;
		}
		else if(temp1 == NULL && temp2 != NULL){
			l1.addend('0');
			temp2 = temp2->next;               // when one of them have less digits than other
		}
		else if(temp1 != NULL && temp2 == NULL){  // it appends zeros to bring them to same length 
			l2.addend('0');                         // after decimal
			temp1 = temp1->next;
		}
	}
}

void addition(list &l1,list &l2,list &l3){ // adds two numbers which are in list
	node* temp1 = l1.topnode();
	temp1->prev = NULL;
	while(temp1->next != NULL){   // taking pointer to the end of the list
		temp1 = temp1->next;
	}

	node* temp2 = l2.topnode();
	temp2->prev = NULL;
	while(temp2->next != NULL){  // taking pointer to the end of the list
		temp2 = temp2->next;
	}

	char carry1 = '0';      // this carry was from the befor digits sum
	char carry2 = '0';      // this carry was for the next digits sum 
	char c;
	while(temp1 != NULL || temp2 != NULL){       // stops only when both lists reaches the
		if(temp1 != NULL && temp1->data == '.'){  // beginning of their number
			l3.additem('.');
			temp1 = temp1->prev;    // if decimal encounters
			temp2 = temp2->prev;
		}
		else if(temp1 != NULL && temp2 != NULL){    // if we need to add both digits
			carry1 = carry2;                        // carry1 was from before digits sum
			addchars(temp1->data,temp2->data,c,carry2); // here updated values we will use
	                                                    // chars c and carry2 will be updated in the function
			if(carry2 == '1') addchars(c,carry1,c,carry1); // here carry1 was added to the sum
			else addchars(c,carry1,c,carry2);

			l3.additem(c);
			temp1 = temp1->prev;
			temp2 = temp2->prev;
		}
		else if(temp1 != NULL && temp2 == NULL){   // only digit is present
			addchars(temp1->data,carry2,c,carry2);  // i.e. one number reached its beginning
			l3.additem(c);
			temp1 = temp1->prev;
		}
		else if(temp1 == NULL && temp2 != NULL){
			addchars(temp2->data,carry2,c,carry2);
			l3.additem(c);
			temp2 = temp2->prev;
		}
	}

	if(carry2 == '1'){  // due to adding if digit 1 comes at the beginning
		l3.additem(carry2);
	}
}

int main(){
	fstream file;

	file.open("input.txt"); // input file

	char c;
	list l1,l2;

	while(file.get(c) && c != '\n'){
		l1.addend(c);                // reading first number from input file
	}

	while(file.get(c)){
		l2.addend(c);           // reading second number from input file
	}
	
	l1.display();
	l2.display();         // Displaying the numbers

	addzeros(l1,l2);      // Function to append zeros to make length of number
						  // after decimal point same for both numbers.
	list l3;

	addition(l1,l2,l3);    // Adding function and stores in List l3.

	l3.display();

	file.close();          // Closing the file.
	return 0;
}