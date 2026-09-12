/* Structure of AVL Tree Node
class Node {
	public:
	int data;
	int height;
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
		Node *childright = child->right;
		child->right = root;
		root->left = childright;
		root->height = 1 + max(getheight(root->left), getheight(root->right));
		child->height = 1 + max(getheight(child->left), getheight(child->right));
		return child;
	}
	// left rotation
	Node *leftrotation(Node *root)
	{
		Node *child = root->right;
		Node *childleft = child->left;
		child->left = root;
		root->right = childleft;
		root->height = 1 + max(getheight(root->left), getheight(root->right));
		child->height = 1 + max(getheight(child->left), getheight(child->right));
		return child;
	}
	Node* insertToAVL(Node* root, int key) {
		// code here
		
		if (root == NULL)
			{
			return new Node(key);
		}
		if (key < root->data)
			{
			root->left = insertToAVL(root->left, key);
		}
		else if (key > root->data)
			{
			root->right = insertToAVL(root->right, key);
		}
		else
			{
			return root;
		}
		// check height
		root->height = 1 + max(getheight(root->left), getheight(root->right));
		// check balance
		int balance = getbalance(root);
		// left left
		if (balance > 1 && key < root->left->data)
			{
			root = rightrotation(root);
		}
		// left right
		else if (balance > 1 && key > root->left->data)
			{
			root->left = leftrotation(root->left);
			root = rightrotation(root);
		}
		// right right
		else if (balance < -1 && key > root->right->data)
			{
			root = leftrotation(root);
		}
		// right left
		else if (balance < -1 && key < root->right->data)
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