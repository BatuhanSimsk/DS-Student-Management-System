/*	================= _delete ================ 
	Deletes data from a list and returns 
	pointer to data to calling module.
	Pre    pList pointer to valid list.
	pPre  pointer to predecessor node
	pLoc  pointer to target node
	dataOutPtr pointer to data pointer
	Post   Data have been deleted and returned 
	Data memory has been freed
*/
void _delete (LIST* pList, NODE*  pPre,NODE* pLoc,  void** dataOutPtr)
{
//	Statements 
	*dataOutPtr = pLoc->dataPtr;
	if (pPre == NULL)
	   // Deleting first node 
		pList->head = pLoc->link;
	else
	   // Deleting any other node 
		pPre->link = pLoc->link;

	// Test for deleting last node 
	if (pLoc->link == NULL)
		pList->rear = pPre;

	(pList->count)--;
	free (pLoc);

	return;
}	// _delete 




void _deleteDbl (LIST* pList, NODE* deleteNode)
{
//	Statements 
	NODE* pPre;
	NODE* pLoc;

	if(deleteNode==NULL)
	{
		printf("Impossible condition in delete double");
	}

	if(deleteNode->prevLink!=NULL)
	{
		pPre=deleteNode->prevLink;
		pPre->link=deleteNode->link;
	}
	else
	{
		pList->head=deleteNode->link;
	}

	if(deleteNode->link!=NULL)
	{
		pLoc=deleteNode->link;
		pLoc->prevLink=deleteNode->prevLink;
	}
	else
	{
		pList->rear=deleteNode->prevLink;
	}

	free(deleteNode);


}	// _deleteDbl
