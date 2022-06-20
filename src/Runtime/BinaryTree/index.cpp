#include <iostream>
#include "index.h"

namespace BinaryTree
{
	namespace diameterOfBinaryTree
	{
		int globalDiameter = 0;
		int maxDepth(TreeNode* root)
		{
			if (root == nullptr)
			{
				return 0;
			}

			int leftMax = maxDepth(root->left);
			int rightMax = maxDepth(root->right);

			int localDiameter = leftMax + rightMax;
			globalDiameter = std::max(globalDiameter, localDiameter);
			return 1 + std::max(leftMax, rightMax);
		}
		int diameterOfBinaryTree(TreeNode* root)
		{
			maxDepth(root);
			return globalDiameter;
		}
	}

	namespace preorderTraversal
	{
		std::vector<int> preorderTraversal(TreeNode* root)
		{
			if (!root)
			{
				return {};
			}

			auto vl = preorderTraversal(root->left);
			auto vr = preorderTraversal(root->right);

			std::vector<int> rnt = {root->val};
			
			rnt.insert(rnt.end(), vl.begin(), vl.end());
			rnt.insert(rnt.end(), vr.begin(), vr.end());

			return rnt;
		}
	}

	namespace invertTree
	{
		TreeNode* invertTree(TreeNode* root)
		{
			if (!root)
			{
				return nullptr;
			}

			auto left = invertTree(root->left);
			auto right = invertTree(root->right);

			root->left = right;
			root->right = left;

			return root;
		}
	}

	namespace connect
	{
		void traverse(Node* node1, Node* node2) {
			if (node1 == nullptr || node2 == nullptr)
			{
				return;
			}
			node1->next = node2;
			traverse(node1->left, node1->right);
			traverse(node1->right, node2->left);
			traverse(node2->left, node2->right);
		}
		Node* connect(Node* root) {
			if (root == nullptr) return nullptr;
			traverse(root->left, root->right);
			return root;
		}
	}
}