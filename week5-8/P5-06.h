/*	================= removeNode ================ 
	Removes data from list. 
	Pre    pList pointer to a valid list
	keyPtr pointer to key to be deleted
	dataOutPtr pointer to data pointer
	Post   Node deleted or error returned.
	Return false not found; true deleted
*/
bool removeNode  (LIST*  pList, void*  keyPtr,void** dataOutPtr)
{
//	Local Definitions 
	bool found;
	
	NODE* pPre;
	NODE* pLoc;
	
//	Statements 
	found = _search (pList, &pPre, &pLoc, keyPtr);
	if (found)
		_delete (pList, pPre, pLoc, dataOutPtr);
	
	return found;
}	// removeNode 
