/*
Given a Binary Tree of N Nodes, which have unique values in the range of 
[0,N](Inclusive)  with one value(Node) missing in that sequence.
Return that missing value .

Example 1 : N=5 
   3
  / \
 4   1
    / \
   5   0
Missing Value is 2 ,Sequence is [0,1,2,3,4,5]

Example 2 : N=8
      2
     / \
    4   5
   / \ / \
  3  1 6  8
 /
0
Missing Value is 7 ,Sequence is [0,1,2,3,4,5,6,7,8]

Constaints : 
-10000<=N<=10000 [N will not be equal to 0]



Input :
Struct node Root Address
Output :
Return Missing Value .
Return -1 for NULL Inputs 

Note:
Dont Create an Extra Array/String ,or else your solution would receive 30% Cut in the Marks you got for this
question .

Difficulty : Easy
*/

#include <stdlib.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int flag1;
struct node{
	int data;
	struct node *left;
	struct node *right;
};

int search(struct node *head,int val)
{
	if (head == NULL)
		return 0;
	if (head->data == val)
	{	
		return 0;

	}
	
	search(head->left, val);
	search(head->right, val);
	return val;
}
int get_missing_value(struct node *root, int n){
	int i;
	if (root == NULL || n<-10000 || n>10000)
	{
		return -1;
	}
	for (i = 0; i <=n; i++)
	{
		flag1=search(root,i);
		if (flag1!=0)
		{
			break;

			
		}


	}
	
	return i;
	
}