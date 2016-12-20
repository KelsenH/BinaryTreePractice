//Node.cpp
#include <iostream>
#include <string>

class Node {
  protected:
    int nodeNum;
    Node left;
    Node right;

  public:
    Node () {
      nodeNum = 0;
      left = NULL;
      right = NULL;
    } //end constructor

    Node (int nodeNum) {
      this.nodeNum = nodeNum;
      left = NULL;
      right = NULL
    } //end constructor

    int getNodeNum () {
      return nodeNum;
    } //end getNodeNum

    Node getLeftNode () {
      return left;
    } //end getLeftNode

    Node getRightNode () {
      return right;
    } //end getRightNode

    void setLeftNode (int nodeNum) {
      Node left = new Node (nodeNum);
      this.left = left;
    } //end setLeftNode

    void setRightNode (int nodeNum) {
      Node right = new Node (nodeNum);
      this.right = right;
    } //end setRightNode

    int getLeftValue () {
      Node leftNode = this.getLeftNode ();
      int leftValue = leftNode.getNodeNum ();
      return leftValue;
    } //end getLeftValue 

    int getRightValue () {
      Node rightNode = this.getRightNode ();
      int rightValue = rightNode.getNodeNum ();
      return rightValue;
    } //end getRightValue
}; //end class
