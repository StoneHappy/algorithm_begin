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

TEST(BinaryTreeTest, invertTree)
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

	BinaryTree::TreeNode* inverTree = new BinaryTree::TreeNode();
	inverTree->val = 1;
	inverTree->left = new BinaryTree::TreeNode;
	inverTree->right = new BinaryTree::TreeNode;
	inverTree->left->val = 3;
	inverTree->right->val = 2;

	inverTree->right->left = new BinaryTree::TreeNode;
	inverTree->right->right = new BinaryTree::TreeNode;
	inverTree->right->left->val = 5;
	inverTree->right->right->val = 4;


	auto eq = BinaryTree::preorderTraversal::preorderTraversal(inverTree);
	auto rnt = BinaryTree::preorderTraversal::preorderTraversal(BinaryTree::invertTree::invertTree(root));
	EXPECT_EQ(rnt, eq);
}


TEST(BinaryTreeTest, connect)
{
	BinaryTree::Node* root = new BinaryTree::Node();
	root->val = 1;
	root->left = new BinaryTree::Node;
	root->right = new BinaryTree::Node;
	root->left->left = new BinaryTree::Node;
	root->left->right = new BinaryTree::Node;
	root->right->left = new BinaryTree::Node;
	root->right->right = new BinaryTree::Node;

	root->left->val = 2;
	root->right->val = 3;
	root->left->left->val = 4;
	root->left->right->val = 5;
	root->right->left->val = 6;
	root->right->right->val = 7;

	BinaryTree::Node* nextroot = new BinaryTree::Node();
	nextroot->val = 1;
	nextroot->left = new BinaryTree::Node;
	nextroot->right = new BinaryTree::Node;
	nextroot->left->left = new BinaryTree::Node;
	nextroot->left->right = new BinaryTree::Node;
	nextroot->right->left = new BinaryTree::Node;
	nextroot->right->right = new BinaryTree::Node;

	nextroot->left->val = 2;
	nextroot->right->val = 3;
	nextroot->left->left->val = 4;
	nextroot->left->right->val = 5;
	nextroot->right->left->val = 6;
	nextroot->right->right->val = 7;

	nextroot->left->next = nextroot->right;
	nextroot->right->next = nullptr;
	nextroot->left->left->next = nextroot->left->right;
	nextroot->left->right->next = nextroot->right->left;
	nextroot->right->left->next = nextroot->right->right;
	nextroot->right->right->next = nullptr;
	auto rnt = BinaryTree::connect::connect(root);
}

