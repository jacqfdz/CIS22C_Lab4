#ifndef BST_H
#define BST_H

#include "BSTNode.h"
#include "Currency.h"

class BST 
{
private:
	BSTNode* root;
	int count;

public:
	BST() { root = nullptr; count = 0; }


	void insertNode(Currency* insertee);
	/*
	Currency* deleteNode(Currency* removee);
	Currency* search(Currency* searchee) const;
	void print() const;
	int getCount() const;
	bool isEmpty() const;
	*/
};
#endif
