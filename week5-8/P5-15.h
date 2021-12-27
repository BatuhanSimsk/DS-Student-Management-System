/*	================== destroyList =================
	Deletes all data in list and recycles memory
	Pre    List is a pointer to a valid list.
	Post   All data and head structure deleted
	Return null head pointer
*/
LIST* destroyList (LIST* pList) 
{
//	Local Definitions 
	NODE* deletePtr;

//	Statements 
	if (pList)
		{
		while (pList->count > 0) 
			{
			// First delete data 
			free (pList->head->dataPtr);
			// Now delete node 
			deletePtr    = pList->head;
			pList->head  = pList->head->link; 
			pList->count--;
			free (deletePtr); 
		    } // while 
		free (pList);
	   } // if 
	return NULL;
}	// destroyList 
