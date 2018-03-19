#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
}Node;
Node* head=NULL;
static int i;
int value(str,i)
{
            string str1="";
            int k=0;
            int n=0;
    for(int k=i;str[k]!='\0'||str[k]!=',';k++)
    {
            n++;
    }
    n=(n-1)*10;
    for(int k=i;str[k]!='\0'||str[k]!=',';k++)
    {


            k=k+str[k]*n;
            str1=str1+str[k];
            n=n/10;
            i++;
    }
    return k
}
Node * function_to_BT(Node **root, string str,i,flag)
{
    if(str[i]=='0')
    {
        return null;
    }
    if(isdigit(str[i]))
    {
        if(flag!=0)
        {
            Node *temp=new Node();
            temp->data=value(str,i)
            temp->left= function_to_BT(root->left, str,i+1,flag)
            temp->right=function_to_BT(root->right, str,i+1,flag)
        }
        else
        {
            Node *temp=new Node();
            temp->data=value(str,i)
            temp->left=NULL
            temp->right=NULL
        }
    }
    if(str[i]=='(')
    {
        function_to_BT(Node **root, string str,i+1,flag+1)
    }
    if (str[i]==',')
    {
        function_to_BT(Node **root, string str,i,flag)
    }
    if (str[i]=='}')
    {
        function_to_BT(Node **root, string str,i+1,flag-1)
    }
}
void inorder(Node **root)
{
    if(root==NULL)
        return NULL;
    inorder(root->left);
    cout<<root->data;
    inorder(root->right);
}
int main()
{

    int n;
    string input;
    cout<<"ENTER THE STRING :";
    cin>>input;
    Node *head=NULL
    Node * head=function_to_BT(input,0,0);
    inorder(head);
    return(0);
}
