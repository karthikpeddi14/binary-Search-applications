int Floor(BinaryTreeNode<int> *node, int input)
{
	int floor= -1;
	while(node)
	{
		if(input == node->data) return node->data;
		if(input> node->data) 
		{
			floor = node->data;
			node = node->right;
		}
		else
		{
			node= node->left;
		}
	}
	return floor;
}
