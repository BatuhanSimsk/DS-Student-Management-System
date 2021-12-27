/*	==================== cmpYear ====================
	Compares two years in PICTURE structures
	Pre  year1 is a pointer to the first structure
	year2 is a pointer to the second structure
	Post two years compared and result returned
	Return -1 if year1 less; 0 if equal; +1 greater
*/

int cmpIdNum (void* pId1, void* pId2)
{
//	Local Definitions
	int   result;
	int id1;
	int id2;

//	Statements
	id1 = ((STUDENT*)pId1)->id;
	id2 = ((STUDENT*)pId2)->id;

	if (id1 < id2)
		result = -1;
	else if (id1 > id2)
		result = +1;
	else
		result = 0;
	return result;
}	// cmpId
