// Program to store information read from business cards into a sorted linked list
// and save out to a file.
// Note: Uses nullptr, so need to make sure your compiler is set to use C++11
//       In Code::Blocks this is under Settings==>Compiler
#include <iostream>
#include "buscard.h"

using namespace std;

// Adds data to an existing node
// Pre: Valid NodePtr w/ allocated memory
// Post: NodePtr contains valid info or set to nullptr if no info
void GetNodeInfo(NodePtr &np);

// Fills in the info for a customer
// Pre: Valid CustomerType variable
// Post: CustomerType filled with info entered by user
void FillCustomerInfo(CustomerType &cust);

// Allocates memory and initializes nodePtr->next to NULL
// Pre: None
// Post: Allocated nodePtr with ->next set to NULL
NodePtr CreateNode();

// Inserts node into list in sorted location
// Pre: Valid pointer for list and prefilled NodePtr
// Post: Sorted list
void AddNode(NodePtr &head, NodePtr np);

// Prints out list
// Pre: Valid nodeptr
void PrintList(NodePtr np);

// Save data to file
// Pre: Valid nodeptr
void SaveFile(NodePtr np);

// Takes a string, making the first letter uppercase and remainder lowercase
// Pre: Valid string passed as argument
// Post: Returns a normalized string
string NormalizeString(string str);

int main()
{
    NodePtr headPtr = nullptr;  // Pointer to entire list (If you're getting an error on this line, read the comment at the top)
    NodePtr newPtr = nullptr;   // Pointer for new nodes being added

    // Loop until user is finished entering Business Cards
        newPtr = CreateNode();
        GetNodeInfo(newPtr);
        AddNode(headPtr, newPtr);

    // Save File
    SaveFile(headPtr);

    return 0;
}

NodePtr CreateNode()
{
    cout << "In GetNode" << endl;

    NodePtr newNode = new NodeType;

    return newNode;
}

void GetNodeInfo(NodePtr& np)
{
    cout << "In GetNodeInfo" << endl;

    FillCustomerInfo(np->customer);
}

void FillCustomerInfo(CustomerType &cust){
    cout << "In FillCustomerInfo" << endl;

    // Prompt user for info

    // Normalize first and last name entered
    cust.lastName = NormalizeString(cust.lastName);
    cust.firstName = NormalizeString(cust.firstName);
}

void AddNode(NodePtr& head, NodePtr np)
{
    cout << "In InsertNode" << endl;
}

void PrintList(NodePtr np)
{
    cout << "In PrintList" << endl;
}

void SaveFile(NodePtr np)
{
    cout << "In SaveFile" << endl;
}

string NormalizeString(string str){
    cout << "In NormalizeString" << endl;
}
