//Shivangi Singh
//24070123148
//B3
#include<iostream>
using namespace std;
class Node{
  public:
  int val;
  Node* next;
  //constructor to initialise node
  Node (int data)
  {
  val=data;
  next=NULL;
  }
  };
  int  main(){
      Node *n= new Node(1);
      cout<<n->val<<""<<n->next<<endl;
      return 0;
  }
/*Output
10
*/
