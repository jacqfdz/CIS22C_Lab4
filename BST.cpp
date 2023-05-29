#include "BST.h"
#include "Currency.h"
#include "Krone.h"

void BST::insertNode(Currency* insertee) {
	BSTNode* newNode = new BSTNode();
	newNode->data = new Krone(*insertee);

	if (count == 0) {
		root = newNode;
	}
	else {
		//search for node before correct placement
		BSTNode* curr = root;

	}

}
