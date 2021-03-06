#include<bits/stdc++.h>
using namespace std;
#define read() freopen("input.txt", "r", stdin);
#define write() freopen("output.txt", "w", stdout);
#define ll long long int 

struct Node 
{
	char data;
	Node *left;
	Node *right;
	
};

Node *Insert(Node *root, char data)
{
	if(root==NULL)
	{
		root=new Node();
		root->data=data;
		root->left=root->right=NULL;
	}
    else if(data<= root->data)
	   root->left=Insert(root->left,data);
	else 
	   root->right=Insert(root->right,data);
	 

	return root;
}
 void PreOrder(Node *root)
 {
 	  if(root==NULL) return ;
 	  cout<<root->data<<" ";
 	  PreOrder(root->left);

 	 // cout<<root->data<<" ";
 	  PreOrder(root->right);
 }
int main()
{
	#ifdef asiuzzaman
	read(); write();
	#endif


    
    /*Code To Test the logic
	  Creating an example tree
	            M
			   / \
			  B   Q
			 / \   \
			A   C   Z
    */
    
   Node *root=NULL;
   root=Insert(root,'M');
   root=Insert(root,'B');
   root=Insert(root,'Q');
   root=Insert(root,'A');
   root=Insert(root,'C');
   root=Insert(root,'Z');
  
   PreOrder(root);
}