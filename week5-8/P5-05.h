/*	=================== _insert ================== 
	Inserts data pointer into a new node.
	Pre    pList pointer to a valid list 
	pPre  pointer to data's predecessor 
	dataInPtr data pointer to be inserted 
	Post   data have been inserted in sequence 
	Return boolean, true  if successful, 
	false if memory overflow 
*/

/*

static bool _insert (LIST* pList, NODE* pPre,void* dataInPtr)
{
//	Local Definitions 
	NODE* pNew;

//	Statements 
	if (!(pNew = (NODE*) malloc(sizeof(NODE))))
	return false;

	pNew->dataPtr   = dataInPtr; 
	pNew->link      = NULL; 

	if (pPre == NULL)
	{
	    // Adding before first node or to empty list. 
	pNew->link       = pList->head;
	pList->head      = pNew;
	if (pList->count == 0)
	        // Adding to empty list. Set rear 
			pList->rear = pNew;
	   } // if pPre 
	else
	{
	    // Adding in middle or at end 
		pNew->link  = pPre->link;
		pPre->link  = pNew;

	    // Now check for add at end of list 
	if (pNew->link     == NULL)
		pList->rear   =  pNew;
	   } // if else 

	(pList->count)++;
	return true;
}	// _insert 

*/



static bool _insertDbl (LIST* pList,void* dataInPtr)
{
//	Local Definitions 
	bool found;
	NODE* pPre;
	NODE* pLoc;

//	Statements 
	
	
	if(fullList)
	{
		return 0;
	}
	
	//Locate insertion point
	found=_search(pList,&pPre,&pLoc,dataInPtr);
	printf("%d",found);
	
	if(found==false)
	{
		NODE* newNode;
		dataInPtr= newNode->dataPtr;
		
		if(pPre==NULL)			// Adding before first node or to empty list.
		{
			newNode->prevLink=NULL;
			newNode->link=pList->head;
			pList->head=newNode;
		}

		else		//Inserting into middle or end of list
		{
			newNode->link=pPre->link;
			newNode->prevLink=pPre;
		}
	
		//Test for insert into null list or at end of list
		if(pPre->link==NULL)
		{
			pList->rear=newNode;
		}
	
		else
		{
			pLoc->prevLink=newNode;
		}

		pPre->link=newNode;
		return 1;
	
	}
	
	(pList->count)++;


	
}	// _insertDbl
