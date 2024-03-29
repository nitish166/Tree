bool isBST(Node* root)
{
	if(isBSTUtil(root, INT_MIN, INT_MAX)==1)
	{
		return true;
	}
	else
	{
		return false;
	}
	
}
int isBSTUtil(struct Node* node, int min, int max)
{
	if(node==NULL)
	return 1;
	if(node->data<min||node->data>max)
	{
		return 0;
	}
	return isBSTUtil(node->left,min,node->data-1) &&
	isBSTUtil(node->right,  node->data+1,max);
	
	
}
