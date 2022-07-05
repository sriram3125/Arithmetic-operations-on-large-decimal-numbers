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
    	void deletetop();  // deletes the top node
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

	if(tail == NULL){
		tail = newnode;
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

	if (head == NULL)  // the first instance where the head and tail separate out
	{
		head=newnode;
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

void list::deletetop(){  // deletes the top node
	if(head == NULL) return;  // of the list
	else if(head->next == NULL){
		head = NULL;
		return;
	}
	else{
		head = head->next;
		delete(head->prev);
		head->prev = NULL;
	}
}

node* list::topnode(){
	return head;
}

void copy(list l1,list &l2){   // copies ones list contents into
	node *temp = l1.topnode(); // another list
	while(temp != NULL){
		l2.addend(temp->data);
		temp = temp->next;
	}
}

void frontzeros(list &l){ // deletes unnecessary zeros in front of
	node *temp = l.topnode(); // the final number
	while(temp!=NULL && temp->data == '0'){
		temp = temp->next;
		l.deletetop();
	}

	if(temp == NULL){
		l.additem('0');
		return;
	}
	if(temp->data == '.'){
		l.additem('0');
	}
}

char compare_num(char a,char b){ // compares two characters
	if((a == '.')&&(b == '.')){
		return '=';
	}
	else if((a == '-')&&(b == '-')){
		return '=';
	}
	else if((a == '0')&&(b == '0')){
		return '=';
	}
	else if((a == '0')&&(b == '1')){
		return '<';
	}
	else if((a == '0')&&(b == '2')){
		return '<';
	}
	else if((a == '0')&&(b == '3')){
		return '<';
	}
	else if((a == '0')&&(b == '4')){
		return '<';
	}
	else if((a == '0')&&(b == '5')){
		return '<';
	}
	else if((a == '0')&&(b == '6')){
		return '<';
	}
	else if((a == '0')&&(b == '7')){
		return '<';
	}
	else if((a == '0')&&(b == '8')){
		return '<';
	}
	else if((a == '0')&&(b == '9')){
		return '<';
	}
	else if((a == '1')&&(b == '0')){
		return '>';
	}
	else if((a == '1')&&(b == '1')){
		return '=';
	}
	else if((a == '1')&&(b == '2')){
		return '<';
	}
	else if((a == '1')&&(b == '3')){
		return '<';
	}
	else if((a == '1')&&(b == '4')){
		return '<';
	}
	else if((a == '1')&&(b == '5')){
		return '<';
	}
	else if((a == '1')&&(b == '6')){
		return '<';
	}
	else if((a == '1')&&(b == '7')){
		return '<';
	}
	else if((a == '1')&&(b == '8')){
		return '<';
	}
	else if((a == '1')&&(b == '9')){
		return '<';
	}
	else if((a == '2')&&(b == '0')){
		return '>';
	}
	else if((a == '2')&&(b == '1')){
		return '>';
	}
	else if((a == '2')&&(b == '2')){
		return '=';
	}
	else if((a == '2')&&(b == '3')){
		return '<';
	}
	else if((a == '2')&&(b == '4')){
		return '<';
	}
	else if((a == '2')&&(b == '5')){
		return '<';
	}
	else if((a == '2')&&(b == '6')){
		return '<';
	}
	else if((a == '2')&&(b == '7')){
		return '<';
	}
	else if((a == '2')&&(b == '8')){
		return '<';
	}
	else if((a == '2')&&(b == '9')){
		return '<';
	}
	else if((a == '3')&&(b == '0')){
		return '>';
	}
	else if((a == '3')&&(b == '1')){
		return '>';
	}
	else if((a == '3')&&(b == '2')){
		return '>';
	}
	else if((a == '3')&&(b == '3')){
		return '=';
	}
	else if((a == '3')&&(b == '4')){
		return '<';
	}
	else if((a == '3')&&(b == '5')){
		return '<';
	}
	else if((a == '3')&&(b == '6')){
		return '<';
	}
	else if((a == '3')&&(b == '7')){
		return '<';
	}
	else if((a == '3')&&(b == '8')){
		return '<';
	}
	else if((a == '3')&&(b == '9')){
		return '<';
	}
	else if((a == '4')&&(b == '0')){
		return '>';
	}
	else if((a == '4')&&(b == '1')){
		return '>';
	}
	else if((a == '4')&&(b == '2')){
		return '>';
	}
	else if((a == '4')&&(b == '3')){
		return '>';
	}
	else if((a == '4')&&(b == '4')){
		return '=';
	}
	else if((a == '4')&&(b == '5')){
		return '<';
	}
	else if((a == '4')&&(b == '6')){
		return '<';
	}
	else if((a == '4')&&(b == '7')){
		return '<';
	}
	else if((a == '4')&&(b == '8')){
		return '<';
	}
	else if((a == '4')&&(b == '9')){
		return '<';
	}
	else if((a == '5')&&(b == '0')){
		return '>';
	}
	else if((a == '5')&&(b == '1')){
		return '>';
	}
	else if((a == '5')&&(b == '2')){
		return '>';
	}
	else if((a == '5')&&(b == '3')){
		return '>';
	}
	else if((a == '5')&&(b == '4')){
		return '>';
	}
	else if((a == '5')&&(b == '5')){
		return '=';
	}
	else if((a == '5')&&(b == '6')){
		return '<';
	}
	else if((a == '5')&&(b == '7')){
		return '<';
	}
	else if((a == '5')&&(b == '8')){
		return '<';
	}
	else if((a == '5')&&(b == '9')){
		return '<';
	}
	else if((a == '6')&&(b == '0')){
		return '>';
	}
	else if((a == '6')&&(b == '1')){
		return '>';
	}
	else if((a == '6')&&(b == '2')){
		return '>';
	}
	else if((a == '6')&&(b == '3')){
		return '>';
	}
	else if((a == '6')&&(b == '4')){
		return '>';
	}
	else if((a == '6')&&(b == '5')){
		return '>';
	}
	else if((a == '6')&&(b == '6')){
		return '=';
	}
	else if((a == '6')&&(b == '7')){
		return '<';
	}
	else if((a == '6')&&(b == '8')){
		return '<';
	}
	else if((a == '6')&&(b == '9')){
		return '<';
	}
	else if((a == '7')&&(b == '0')){
		return '>';
	}
	else if((a == '7')&&(b == '1')){
		return '>';
	}
	else if((a == '7')&&(b == '2')){
		return '>';
	}
	else if((a == '7')&&(b == '3')){
		return '>';
	}
	else if((a == '7')&&(b == '4')){
		return '>';
	}
	else if((a == '7')&&(b == '5')){
		return '>';
	}
	else if((a == '7')&&(b == '6')){
		return '>';
	}
	else if((a == '7')&&(b == '7')){
		return '=';
	}
	else if((a == '7')&&(b == '8')){
		return '<';
	}
	else if((a == '7')&&(b == '9')){
		return '<';
	}
	else if((a == '8')&&(b == '0')){
		return '>';
	}
	else if((a == '8')&&(b == '1')){
		return '>';
	}
	else if((a == '8')&&(b == '2')){
		return '>';
	}
	else if((a == '8')&&(b == '3')){
		return '>';
	}
	else if((a == '8')&&(b == '4')){
		return '>';
	}
	else if((a == '8')&&(b == '5')){
		return '>';
	}
	else if((a == '8')&&(b == '6')){
		return '>';
	}
	else if((a == '8')&&(b == '7')){
		return '>';
	}
	else if((a == '8')&&(b == '8')){
		return '=';
	}
	else if((a == '8')&&(b == '9')){
		return '<';
	}
	else if((a == '9')&&(b == '0')){
		return '>';
	}
	else if((a == '9')&&(b == '1')){
		return '>';
	}
	else if((a == '9')&&(b == '2')){
		return '>';
	}
	else if((a == '9')&&(b == '3')){
		return '>';
	}
	else if((a == '9')&&(b == '4')){
		return '>';
	}
	else if((a == '9')&&(b == '5')){
		return '>';
	}
	else if((a == '9')&&(b == '6')){
		return '>';
	}
	else if((a == '9')&&(b == '7')){
		return '>';
	}
	else if((a == '9')&&(b == '8')){
		return '>';
	}
	else if((a == '9')&&(b == '9')){
		return '=';
	}
	return '=';
}

char subtractchars(char a,char b){  // subtract two chars and returns
	if((a=='0')&&(b=='0')){         // the value in char data type
		return '0';
	}
	else if((a=='0')&&(b=='1')){
		return '9';
	}
	else if((a=='0')&&(b=='2')){
		return '8';
	}
	else if((a=='0')&&(b=='3')){
		return '7';
	}
	else if((a=='0')&&(b=='4')){
		return '6';
	}
	else if((a=='0')&&(b=='5')){
		return '5';
	}
	else if((a=='0')&&(b=='6')){
		return '4';
	}
	else if((a=='0')&&(b=='7')){
		return '3';
	}
	else if((a=='0')&&(b=='8')){
		return '2';
	}
	else if((a=='0')&&(b=='9')){
		return '1';
	}
	else if((a=='1')&&(b=='0')){
		return '1';
	}
	else if((a=='1')&&(b=='1')){
		return '0';
	}
	else if((a=='1')&&(b=='2')){
		return '9';
	}
	else if((a=='1')&&(b=='3')){
		return '8';
	}
	else if((a=='1')&&(b=='4')){
		return '7';
	}
	else if((a=='1')&&(b=='5')){
		return '6';
	}
	else if((a=='1')&&(b=='6')){
		return '5';
	}
	else if((a=='1')&&(b=='7')){
		return '4';
	}
	else if((a=='1')&&(b=='8')){
		return '3';
	}
	else if((a=='1')&&(b=='9')){
		return '2';
	}
	else if((a=='2')&&(b=='0')){
		return '2';
	}
	else if((a=='2')&&(b=='1')){
		return '1';
	}
	else if((a=='2')&&(b=='2')){
		return '0';
	}
	else if((a=='2')&&(b=='3')){
		return '9';
	}
	else if((a=='2')&&(b=='4')){
		return '8';
	}
	else if((a=='2')&&(b=='5')){
		return '7';
	}
	else if((a=='2')&&(b=='6')){
		return '6';
	}
	else if((a=='2')&&(b=='7')){
		return '5';
	}
	else if((a=='2')&&(b=='8')){
		return '4';
	}
	else if((a=='2')&&(b=='9')){
		return '3';
	}
	else if((a=='3')&&(b=='0')){
		return '3';
	}
	else if((a=='3')&&(b=='1')){
		return '2';
	}
	else if((a=='3')&&(b=='2')){
		return '1';
	}
	else if((a=='3')&&(b=='3')){
		return '0';
	}
	else if((a=='3')&&(b=='4')){
		return '9';
	}
	else if((a=='3')&&(b=='5')){
		return '8';
	}
	else if((a=='3')&&(b=='6')){
		return '7';
	}
	else if((a=='3')&&(b=='7')){
		return '6';
	}
	else if((a=='3')&&(b=='8')){
		return '5';
	}
	else if((a=='3')&&(b=='9')){
		return '4';
	}
	else if((a=='4')&&(b=='0')){
		return '4';
	}
	else if((a=='4')&&(b=='1')){
		return '3';
	}
	else if((a=='4')&&(b=='2')){
		return '2';
	}
	else if((a=='4')&&(b=='3')){
		return '1';
	}
	else if((a=='4')&&(b=='4')){
		return '0';
	}
	else if((a=='4')&&(b=='5')){
		return '9';
	}
	else if((a=='4')&&(b=='6')){
		return '8';
	}
	else if((a=='4')&&(b=='7')){
		return '7';
	}
	else if((a=='4')&&(b=='8')){
		return '6';
	}
	else if((a=='4')&&(b=='9')){
		return '5';
	}
	else if((a=='5')&&(b=='0')){
		return '5';
	}
	else if((a=='5')&&(b=='1')){
		return '4';
	}
	else if((a=='5')&&(b=='2')){
		return '3';
	}
	else if((a=='5')&&(b=='3')){
		return '2';
	}
	else if((a=='5')&&(b=='4')){
		return '1';
	}
	else if((a=='5')&&(b=='5')){
		return '0';
	}
	else if((a=='5')&&(b=='6')){
		return '9';
	}
	else if((a=='5')&&(b=='7')){
		return '8';
	}
	else if((a=='5')&&(b=='8')){
		return '7';
	}
	else if((a=='5')&&(b=='9')){
		return '6';
	}
	else if((a=='6')&&(b=='0')){
		return '6';
	}
	else if((a=='6')&&(b=='1')){
		return '5';
	}
	else if((a=='6')&&(b=='2')){
		return '4';
	}
	else if((a=='6')&&(b=='3')){
		return '3';
	}
	else if((a=='6')&&(b=='4')){
		return '2';
	}
	else if((a=='6')&&(b=='5')){
		return '1';
	}
	else if((a=='6')&&(b=='6')){
		return '0';
	}
	else if((a=='6')&&(b=='7')){
		return '9';
	}
	else if((a=='6')&&(b=='8')){
		return '8';
	}
	else if((a=='6')&&(b=='9')){
		return '7';
	}
	else if((a=='7')&&(b=='0')){
		return '7';
	}
	else if((a=='7')&&(b=='1')){
		return '6';
	}
	else if((a=='7')&&(b=='2')){
		return '5';
	}
	else if((a=='7')&&(b=='3')){
		return '4';
	}
	else if((a=='7')&&(b=='4')){
		return '3';
	}
	else if((a=='7')&&(b=='5')){
		return '2';
	}
	else if((a=='7')&&(b=='6')){
		return '1';
	}
	else if((a=='7')&&(b=='7')){
		return '0';
	}
	else if((a=='7')&&(b=='8')){
		return '9';
	}
	else if((a=='7')&&(b=='9')){
		return '8';
	}
	else if((a=='8')&&(b=='0')){
		return '8';
	}
	else if((a=='8')&&(b=='1')){
		return '7';
	}
	else if((a=='8')&&(b=='2')){
		return '6';
	}
	else if((a=='8')&&(b=='3')){
		return '5';
	}
	else if((a=='8')&&(b=='4')){
		return '4';
	}
	else if((a=='8')&&(b=='5')){
		return '3';
	}
	else if((a=='8')&&(b=='6')){
		return '2';
	}
	else if((a=='8')&&(b=='7')){
		return '1';
	}
	else if((a=='8')&&(b=='8')){
		return '0';
	}
	else if((a=='8')&&(b=='9')){
		return '9';
	}
	else if((a=='9')&&(b=='0')){
		return '9';
	}
	else if((a=='9')&&(b=='1')){
		return '8';
	}
	else if((a=='9')&&(b=='2')){
		return '7';
	}
	else if((a=='9')&&(b=='3')){
		return '6';
	}
	else if((a=='9')&&(b=='4')){
		return '5';
	}
	else if((a=='9')&&(b=='5')){
		return '4';
	}
	else if((a=='9')&&(b=='6')){
		return '3';
	}
	else if((a=='9')&&(b=='7')){
		return '2';
	}
	else if((a=='9')&&(b=='8')){
		return '1';
	}
	else if((a=='9')&&(b=='9')){
		return '0';
	}
	return '0';
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

char compare_deci(list l1,list l2){  // compares two decimal numbers
	node *temp1,*temp2;

	temp1 = l1.topnode();
	temp2 = l2.topnode();

	while(temp1->data!='.' || temp2->data!='.'){
		if(temp1->data=='.' && temp2->data!='.'){
			return '<';
		}
		else if(temp1->data!='.' && temp2->data=='.'){
			return '>';
		}
		else{
			temp1 = temp1->next;
			temp2 = temp2->next;
		}
	}

	temp1 = l1.topnode();
	temp2 = l2.topnode();
	while(temp1->data!='.' && temp2->data!='.'){       
		if(compare_num(temp1->data,temp2->data) == '<'){
			return '<';
		}
		else if(compare_num(temp1->data,temp2->data) == '>'){
			return '>';
		}
		else{
			temp1 = temp1->next;
			temp2 = temp2->next;
		}
	}

	node *temp3 = temp1;
	node *temp4 = temp2;

	while(temp1!=NULL || temp2!=NULL){
		if(temp1==NULL && temp2!=NULL){
			return '<';
		}
		else if(temp1!=NULL && temp2==NULL){
			return '>';
		}
		else{
			temp1 = temp1->next;
			temp2 = temp2->next;
		}
	}

	temp1 = temp3;
	temp2 = temp4;
	while(temp1!=NULL && temp2!=NULL){           // 
		if(compare_num(temp1->data,temp2->data) == '<'){
			return '<';
		}
		else if(compare_num(temp1->data,temp2->data) == '>'){
			return '>';
		}
		else{
			temp1 = temp1->next;
			temp2 = temp2->next;
		}
	}
	return '=';
}

void addzeros(list &l1,list &l2){  // append zeros to make length of number after decimal point
	node *temp1 = l1.topnode();    // same for both numbers. If we are adding two decimals numbers,
	while(temp1->data != '.'){     // poistion of decimal point should be same from end of both numbers
		temp1 = temp1->next;       
	}

	node *temp2 = l2.topnode(); 
	while(temp2->data != '.'){
		temp2 = temp2->next;
	}

	while(temp1 != NULL || temp2 != NULL){
		if(temp1 != NULL && temp2 != NULL){
			temp1 = temp1->next;             
			temp2 = temp2->next;
		}
		else if(temp1 == NULL && temp2 != NULL){
			l1.addend('0');
			temp2 = temp2->next;               
		}
		else if(temp1 != NULL && temp2 == NULL){ 
			l2.addend('0'); 
			temp1 = temp1->next;
		}
	}
}

char compare_whole(list l1,list l2){  // compares two whole numbers
	node *temp1,*temp2;
	temp1 = l1.topnode();
	temp2 = l2.topnode();

	while(temp1!=NULL || temp2!=NULL){
		if(temp1==NULL && temp2!=NULL){
			return '<';
		}
		else if(temp1!=NULL && temp2==NULL){
			return '>';
		}
		else{
			temp1 = temp1->next;
			temp2 = temp2->next;
		}
	}

	temp1 = l1.topnode();
	temp2 = l2.topnode();

	while(temp1!=NULL && temp2!=NULL){
		if(compare_num(temp1->data,temp2->data) == '<'){
			return '<';
		}
		else if(compare_num(temp1->data,temp2->data) == '>'){
			return '>';
		}
		else{
			temp1 = temp1->next;
			temp2 = temp2->next;
		}
	}
	return '=';
}

void addition(list &l1,list &l2){ // adds two numbers which are in list
	node* temp1 = l1.topnode();
	if(temp1->data == '-'){
		l1.deletetop();
	}
	temp1 = l1.topnode();
	temp1->prev = NULL;
	while(temp1->next != NULL){
		temp1 = temp1->next;
	}

	node* temp2 = l2.topnode();
	if(temp2->data == '-'){
		l2.deletetop();
	}
	temp2 = l2.topnode();
	temp2->prev = NULL;
	while(temp2->next != NULL){
		temp2 = temp2->next;
	}

	list l3;

	char carry1 = '0';
	char carry2 = '0';
	char c;
	while(temp1 != NULL || temp2 != NULL){
		if(temp1 != NULL && temp1->data == '.'){
			l3.additem('.');
			temp1 = temp1->prev;
			temp2 = temp2->prev;
		}
		else if(temp1 != NULL && temp2 != NULL){
			carry1 = carry2;                        
			addchars(temp1->data,temp2->data,c,carry2); 
	                                                    
			if(carry2 == '1') addchars(c,carry1,c,carry1);
			else addchars(c,carry1,c,carry2);

			l3.additem(c);
			temp1 = temp1->prev;
			temp2 = temp2->prev;
		}
		else if(temp1 != NULL && temp2 == NULL){ 
			addchars(temp1->data,carry2,c,carry2);
			l3.additem(c);
			temp1 = temp1->prev;
		}
		else if(temp1 == NULL && temp2 != NULL){
			addchars(temp2->data,carry2,c,carry2);
			l3.additem(c);
			temp2 = temp2->prev;
		}
	}

	if(carry2 == '1'){
		l3.additem(carry2);
	}
	l1 = l3;
}

void subtraction(list &l1,list &l2){ // subtract two numbers which are
	node *temp1 = l1.topnode();             // in the form of list
	if(temp1->data == '-'){
		l1.deletetop();
	}
	temp1 = l1.topnode();
	temp1->prev = NULL;

	node *temp2 = l2.topnode();
	if(temp2->data == '-'){
		l2.deletetop();
	}
	temp2 = l2.topnode();
	temp2->prev = NULL;

	while(temp1->next != NULL){
		temp1 = temp1->next;
	}
	while(temp2->next != NULL){
		temp2 = temp2->next;
	}

	list l3;

	char borrow = '0';
	char zero = '0';

	while(temp1!=NULL && temp2!=NULL){
		if(temp1->data == '.'){
			l3.additem('.');
			temp1 = temp1->prev;
			temp2 = temp2->prev;
		}
		else if(temp1 != NULL && temp2 != NULL){
			if(borrow == '1' || zero == '1'){
				if(temp1->data == '0'){
					temp1->data = '9';
					zero = '1';
				}
				else{
					temp1->data = subtractchars(temp1->data,'1');
					zero = '0';
				}
			}

			if(compare_num(temp1->data,temp2->data) == '<'){
				l3.additem(subtractchars(temp1->data,temp2->data));
				borrow = '1';
			}
			else{
				l3.additem(subtractchars(temp1->data,temp2->data));
				borrow = '0';
			}

			temp1 = temp1->prev;
			temp2 = temp2->prev;
		}
	}

	while(temp1 != NULL){
		if(borrow == '1' || zero == '1'){
			if(temp1->data == '0'){
				temp1->data = '9';
				zero = '1';
			}
			else{
				temp1->data = subtractchars(temp1->data,'1');
				zero = '0';
			}
		}
		borrow = '0';
		l3.additem(temp1->data);
		temp1 = temp1->prev;
	}
	frontzeros(l3);
	l1 = l3;
}

void shiftdeci(list &l){
	node *temp = l.topnode();
	while(temp!=NULL && temp->data!='.'){
		temp = temp->next;
	}

	l.addend('0');
	char c = temp->next->data;
	temp->next->data = temp->data;
	temp->data = c;
}

void division(list l1,list l2,list &q,list k){
	node *temp1 = l1.topnode();
	node *temp2 = l2.topnode();
	char whole_number = '0';
	while(temp1 != NULL && temp1->data != '.'){
		temp1 = temp1->next;
	}
	while(temp2 != NULL && temp2->data != '.'){
		temp2 = temp2->next;
	}

	if(temp1!=NULL && temp2==NULL){
		l2.addend('.');
		l2.addend('0');
		addzeros(l1,l2);
	}
	else if(temp1==NULL && temp2!=NULL){
		l1.addend('.');
		l1.addend('0');
		addzeros(l1,l2);
	}
	else if(temp1!=NULL && temp2!=NULL){
		addzeros(l1,l2);
	}
	else whole_number = '1';

	list l3,l4;
	copy(l1,l3);
	copy(l2,l4);

	temp1 = l1.topnode();
	temp2 = l2.topnode();

	if(temp1->data == '-'){
		l3.deletetop();
	}
	if(temp2->data == '-'){
		l4.deletetop();
	}

	list qtemp;
	qtemp.addend('1');
	q.addend('0');

	if(whole_number == '0'){
		while(compare_deci(l3,l4) == '>'){
			subtraction(l3,l4);
			addition(q,qtemp);
		}

		if(compare_deci(l3,l4) == '='){
			addition(q,qtemp);
			return;
		}
	}
	else{
		while(compare_whole(l3,l4) == '>'){
			subtraction(l3,l4);
			addition(q,qtemp);
		}

		if(compare_whole(l3,l4) == '='){
			addition(q,qtemp);
			return;
		}
	}

	q.addend('.');
	char a,b;
	do{
		if(whole_number == '1'){
			l3.addend('0');
			a = '0';
			while(compare_whole(l3,l4) == '>'){
				subtraction(l3,l4);
				addchars(a,'1',a,b);
			}
			if(compare_whole(l3,l4) == '='){
				subtraction(l3,l4);
				addchars(a,'1',a,b);
			}
			q.addend(a);
		}
		else{
			a = '0';
			shiftdeci(l3);
			frontzeros(l3);
			//l3.display();
			while(compare_deci(l3,l4) == '>'){
				subtraction(l3,l4);
				addchars(a,'1',a,b);
			}
			if(compare_deci(l3,l4) == '='){
				subtraction(l3,l4);
				addchars(a,'1',a,b);
			}
			q.addend(a);
		}
		subtraction(k,qtemp);
	}while(compare_whole(k,qtemp) != '<');

	temp1 = l1.topnode();
	temp2 = l2.topnode();
	if(temp1->data=='-' && temp2->data!='-'){
		q.additem('-');
	}
	else if(temp1->data!='-' && temp2->data=='-'){
		q.additem('-');
	}
}

int main(){
	fstream file;

	file.open("input.txt"); // input file

	char c;
	list l1,l2,k;

	while(file.get(c) && c != '\n'){
		l1.addend(c);                // reading first number from input file
	}

	while(file.get(c) && c != '\n'){
		l2.addend(c);           // reading second number from input file
	}

	while(file.get(c)){
		k.addend(c);
	}

	l1.display();
	l2.display();
	k.display();

	list q;  // quotient
	
	node *temp = l2.topnode();
	while(temp != NULL){
		if(temp->data == '0' || temp->data == '.'){
			temp = temp->next;    // if the second number is zero
		}
		else break;
	}
	if(temp == NULL){
		cout<<"Division by zero\n";
	}
	else{
		division(l1,l2,q,k);

		q.display();
	}

	file.close();          // Closing the file
	return 0;
}