/*	================== getChoice ==================
	Prints the menu of choices.
	Pre    nothing
	Post   menu printed and choice returned
*/
char getChoice (void)
{
//	Local Definitions 
	char choice;
	bool valid;
	
//	Statements 
	printf("======== MENU ======= \n"
			"Here are your choices:\n"
			"  S: Search for a year\n"
			"  P: Print all years  \n"
			"  Q: Quit             \n\n"
			"Enter your choice: ");
	do
		{
		scanf(" %c", &choice);
		choice = toupper(choice);
		switch (choice)
			{
			case 'S':
			case 'P':
			case 'Q': valid = true;
					break;
			default:  valid = false;
					printf("\aInvalid choice\n"
							"Please try again: ");
					break;
	       } // switch 
		} while (!valid);
	return choice;
}	// getChoice 