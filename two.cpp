// This function should delete node from linked list. The function
// may assume that node exists in linked list and is not last node
// node: reference to the node which is to be deleted
void deleteNode(Node *node)
{
if(node->next!=NULL && node->next->next!=NULL)
{
node->data=node->next->data;
node->next=node->next->next;
}
else if(node->next->next==NULL)
{
    node->data=node->next->data;
    node->next=NULL;
}


}

