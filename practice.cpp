#include <iostream>
using namespace std;

//your code here/////////////////////////////////
////////////////////////////////////////////////



//////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////

int main() {

	//stack test////////////////////////////////////////////// class stack{};
	cout << "stack test should output: 3, 2, 7\n";
	stack t;
	t.push(1);
	t.push(2);
	t.push(3);
	cout << t.pop() << endl; //3
	cout << t.pop() << endl; //2
	t.push(4);
	t.push(5);
	t.push(6);
	t.push(7);
	cout << t.pop() << endl; //7
	cout << endl;

	//queue test/////////////////////////////////////////////// class queue{};
	cout << "queue test should output: 1, 2, 3, 4\n";
	queue r;
	r.enq(1);
	r.enq(2);
	cout << r.deq() << endl; //1
	r.enq(3);
	r.enq(4);
	r.enq(5);
	cout << r.deq() << endl; //2
	cout << r.deq() << endl; //3
	r.enq(6);
	r.enq(7);
	cout << r.deq() << endl; //4
	cout << endl;

	//sort test/////////////////////////////////////////////// void sort(int* A, int start, int end)
	cout << "Sorting test:\n";
	int array[5] = { 6,3,8,1,3 };
	cout << "unsorted array:\n";
	for (int i = 0; i < 5; i++) {
		cout << array[i] << " ";
	}
	cout << endl;
	sort(array, 0, 4);
	cout << "sorted array should output: 1 3 3 6 8 :\n";
	for (int i = 0; i < 5; i++) { //should output: 1 3 3 6 8 
		cout << array[i] << " ";
	}
	cout << endl << endl;

	//counting up test////////////////////////////////////////////

	/*
	first function should use a while loop
	void whileCount(int x)

	next function should use a for loop
	void forCount(int x)

	last function should use recursion
	void recCount(int x)
	*/
	cout << "Count up test:\n";
	cout << "While loop: ";
	whileCount(5);
	cout << endl;
	cout << "For loop: ";
	forCount(5);
	cout << endl;
	cout << "Recursion: ";
	recCount(5);
	cout << endl << endl;
	
	//recursion count down test//////////////////////////////////////// void recCountDown(int x)
	cout << "Recursion count down test should output '5 4 3 2 1' :\n";
	recCountDown(5);
	cout << endl << endl;

	//2D Array test//////////////////////////////////////////////////// void array()
	/*
	Write a function that creates and prints a 3 by 5 2D char array of the character o.
	The output should be: 

	ooo
	ooo
	ooo
	ooo
	ooo

	*/
	cout << "2D array test should output: \nKey...\n";
	cout << "ooo\nooo\nooo\nooo\nooo\n\nYour code...\n";

	TwoDarray();
	cout << endl;

	//Know your pointers//////////////////////////////////////////////// Review output (no code to write)
	int x = 3;
	int y = 5;

	int* p;
	p = &x;

	cout << "CODE:\n\nint x = 3;\nint y = 5;\n\nint* p;\np = &x;\n\n";
	cout << "OUTPUT:\np = " << p << endl;
	cout << "*p = " << *p << endl;

	*p = y;
	cout << "\nCODE:\n\n*p = y;\n\n";
	cout << "OUTPUT:\n\nx = " << x << endl;
	cout << endl;

	//Linked list////////////////////////////////////////////////////////// class node{};
	/*
	Write code here in main that creates a linked list using the node class you create 
	to carry three ints, 8 4 6, in that order. 
	*/

	//Your code here//

  
  
	/////////////////

	//Print linked list////////////////////////////////////////////////////// void linkedListPrint(node* n)
	// use recursion or a while loop to print your linked list 
	cout << "Linked List test should output: 8 4 6\n";
	linkedListPrint(A);
	cout << endl;
	cout << "Linked List test should output: 4 6\n";
	linkedListPrint(B);
	cout << endl;

	cout << "\nThis is the end of the test...\nDid you get them all right???\n";
	return 0;
}
