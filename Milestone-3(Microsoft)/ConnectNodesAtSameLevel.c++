

class Solution
{
    public:
    //Function to connect nodes at same level.
    void connect(Node *root)
    {
       // Your Code Here
       queue<Node*> q;
       q.push(root);
       Node *node = NULL;
       while(!q.empty()){
           int n = q.size();
           for(int i=0;i<n;i++){
               Node* prev = node;
               node = q.front();
               q.pop();
               if(i>0){
                   prev->nextRight = node;
               }
               if(node->left!=NULL){
                   q.push(node->left);
               }
               if(node->right!=NULL){
                   q.push(node->right);
               }
           }
           node->nextRight = NULL;
       }
    }    
      
};
