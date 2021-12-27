/*	==================== search ====================
	Searches for year and prints year, picture, and
	director.
	Pre    list has been created
	user has selected search option
	Post   year printed or error message
*/
void search (LIST* list)
{
//	Local Definitions
	int    id;
	bool     found;

	STUDENT  pSrchArgu;
	STUDENT* pStu;

//	Statements
	printf("Enter a four digit year: ");
	scanf ("%d", &id);
	pSrchArgu.id = id;

	found = searchList (list, &pSrchArgu,(void**)&pStu);

	if (found)
		printf("%d\t%s\t%s\t%s\t%d\n",pStu->id,pStu->ad,pStu->soyad,pStu->bolum, pStu->sinif);
	else
		printf("Sorry, but %d is not available.\n",id);
	return;
}	// search