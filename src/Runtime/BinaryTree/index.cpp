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
}