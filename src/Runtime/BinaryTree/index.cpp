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
}