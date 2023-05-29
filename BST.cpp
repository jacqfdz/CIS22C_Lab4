#include "BST.h"
#include "Krone.h"

void BST::insertNode(Currency* insertee) {
	BSTNode* newNode = new BSTNode();
	newNode->data = new Krone(*insertee);

	if (count == 0) {
		root = newNode;
	}
	else {
		BSTNode* curr = root;

		while (curr) {
			if (curr->data->isGreater(insertee)) {
				if (curr->left) {
					curr = curr->left;
				}
				else {
					curr->left = newNode;
					curr = nullptr;
				}
			}
			else {
				if (curr->right) {
					curr = curr->right;
				}
				else {
					curr->right = newNode;
					curr = nullptr;
				}
			}
		}
	}

	count++;
}

Currency* BST::deleteNode(Currency* removee) {

}