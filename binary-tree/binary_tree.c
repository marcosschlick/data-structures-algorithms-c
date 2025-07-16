#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data;
	struct Node* left;
	struct Node* right;
};

struct Node* insert(struct Node *root, int data) {
	struct Node *temp = (struct Node*) malloc(sizeof(struct Node));

	temp -> data = data;
	temp -> left = NULL;
	temp -> right = NULL;

	if (root == NULL) {
		root = temp;
	} else {
		struct Node *current = root;
		struct Node *parent = NULL;
		while (1) {
			parent = current;
			if (data < parent -> data) {
				current = current -> left;
				
				if (current == NULL) {
					parent -> left = temp;
					return root;
				}
				
			} else {
				current = current -> right;

				if (current == NULL) {
					parent -> right = temp;
					return root;
				}

			}
		}
	}


	return root;
};

int main(){
	int array[5] = { 23, 4, 29, 15, 5 };
	struct Node *root = NULL;

	for (int i = 0; i < 5; i++) {
		root = insert(root, array[i]);
		printf("Inserted: %d\n", array[i]);
	}

	return 0;
}
