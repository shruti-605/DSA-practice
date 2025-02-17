#include<iostream>
#include<queue>
using namespace std;
class Node{
	public:
	  int data;
	  Node* left;
	  Node* right;
	  
	  Node(int d){
	  	this->data=d;
	  	this->left=NULL;
	  	this->right=NULL;
	  }	
};
//inorder traversal
void inOrder(Node* root){
	//base case
	if(root==NULL){
		return;
	}
	inOrder(root->left);
	cout<<root->data<<" ";
	inOrder(root->right);
}
void preOrder(Node* root){
	//base case
	if(root==NULL){
		return;
	}
	cout<<root->data<<" ";
	preOrder(root->left);
	preOrder(root->right);
}
void postOrder(Node* root){
	//base case
	if(root==NULL){
		return;
	}
	postOrder(root->left);
	postOrder(root->right);
	cout<<root->data<<" ";
}
//using levelOrder traversal
void levelOrderTraversal(Node* root){
	if(root==NULL) return;
	queue<Node*> q;//stores node levelby level
	q.push(root);
	q.push(NULL);//indicate end level of 0
	
	while(!q.empty()){
		Node* temp=q.front();
		cout<<temp->data<<" ";
		q.pop();
		//it is for separator that previous level is done
		if(temp==NULL){
			//purana level complete traverse ho chuka hain
			cout<<endl;//new line to seperate level
			if(!q.empty()){
				//queue still has some child
				q.push(NULL);//push another null to mark end of level
			}
		}else{
			cout<<temp->data<<" ";//temp not null print data 
			if(temp->left){
				q.push(temp->left);
			}
			if(temp->right){
				q.push(temp->right);
			}
		}
	}	
}
Node* insertIntoBST(Node* root,int d){
	//base case
	if(root==NULL){
		root=new Node(d);
		return root;
	}
	if(d>root->data){
		//right part me insert krna hian
		root->right=insertIntoBST(root->right,d);
	}
	else{
		root->left=insertIntoBST(root->left,d);
	}
	return root;
}
void takeInput(Node* &root){
	int data;
	cin>>data;
	while(data!=-1){
		root=insertIntoBST(root,data);
		cin>>data;
	}
	
}
int main(){
	Node* root=NULL;
	
	cout<<"Enter data to create BST"<<endl;
	takeInput(root);
	
	cout<<"Printing the BST"<<endl;
	levelOrderTraversal(root);
	
	return 0;
}
