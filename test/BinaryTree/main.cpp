#include <gtest/gtest.h>

#include <BinaryTree/index.h>
TEST(BinaryTreeTest, diameterOfBinaryTree)
{
	BinaryTree::TreeNode* root = new BinaryTree::TreeNode();
	root->val = 1;
	root->left = new BinaryTree::TreeNode;
	root->right = new BinaryTree::TreeNode;
	root->left->val = 2;
	root->right->val = 3;

	root->left->left = new BinaryTree::TreeNode;
	root->left->right = new BinaryTree::TreeNode;
	root->left->left->val = 4;
	root->left->right->val = 5;
	EXPECT_EQ(BinaryTree::diameterOfBinaryTree::diameterOfBinaryTree(root), 3);
}

TEST(BinaryTreeTest, preorderTraversal)
{
	BinaryTree::TreeNode* root = new BinaryTree::TreeNode();
	root->val = 1;
	root->left = new BinaryTree::TreeNode;
	root->right = new BinaryTree::TreeNode;
	root->left->val = 2;
	root->right->val = 3;

	root->left->left = new BinaryTree::TreeNode;
	root->left->right = new BinaryTree::TreeNode;
	root->left->left->val = 4;
	root->left->right->val = 5;
	std::vector<int> eq = { 1, 2, 4, 5, 3 };
	EXPECT_EQ(BinaryTree::preorderTraversal::preorderTraversal(root), eq);
}
