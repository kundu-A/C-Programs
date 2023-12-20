#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<process.h>
typedef struct binary_tree
{
  int da;
  struct binary_tree *left,*right;
}nd;
nd *make(nd*,int);//To make the tree.
nd *crt(int);//To create the node.
void inorder(nd*);//To create the inorder traversal.
void preorder(nd*);//To create the preorder traversal.
void postorder(nd*);//To create the post order traversal.
void smallest(nd*);//To find the smallest element.
void largest(nd*);//To find the largest element.
int search(nd*,int);//To search the user given element in the tree.
nd *root=NULL;
void main()
{
  int ch,da,srch,p=0;
  clrscr();
  while(1)
  {
    printf("\n1.INSERT\t2.INORDER\t3.PREORDER\t4.POSTORDER\t5.SMALLEST ELEMENT\t6.LARGEST ELEMENT\t7.SEARCH AN ELEMENT\t8.EXIT");
    printf("\nENTER YOUR CHOICE: ");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1: printf("ENTER THE NUMBER: ");
	      scanf("%d",&da);
	      root=make(root,da);
	      break;
      case 2: if(root!='\0')
	      inorder(root);
	      else
	      printf("\nTHE LIST IS NOT CREATED TILL NOW.");
	      break;
      case 3: if(root!='\0')
	      preorder(root);
	      else
	      printf("\nTHE LIST ID NOT CREATED TILL NOW.");
	      break;
      case 4: if(root!='\0')
	      postorder(root);
	      else
	      printf("\nTHE LIST IS NIT CTEATED TILL NOW.");
	      break;
      case 5: if(root!='\0')
	      smallest(root);
	      printf("\nTHW LIST IS NOT CREATED TILL NOW.");
	      break;
      case 6: if(root!='\0')
	      largest(root);
	      printf("\nTHE LIST IS NOT CREATED TILL NOW.");
	      break;
      case 7: if(root!='\0')
	      {
		printf("ENTER THE ELEMENT FOR SEARCHING: ");
		scanf("%d",&srch);
		p=search(root,srch);
		if(p==0)
		printf("THE ELEMENT IS NOT FOUND.");
	      }
	      else
	      printf("THE IS NOT CREATED TILL NOW.");
	      break;
      case 8: exit(0);
      default: printf("\nPLEASE ENTER RIGHT CHOICE.");
    }
  }
}
nd *make(nd *root,int da)
{
  if(root==NULL)
  return crt(da);
  else
  {
    if(da<=root->da)
    root->left=make(root->left,da);
    else
    root->right=make(root->right,da);
    return root;
  }
}
nd *crt(int da)
{
  nd *nw;
  nw=(nd*)malloc(sizeof(nd));
  nw->da=da;
  nw->left='\0';
  nw->right='\0';
  return nw;
}
void inorder(nd *root)
{
  if(root!=NULL)
  {
    inorder(root->left);
    printf("%d ",root->da);
    inorder(root->right);
  }
}
void preorder(nd *root)
{
   if(root!=NULL)
   {
     printf("%d ",root->da) ;
     preorder(root->left);
     preorder(root->right);
   }
}
void postorder(nd *root)
{
   if(root!=NULL)
   {
     postorder(root->left);
     postorder(root->right);
     printf("%d ",root->da);
   }
}
void smallest(nd *root)
{
  nd *i;
  for(i=root;i->left!='\0';i=i->left);
  printf("%d IS THE SMALLEST ELEMENT.",i->da);
}
void largest(nd *root)
{
   nd *i;
   for(i=root;i->right!='\0';i=i->right);
   printf("%d IS THE LARGEST ELEMENT.",i->da);
}
int search(nd *root,int srch)
{
   if(root!=NULL)
   {
     if(srch>root->da)
     return search(root->right,srch);
     else if(srch<root->da)
     return search(root->left,srch);
     else
     {
       printf("THE ELEMENT IS FOUND.THAT IS: %d",root->da);
       return 1;
     }
   }
   return 0;
}
