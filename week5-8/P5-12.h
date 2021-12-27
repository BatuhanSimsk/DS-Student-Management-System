/*	================== fullList =================
	Returns boolean indicating no room for more data.
	This list is full if memory cannot be allocated for
	another node. 
	Pre    pList pointer to valid list 
	Return boolean true if full
	false if room for node 
*/
bool fullList (LIST* pList) 
{

	


//	Local Definitions 
NODE* temp;

//	Statements 
	if ((temp = (NODE*)malloc(sizeof(*(pList->head)))))
	{
		free (temp);
		return false;
	} // if 

	// Dynamic memory full 
	return true;

	


	


}	// fullList 
