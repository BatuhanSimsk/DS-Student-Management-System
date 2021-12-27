

/*	================== addNode =================
	Inserts data into list.
	Pre    pList is pointer to valid list
	dataInPtr pointer to insertion data
	Post   data inserted or error
	Return -1 if overflow
	0 if successful
	1 if dupe key
*/
int addNode (LIST* pList, void* dataInPtr)
{
//	Local Definitions 
	bool found;
	bool success;
	
	NODE* pPre;
	NODE* pLoc;
	
//	Statements 
	found = _search (pList, &pPre, &pLoc, dataInPtr);
	if (found)
	   // Duplicate keys not allowed 
	return (+1);

	_insertDbl(pList,dataInPtr);
	
	success = _insertDbl (pList, dataInPtr);
	if (!success)
	{
		return (-1);
	}   
	
		
	return (0);


}	// addNode 
