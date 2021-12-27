/*	================== searchList ================= 
	Interface to search function. 
	Pre    pList pointer to initialized list.
	pArgu pointer to key being sought
	Post   pDataOut contains pointer to found data
	-or- NULL if not found
	Return boolean true successful; false not found 
*/
bool searchList (LIST*  pList, void* pArgu,void** pDataOut)
{
//	Local Definitions 
	bool  found;
	
	NODE* pPre;
	NODE* pLoc;

//	Statements 
	found = _search (pList, &pPre, &pLoc, pArgu);
	if (found)
	    *pDataOut = pLoc->dataPtr;
	else
	    *pDataOut = NULL;
	return found;
}	// searchList 