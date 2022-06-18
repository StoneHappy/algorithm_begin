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
}