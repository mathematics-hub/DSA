/* Structure of AVL Tree Node
class Node {
	public:
	int data, height;
	Node *left, *right;
	
	Node(int x) {
		data = x;
		height = 1;
		left = right = nullptr;
	}
}; */
class Solution {
	public:
	int getheight(Node *root)
	{
		if (root == NULL)
			{
			return 0;
		}
		return root->height;
	}
	int getbalance(Node *root)
	{
		return getheight(root->left) - getheight(root->right);
	}
	// right rotation
	Node *rightrotation(Node *root)
	{
		Node *child = root->left;
		Node *rightchild = child->right;
		child->right = root;
		root->left = rightchild;
		root->height = 1 + max(getheight(root->left), getheight(root->right));
		child->height = 1 + max(getheight(child->left), getheight(child->right));
		return child;
	}
	
	// left rotation
	Node *leftrotation(Node *root)
	{
		Node *child = root->right;
		Node *leftchild = child->left;
		child->left = root;
		root->right = leftchild;
		root->height = 1 + max(getheight(root->left), getheight(root->right));
		child->height = 1 + max(getheight(child->left), getheight(child->right));
		return child;
	}
	Node* deleteNode(Node* root, int key) {
		// code here
		if (root == NULL)
			{
			return NULL;
		}
		if (key < root->data)
			{
			root->left = deleteNode(root->left, key);
		}
		else if (key > root->data)
			{
			root->right = deleteNode(root->right, key);
		}
		else
			{
			if (!root->left && !root->right)
				{
				delete root;
				return NULL;
			}
			else if (root->right == NULL)
				{
				Node *temp = root->left;
				delete root;
				return temp;
			}
			else if (root->left == NULL)
				{
				Node *temp = root->right;
				delete root;
				return temp;
			}
			else
				{
				Node *temp = root->right;
				while (temp->left)
					{
					temp = temp->left;
				}
				root->data = temp->data;
				root->right = deleteNode(root->right, temp->data);
			}
		}
		// update height
		root->height = 1 + max(getheight(root->left), getheight(root->right));
		// check balance
		int balance = getbalance(root);
		// left left
		if (balance > 1 && getbalance(root->left) >= 0)
			{
			root = rightrotation(root);
		}
		// left right
		else if (balance > 1 && getbalance(root->left) < 0)
			{
			root->left = leftrotation(root->left);
			root = rightrotation(root);
		}
		// right right
		else if (balance < -1 && getbalance(root->right) <= 0)
			{
			root = leftrotation(root);
		}
		// right left
		else if (balance < -1 && getbalance(root->right) > 0)
			{
			root->right = rightrotation(root->right);
			root = leftrotation(root);
		}
		return root;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna