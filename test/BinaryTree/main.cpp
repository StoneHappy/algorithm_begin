#include <gtest/gtest.h>

#include <BinaryTree/index.h>
TEST(BinaryTreeTest, diameterOfBinaryTree)
{
	BinaryTree::diameterOfBinaryTree::TreeNode* root = new BinaryTree::diameterOfBinaryTree::TreeNode();
	root->val = 1;
	root->left = new BinaryTree::diameterOfBinaryTree::TreeNode;
	root->right = new BinaryTree::diameterOfBinaryTree::TreeNode;
	root->left->val = 2;
	root->right->val = 3;

	root->left->left = new BinaryTree::diameterOfBinaryTree::TreeNode;
	root->left->right = new BinaryTree::diameterOfBinaryTree::TreeNode;
	root->left->left->val = 4;
	root->left->right->val = 5;
	EXPECT_EQ(BinaryTree::diameterOfBinaryTree::diameterOfBinaryTree(root), 3);
}