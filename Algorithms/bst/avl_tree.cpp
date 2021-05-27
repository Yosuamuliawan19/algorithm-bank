#include<stdio.h>
using namespace std;
class Node{
public:
     int key;
     Node *left;
     Node *right;
     int height;
}
Node* NewNode(int key){
     Node* node = new Node();
     node->key = key;
     node->left = null;
     // node->right = null;
     node->height = 1;
     return node;
}
Node* rightRotate(Node* top){
     *Node bottom = top->left;
     *Node right = bottom->right;
     bottom->right = top;
     top->left = right;
     // update the heights
     top->height = max()
}
Node* leftRotate(Node* top){
     *Node bottom = top->right;
     *Node left = bottom->left;
     bottom->left = top;
     top->right = left;
     // update the heights

}
int main (){

     int size, input;
     scanf("%d", &size);
     for (int i=0;i<size;i++){
          scanf("%d", &input);
          printf("%d\n",input);
     }

     return 0;
}
