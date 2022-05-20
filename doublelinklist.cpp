#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node* next;
    node* prev;
    node(int val)
    {
        data=val;
        next=NULL;
        prev=NULL;
    }
};
//void insertathead(node* &head,int val)
//{
//    node* n=new node(val);
//    n->next=head;
//    if(head!=NULL)
//    {
//    head->prev=n;
//    }
//    head=n;/
//}
//void insertattail(node* &head,int val)
 //{
 //    if(head==NULL)
 //    {
 //        insertathead(head,val);
 //        return;
 //    }
 //    node* n=new node(val);
//     node* temp=head;
//     while(temp->next!=NULL)
//     {
//         temp=temp->next;
//     }
//     temp->next=n;
//     n->prev=temp;
// }
// void display(node* head)
//{
//    node* temp=head;
//    while(temp!=NULL)
//    {
//        cout<<temp->data<<"<=>";
//        temp=temp->next;
//    }
//    cout<<"NULL"<<endl;
//}
//void deleteathead(node* &head)
//{
//    node* todelete=head;
//    head=head->next;
//    head->prev=NULL;
//    delete todelete;
//}
//void deletion(node* &head,int pos)
//{
//    node* temp=head;
//    int count=1;
//    if(pos==1)
//    {
//        deleteathead(head);
//        return;
//}
//    while(temp!=NULL && count!=pos)
//    {
//        temp= temp->next;
//        count++;
//    }
//    if(temp->next!=NULL) 
//    {
//    temp->next->prev=temp->prev;
//    }
//  temp->prev->next=temp->next;
//    delete temp;
//}
void insertatheadc(node* &head,int val)
{
    node* n=new node(val);
    if(head==NULL)
    {
        n->next=n;
        head=n;
        return;
    }
    node* temp= head;
    n->next=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
    if(head!=NULL)
    {
    head->prev=n;
    }
    head=n;
}
void insertattailc(node* &head,int val)
 {
     if(head==NULL)
     {
         insertatheadc(head,val);
         return;
     }
     node* n=new node(val);
     node* temp=head;
     while(temp->next!=head)
     {
         temp=temp->next;
     }
     temp->next=n;
     n->next=head;
 }
 void displayc(node* head)
 {
     node* temp=head;
     do
     {
        cout<<temp->data<<" ";
        temp=temp->next;
     } while(temp!=NULL);
     
    cout<<endl;

 }

int main()
{
    node* head=NULL;
    insertattailc(head,1);
    insertattailc(head,2);
    insertattailc(head,3);
    insertattailc(head,4);
    insertattailc(head,5);
    insertattailc(head,6);
    displayc(head);
    //insertathead(head,7);
    //deletion(head,6);
   // display(head);
    return 0;
}
 