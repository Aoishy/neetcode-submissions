/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
   Node* dfs(Node *node,map<Node*,Node*>&newgraph)
   {
       if(node==nullptr)
       {
        return nullptr;
       }
       if(newgraph.count(node))
       {
        return newgraph[node];
       }
       Node* newnode=new Node(node->val);
       newgraph[node]=newnode; 
       for(Node* adj:node->neighbors)
       {
         newnode->neighbors.push_back(dfs(adj,newgraph));
       }
       return newnode;
   }
    
    Node* cloneGraph(Node* node) {
        map<Node*,Node*>newgraph;
        return  dfs(node,newgraph);
        
    }
};
