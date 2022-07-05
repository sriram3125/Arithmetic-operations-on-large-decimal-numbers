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

	if(head == NULL)  // the first instance where the head and tail separate out
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
		l.deletetop();
		temp = l.topnode();
	}

	if(temp == NULL){
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

void multiply(char a,char b,char &value,char &carry){ // multiply two chars and updates the
	if(a == '0'){                                    // char values value and carry
		value = '0';
		carry = '0';
	}
	else if(a == '1'){
		value = b;
		carry = '0';
	}
	else if((a == '2')&&(b == '0')){
		value = '0';
		carry = '0';
	}
	else if((a == '2')&&(b == '1')){
		value = '2';
		carry = '0';
	}
	else if((a == '2')&&(b == '2')){
		value = '4';
		carry = '0';
	}
	else if((a == '2')&&(b == '3')){
		value = '6';
		carry = '0';
	}
	else if((a == '2')&&(b == '4')){
		value = '8';
		carry = '0';
	}
	else if((a == '2')&&(b == '5')){
		value = '0';
		carry = '1';
	}
	else if((a == '2')&&(b == '6')){
		value = '2';
		carry = '1';
	}
	else if((a == '2')&&(b == '7')){
		value = '4';
		carry = '1';
	}
	else if((a == '2')&&(b == '8')){
		value = '6';
		carry = '1';
	}
	else if((a == '2')&&(b == '9')){
		value = '8';
		carry = '1';
	}
	else if((a == '3')&&(b == '0')){
		value = '0';
		carry = '0';
	}
	else if((a == '3')&&(b == '1')){
		value = '3';
		carry = '0';
	}
	else if((a == '3')&&(b == '2')){
		value = '6';
		carry = '0';
	}
	else if((a == '3')&&(b == '3')){
		value = '9';
		carry = '0';
	}
	else if((a == '3')&&(b == '4')){
		value = '2';
		carry = '1';
	}
	else if((a == '3')&&(b == '5')){
		value = '5';
		carry = '1';
	}
	else if((a == '3')&&(b == '6')){
		value = '8';
		carry = '1';
	}
	else if((a == '3')&&(b == '7')){
		value = '1';
		carry = '2';
	}
	else if((a == '3')&&(b == '8')){
		value = '4';
		carry = '2';
	}
	else if((a == '3')&&(b == '9')){
		value = '7';
		carry = '2';
	}
	else if((a == '4')&&(b == '0')){
		value = '0';
		carry = '0';
	}
	else if((a == '4')&&(b == '1')){
		value = '4';
		carry = '0';
	}
	else if((a == '4')&&(b == '2')){
		value = '8';
		carry = '0';
	}
	else if((a == '4')&&(b == '3')){
		value = '2';
		carry = '1';
	}
	else if((a == '4')&&(b == '4')){
		value = '6';
		carry = '1';
	}
	else if((a == '4')&&(b == '5')){
		value = '0';
		carry = '2';
	}
	else if((a == '4')&&(b == '6')){
		value = '4';
		carry = '2';
	}
	else if((a == '4')&&(b == '7')){
		value = '8';
		carry = '2';
	}
	else if((a == '4')&&(b == '8')){
		value = '2';
		carry = '3';
	}
	else if((a == '4')&&(b == '9')){
		value = '6';
		carry = '3';
	}
	else if((a == '5')&&(b == '0')){
		value = '0';
		carry = '0';
	}
	else if((a == '5')&&(b == '1')){
		value = '5';
		carry = '0';
	}
	else if((a == '5')&&(b == '2')){
		value = '0';
		carry = '1';
	}
	else if((a == '5')&&(b == '3')){
		value = '5';
		carry = '1';
	}
	else if((a == '5')&&(b == '4')){
		value = '0';
		carry = '2';
	}
	else if((a == '5')&&(b == '5')){
		value = '5';
		carry = '2';
	}
	else if((a == '5')&&(b == '6')){
		value = '0';
		carry = '3';
	}
	else if((a == '5')&&(b == '7')){
		value = '5';
		carry = '3';
	}
	else if((a == '5')&&(b == '8')){
		value = '0';
		carry = '4';
	}
	else if((a == '5')&&(b == '9')){
		value = '5';
		carry = '4';
	}
	else if((a == '6')&&(b == '0')){
		value = '0';
		carry = '0';
	}
	else if((a == '6')&&(b == '1')){
		value = '6';
		carry = '0';
	}
	else if((a == '6')&&(b == '2')){
		value = '2';
		carry = '1';
	}
	else if((a == '6')&&(b == '3')){
		value = '8';
		carry = '1';
	}
	else if((a == '6')&&(b == '4')){
		value = '4';
		carry = '2';
	}
	else if((a == '6')&&(b == '5')){
		value = '0';
		carry = '3';
	}
	else if((a == '6')&&(b == '6')){
		value = '6';
		carry = '3';
	}
	else if((a == '6')&&(b == '7')){
		value = '2';
		carry = '4';
	}
	else if((a == '6')&&(b == '8')){
		value = '8';
		carry = '4';
	}
	else if((a == '6')&&(b == '9')){
		value = '4';
		carry = '5';
	}
	else if((a == '7')&&(b == '0')){
		value = '0';
		carry = '0';
	}
	else if((a == '7')&&(b == '1')){
		value = '7';
		carry = '0';
	}
	else if((a == '7')&&(b == '2')){
		value = '4';
		carry = '1';
	}
	else if((a == '7')&&(b == '3')){
		value = '1';
		carry = '2';
	}
	else if((a == '7')&&(b == '4')){
		value = '8';
		carry = '2';
	}
	else if((a == '7')&&(b == '5')){
		value = '5';
		carry = '3';
	}
	else if((a == '7')&&(b == '6')){
		value = '2';
		carry = '4';
	}
	else if((a == '7')&&(b == '7')){
		value = '9';
		carry = '4';
	}
	else if((a == '7')&&(b == '8')){
		value = '6';
		carry = '5';
	}
	else if((a == '7')&&(b == '9')){
		value = '3';
		carry = '6';
	}
	else if((a == '8')&&(b == '0')){
		value = '0';
		carry = '0';
	}
	else if((a == '8')&&(b == '1')){
		value = '8';
		carry = '0';
	}
	else if((a == '8')&&(b == '2')){
		value = '6';
		carry = '1';
	}
	else if((a == '8')&&(b == '3')){
		value = '4';
		carry = '2';
	}
	else if((a == '8')&&(b == '4')){
		value = '2';
		carry = '3';
	}
	else if((a == '8')&&(b == '5')){
		value = '0';
		carry = '4';
	}
	else if((a == '8')&&(b == '6')){
		value = '8';
		carry = '4';
	}
	else if((a == '8')&&(b == '7')){
		value = '6';
		carry = '5';
	}
	else if((a == '8')&&(b == '8')){
		value = '4';
		carry = '6';
	}
	else if((a == '8')&&(b == '9')){
		value = '2';
		carry = '7';
	}
	else if((a == '9')&&(b == '0')){
		value = '0';
		carry = '0';
	}
	else if((a == '9')&&(b == '1')){
		value = '9';
		carry = '0';
	}
	else if((a == '9')&&(b == '2')){
		value = '8';
		carry = '1';
	}
	else if((a == '9')&&(b == '3')){
		value = '7';
		carry = '2';
	}
	else if((a == '9')&&(b == '4')){
		value = '6';
		carry = '3';
	}
	else if((a == '9')&&(b == '5')){
		value = '5';
		carry = '4';
	}
	else if((a == '9')&&(b == '6')){
		value = '4';
		carry = '5';
	}
	else if((a == '9')&&(b == '7')){
		value = '3';
		carry = '6';
	}
	else if((a == '9')&&(b == '8')){
		value = '2';
		carry = '7';
	}
	else if((a == '9')&&(b == '9')){
		value = '1';
		carry = '8';
	}
}

void multiplychars(char a,char b,char &carry,char &value){ // multiplies two chars and add its value
	char x,y;                                              // to carry and the original value in the node
	char mulcarry,mulvalue;

	multiply(a,b,mulvalue,mulcarry);
	x = mulcarry;
	y = mulvalue;

	addchars(y,carry,y,mulcarry);
	addchars(x,mulcarry,x,mulcarry);
	addchars(y,value,y,mulcarry);
	addchars(x,mulcarry,x,mulcarry);

	carry = x;
	value = y;
}

void multiplication(list l1,list l2,list &l3){ //multiplies two numbers in the form of list
	node *temp1 = l1.topnode();
	node *temp2 = l2.topnode();

	if(temp1 == NULL || temp2 == NULL){
		return;
	}

	if(temp1->data == '-'){
		l1.deletetop();
		temp1 = l1.topnode();
	}
	if(temp2->data == '-'){
		l2.deletetop();
		temp2 = l2.topnode();
	}

	while(temp1 != NULL){
		l3.addend('0');
		temp1 = temp1->next;
	}
	while(temp2 != NULL){
		l3.addend('0');
		temp2 = temp2->next;
	}

	node *temp3 = l3.topnode();
	while(temp3->next != NULL){
		temp3 = temp3->next;
	}
	temp1 = l1.topnode();
	temp2 = l2.topnode();
	char decimal = '0';
	while(temp1!=NULL && temp1->data != '.'){
		temp1 = temp1->next;
	}
	if(temp1 != NULL){
		decimal = '1';
	}
	while(temp1!=NULL && temp1->next != NULL){
		temp3 = temp3->prev;
		temp1 =  temp1->next;
	}

	while(temp2!=NULL && temp2->data != '.'){
		temp2 = temp2->next;
	}
	if(temp2 != NULL){
		decimal = '1';
	}
	while(temp2!=NULL && temp2->next != NULL){
		temp3 = temp3->prev;
		temp2 =  temp2->next;
	}
	if(decimal == '1'){
		temp3->data = '.';
	}
	// l3.display();

	temp1 = l1.topnode();
	while(temp1->next != NULL){
		temp1 = temp1->next;
	}

	temp2 = l2.topnode();
	while(temp2->next != NULL){
		temp2 = temp2->next;
	}

	temp3 = l3.topnode();
	while(temp3->next != NULL){
		temp3 = temp3->next;
	}

	node *temp4 = temp2;
	node *temp5;
	char val,carry = '0';
	while(temp1 != NULL){
		if(temp1->data == '.') temp1 = temp1->prev;
		if(temp3->data == '.') temp3 = temp3->prev;
		temp5 = temp3;
		temp2 = temp4;
		carry = '0';
		while(temp2 != NULL){
			if(temp2->data == '.') temp2 = temp2->prev;
			if(temp5->data == '.') temp5 = temp5->prev;
			val = temp5->data;
			multiplychars(temp1->data,temp2->data,carry,val);
			temp5->data = val;
			temp2 = temp2->prev;
			temp5 = temp5->prev;
		}
		if(temp5->data == '.') temp5 = temp5->prev;
		temp5->data = carry;
		temp1 = temp1->prev;
		temp3 = temp3->prev;
	}

	frontzeros(l3);
}

void addition(list &l1,list &l2){ // adds two numbers which are in list
	node* temp1 = l1.topnode();
	temp1->prev = NULL;
	while(temp1->next != NULL){
		temp1 = temp1->next;
	}

	node* temp2 = l2.topnode();
	temp2->prev = NULL;
	while(temp2->next != NULL){
		temp2 = temp2->next;
	}

	list l3;

	char carry1 = '0';
	char carry2 = '0';
	char c;
	while(temp1 != NULL || temp2 != NULL){
		if(temp1 != NULL && temp2 != NULL){
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
	temp1->prev = NULL;

	node *temp2 = l2.topnode();
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

void nodigits(list l1,list l2,list &qtemp){
	node *temp1 = l1.topnode();
	node *temp2 = l2.topnode();

	while((temp2 != NULL)){
		temp1 = temp1->next;
		temp2 = temp2->next;
	}

	while(temp1!=NULL && temp1->next != NULL){
		temp1 = temp1->next;
		qtemp.addend('0');
	}	
}

void division(list l1,list l2,list &q,list &r){
	q.addend('0');

	while(compare_whole(l1,l2) == '>'){
		list qtemp;
		qtemp.addend('1');
		nodigits(l1,l2,qtemp);
		list l3;
		multiplication(l2,qtemp,l3);
		while(compare_whole(l1,l3) == '>'){
			subtraction(l1,l3);
			addition(q,qtemp);
		}
	}	

	list qtemp2;
	qtemp2.addend('1');

	if(compare_whole(l1,l2) == '='){
		addition(q,qtemp2);
		r.addend('0');
	}
	else{
		r = l1;
	}
}

void integer_division(list l1,list l2,list &q,list &r){
	node *temp1 = l1.topnode();
	node *temp2 = l2.topnode();

	if(temp1==NULL || temp2==NULL){
		return;
	}

	list l3,l4;
	copy(l1,l3);
	copy(l2,l4);

	if(temp1->data == '-'){
		l3.deletetop();
	}
	if(temp2->data == '-'){
		l4.deletetop();
	}

	if(compare_whole(l3,l4) == '<'){
		q.addend('0');
		r = l1;
	}
	else if(compare_whole(l3,l4) == '='){
		q.addend('1');
		r.addend('0');
		if(temp1->data != '-' && temp2->data == '-'){
			q.additem('-');
		}
		else if(temp1->data == '-' && temp2->data != '-'){
			q.additem('-');
		}
	}
	else{
		division(l3,l4,q,r);
		if(temp1->data == '-' && temp2->data == '-'){
			r.additem('-');
		}
		else if(temp1->data != '-' && temp2->data == '-'){
			q.additem('-');
		}
		else if(temp1->data == '-' && temp2->data != '-'){
			q.additem('-');
			r.additem('-');
		}
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
	l2.display();

	list q; //quotient
	list r; //remainder

	node *temp = l2.topnode();
	while(temp != NULL){
		if(temp->data == '0'){
			temp = temp->next;    // if the second number is zero
		}
		else break;
	}
	if(temp == NULL){
		cout<<"Division by zero\n";
	}
	else{
		integer_division(l1,l2,q,r);

		q.display();
		r.display();
	}
	
	file.close();          // Closing the file
	return 0;
}