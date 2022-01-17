Intuition:
Actually the question is pretty straightforward ,Basically the question maker is asking us to add all the numbers in a BST with a certain range given for numbers like say range is given as [Low,High]=[2,7] then we need to add all the values in BST with the numbers satisfying this range. So major people who thought of a solution will be either using recursion ,DFS or BFS.
Now, let's talk about approach
​
***Algorithm:***
In the following algorithm we will be discussing the solution of dfs approach .
​
letsumofRange be a variable that will be our final result . After this let's declare a dfs helper function .
The base case will be when the tree is empty so we return null
we have to find thesumofRange so for that we need to add all the root values which satisfyes the condition that node values should be more than low and less than high .If this is true than add it to sumofRange
After this let's dig the depth's of the tree i.e Left childs and Right childs.
Now just call out the dfs helper function in the main function
**Code:-**
```
class Solution {
public:
int sumofRange;
void dfs(TreeNode* root, int L, int R){
//Base case
if(!root) return;
//If in range add
if(root->val >= L && root->val <= R) sumofRange += root->val;
//Digging the depths of the tree
if(root->val > L) dfs(root->left,L,R);
if(root->val < R) dfs(root->right,L,R);
}
int rangeSumBST(TreeNode* root, int L, int R) {
sumofRange = 0;
dfs(root,L,R);
return sumofRange;
}
};
```
Time Complexity: O(n) [n=number of nodes]
Space Complexity: O(h) [h=height of tree] [Considering recursive calls]