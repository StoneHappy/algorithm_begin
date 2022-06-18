#pragma once
#include <vector>
namespace BinaryTree
{
	struct TreeNode {
		int val;
		TreeNode* left;
		TreeNode* right;
		TreeNode() : val(0), left(nullptr), right(nullptr) {}
		TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
		TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
	};

	class Node {
	public:
		int val;
		Node* left;
		Node* right;
		Node* next;

		Node() : val(0), left(NULL), right(NULL), next(NULL) {}

		Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

		Node(int _val, Node* _left, Node* _right, Node* _next)
			: val(_val), left(_left), right(_right), next(_next) {}

		bool operator==(const Node& other) {
			Node* nextThis = this->next;
			Node* nextOther = other.next;
			bool rnt = true;
			while (nextThis && nextOther)
			{
				if (nextThis->val != nextThis->val)
				{
					return false;
				}
				nextThis = nextThis->next;
				nextOther = nextOther->next;
			}

			rnt = (this->left == other.left) && (this->right == other.right);

			return rnt;
		}
	};

	namespace diameterOfBinaryTree
	{
		int diameterOfBinaryTree(TreeNode* root);
	}

	namespace preorderTraversal
	{
		std::vector<int> preorderTraversal(TreeNode* root);
	}

	namespace invertTree
	{
		TreeNode* invertTree(TreeNode* root);
	}

	namespace connect
	{
		Node* connect(Node* root);
	}
	
}