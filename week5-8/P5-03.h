/*	=============== createList ==============
	Allocates dynamic memory for a list head
	node and returns its address to caller
	
	Pre    compare is address of compare function 
	used to compare two nodes.
	Post   head has allocated or error returned
	Return head node pointer or null if overflow 
*/
LIST* createList 
    (int (*compare) (void* argu1, void* argu2))
{
//	Local Definitions 
	LIST* list;

//	Statements 
	list = (LIST*) malloc (sizeof (LIST));
	if (list)
	{
		list->head    = NULL;
		list->pos     = NULL;
		list->rear    = NULL;
		list->count   = 0;
		list->compare = compare;
	    } // if 

	return list;
}	// createList 