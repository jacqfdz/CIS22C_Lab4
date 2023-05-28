#ifndef BSTNODE_H
#define BSTNODE_H

#include "Currency.h"

class BSTNode 
{
public:
	BSTNode* left;
	BSTNode* right;
	//Currency* data;

	BSTNode() {
		left = nullptr;
		right = nullptr;
		//data = nullptr;
	}

	~BSTNode() {
		//delete data;
	}
};

#endif