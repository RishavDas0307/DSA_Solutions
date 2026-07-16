class Solution {
public:
    Node* connect(Node* root) {
        if (!root) {return nullptr;}
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            vector<Node*> node;
            for(int i=0; i<size; i++){
                Node* current=q.front();
                q.pop();
                node.push_back(current);
                if (current->left) {q.push(current->left);}
                if (current->right) {q.push(current->right);}
            }
            for (int i=0; i<node.size()-1; i++){
                node[i]->next=node[i+1];
            }
        }
        return root;
    }
};