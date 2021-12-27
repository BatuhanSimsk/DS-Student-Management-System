/*	================== traverse =================
	Traverses a list. Each call either starts at the
	beginning of list or returns the location of the 
	next element in the list.
	Pre    pList       pointer to a valid list
	fromWhere   0 to start at first element
	dataPtrOut  address of pointer to data
	Post   if more data, address of next node 
	Return true node located; false if end of list
*/
bool traverse (LIST*  pList,int fromWhere,void** dataPtrOut)
{
//	Statements 
	if (pList->count == 0)
		return false;

	if (fromWhere == 0)
		{
		 //Start from first node 
		pList->pos  = pList->head;
	    *dataPtrOut = pList->pos->dataPtr;
		return true;
	   } // if fromwhere 
	else
		{
	    // Start from current position 
		if (pList->pos->link == NULL)
			return false;
		else
		{
			pList->pos  = pList->pos->link;
	        *dataPtrOut = pList->pos->dataPtr;
			return true;
	    } // if else 
	    } // if fromwhere else 
}	// traverse 
