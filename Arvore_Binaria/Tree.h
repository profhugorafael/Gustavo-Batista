#ifndef TREE_H
#define TREE_H

#include <iostream>

#include "Node.h"

using namespace std;

class Tree {
 private:
  Node* root;

  void add(int value, Node* node) {
    if (value < node->value) {   // menor que o meio
      if (node->left == NULL) {  // esta vazio, ele cria na esquerda
        node->left = new Node(value);
      } else {  // senao repete pra subarvore da esquerda
        add(value, node->left);
      }
    } else if (value > node->value) {  // maior que o meio
      if (node->right == NULL) {       // esta vazio, ele cria na direita
        node->right = new Node(value);
      } else {  // senao repete pra subarvore da direita
        add(value, node->right);
      }
    }
  }

  bool contains(int value, Node* node) {
    if (node == NULL) return false;

    if (node->value == value) return true;

    if (value < node->value) {
      return contains(value, node->left);
    } else {
      return contains(value, node->right);
    }
  }

  void displayPreOrder(Node* node) {
    if (node == NULL) return;

    cout << node->value << endl;
    displayPreOrder(node->left);
    displayPreOrder(node->right);
  }

  void displayInOrder(Node* node) {
    if (node == NULL) return;

    displayInOrder(node->left);
    cout << node->value << endl;
    displayInOrder(node->right);
  }

  void displayPostOrder(Node* node) {
    if (node == NULL) return;

    displayPostOrder(node->left);
    cout << node->value << endl;
    displayPostOrder(node->right);
  }

 public:
  bool isEmpty() {
    return root == NULL;
  }

  void add(int value) {
    if (isEmpty()) {
      root = new Node(value);
      return;
    }

    add(value, root);
  }

  bool contains(int value) {
    if (isEmpty()) return false;

    return contains(value, root);
  }

  // In order = esquerda meio direita
  // pre order = meio esqueda direita (escolhido)
  // post order = esqueda direita meio
  void displayPreOrder() {
    if (isEmpty()) return;

    displayPreOrder(root);
  }

  void displayInOrder() {
    if (isEmpty()) return;

    displayInOrder(root);
  }

  void displayPostOrder() {
    if (isEmpty()) return;

    displayPostOrder(root);
  }
};

#endif