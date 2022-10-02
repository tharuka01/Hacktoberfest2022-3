#include<iostream>
using namespace std;
struct node
{
           int data;
           node *next;
};
node* insert_node(node *start,int x)
{
           node *temp=new node;
           temp->data=x;
           temp->next=NULL;
           if(start==NULL)
                      return temp;
           node *ptr=start;
           while(ptr->next!=NULL)
           {
                      ptr=ptr->next;
           }
           ptr->next=temp;
           return start;
}
void display(node *start)
{
           node *temp=start;
           while(temp!=NULL)
           {
                      cout<<temp->data<<" ";
                      temp=temp->next;
           }
}
node* delete_odd(node *start)
{
           node *temp=start;
           start=start->next;
           free(temp);
           node *even=start;
           node *odd=even->next;
           while(odd!=NULL && even!=NULL)
           {
                      even->next=odd->next;
                      free(odd);
                      even=even->next;
                      if(even!=NULL)
                                 odd=even->next;
           }
           return start;
}
int main()
{
           node *sample=NULL;
           sample=insert_node(sample,10);
           sample=insert_node(sample,20);
           sample=insert_node(sample,30);
           sample=insert_node(sample,40);
           display(sample);
           sample=delete_odd(sample);
           cout<<"\nAfter deletion:";
           display(sample);
           return 0;
}
