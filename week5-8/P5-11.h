/*	================= emptyList ================
	Returns boolean indicating whether or not the
	list is empty
	Pre    pList is a pointer to a valid list 
	Return boolean true empty; false list has data 
*/
bool emptyList (LIST* pList) 
{
//	Statements 
	return (pList->count == 0);
}	// emptyList 