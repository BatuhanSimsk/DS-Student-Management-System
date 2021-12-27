/*	================== printList ==================
	Prints the entire list
	Pre    list has been created
	Post   list printed
*/
void printList (LIST* list)
{
//	Local Definitions
	STUDENT* pStu;

//	Statements

	// Get first node

	if (listCount (list) == 0)
		printf("Sorry, nothing in list\n\a");
	else
		{
		printf("\nStudents List\n");
		traverse (list, 0, (void**)&pStu);
		do
		{
			printf("%d\t%s\t%s\t%s\t%d\n",pStu->id,pStu->ad,pStu->soyad,pStu->bolum, pStu->sinif);
		} while (traverse (list, 1, (void**)&pStu));
	    } // else

	printf("End of Students List\n\n");
}	// printList
