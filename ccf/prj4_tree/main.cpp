#include <iostream>
using namespace std;
struct tree
{
	int data;
	tree *last;
	tree *left;
	tree *right;
}
class binary_tree
{
	tree *root;
	int rcreate(tree *p,int k,int end);
	int pre_traverse(tree *p);
	int in_traverse(tree *p);
	int post_traverse(tree *p);
	pubilc:
		binary_tree()
		{
		}
}
int main()//Trifurcate Linked List
{
	
	return 0;
}
