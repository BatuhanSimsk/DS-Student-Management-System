/*	=================== process ===================
	Process user choices
	Pre    list has been created
	Post   all of user's choice executed
*/
void process (LIST* list)
{
//	Local Definitions 
	char choice;

//	Statements 
	do
		{
		choice = getChoice ();

		switch (choice)
			{
			case 'P': printList (list);
					break;
			case 'S': search (list);
			case 'Q': break;
	       } // switch 
		} while (choice != 'Q');
	return;
}	// process 
