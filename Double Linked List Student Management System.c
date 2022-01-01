//Written by: Batuhan Simsek --- 20360859055



#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//Global Counter
int count = 0;


//Node Structure Definition

struct node 
{
	struct node* prevLink;
    struct node* nextLink;

	int studentNum;
	char name [50]; 
    char surname [50]; 
    char department [50];
    int class;
	
} *f, *temp, *temp1, *temp2;

typedef struct node search;




//searchNode
void searchNode(search *key,int studentNum)//(search node)
{
    search* iter=key;
    if(key==NULL)//empty list
    {
        printf("List is empty.");
    }

    else if(iter->studentNum==studentNum)
    {
        printf("%d.Student's Info:\n",studentNum);
        printf("=======================\n");
        printf("Student's Num: %d\nStudent's Name: %s\nStudent's Surname: %s\nStudent's Department: %s\nStudent's Class: %d\n\n",iter->studentNum, iter->name,iter->surname, iter->department,iter->class);
    }
    
    else if(key->nextLink!=NULL)
    {
        while( iter -> nextLink != NULL && iter -> nextLink -> studentNum != studentNum )
        {
            iter = iter -> nextLink;
        }

        if(iter->nextLink==NULL)
        {
            printf("The requested element is not in this list");
        }
        else if(iter->nextLink->studentNum==studentNum)
        {
            printf("%d.Student's Info:\n",studentNum);
            printf("=======================\n");
            printf("Student's Num: %d\nStudent's Name: %s\nStudent's Surname: %s\nStudent's Department: %s\nStudent's Class: %d\n\n",iter->studentNum, iter->name,iter->surname, iter->department,iter->class);
        }
    
    }
    
}



//createList 
//This function creates the list and gets first nodes. If you want add more nodes, you can use addNode function.
void createList(int studentNum, char name[], char surname[], char department[], int class)
{
	
	temp = (struct node*)malloc(sizeof(struct node));

	temp->prevLink = NULL;
	temp->nextLink = NULL;

	printf("\n Enter %d.student's number:\n",count+1);
    scanf("%d",&studentNum);
    temp->studentNum= studentNum;

    
    printf("\n Enter %d.student's name\n",count+1);
    getchar(); //gets() enter ile alakalı sorun çıkarıyor, o yüzden ilk gets() kullanımında getchar() ile scanf() inputunu yazarken kullandığım ENTER karakterini getchar() yakalıyor.
    gets(name);
    strcpy(temp->name , name);
    
    printf("\n Enter %d.student's surname\n",count+1);
    gets(surname);
    strcpy(temp->surname , surname);
	
    printf("\n Enter %d.student's department\n",count+1);
    gets(department);
    strcpy(temp->department , department);

    printf("\n Enter %d.student's class\n",count+1);
    scanf("%d",&class);
    temp->class = class;

	count++;
}



//addNode
void addNode()
{
	int studentNum;
	char name [50]; 
    char surname [50]; 
    char department [50];
    int class;
    
    
    // If list is empty
	if (f == NULL) 
    {
		createList(studentNum, name, surname, department, class);
		f = temp;
		temp1 = f;
	}


	else 
    {
		createList(studentNum, name, surname, department, class);
		temp1->nextLink = temp;
		temp->prevLink = temp1;
		temp1 = temp;
	}
}



//displayList
void displayList()
{
	temp2 = f;
	if (temp2 == NULL) 
    {
		printf("\nList is empty.\n");
		return;
	}
	printf("\nLinked list elements from beginning:\n\n");
	while (temp2 != NULL) 
    {
        for(int i=1;i<=count;i++)
        {
            printf("%d.Student's Info:\n",i);
            printf("=======================\n");
            printf("Student's Num: %d\nStudent's Name: %s\nStudent's Surname: %s\nStudent's Department: %s\nStudent's Class: %d\n\n",temp2->studentNum, temp2->name,temp2->surname, temp2->department,temp2->class);
            temp2 = temp2->nextLink;
        }
        
	
    }

	
	printf("Number of students=%d", count);
}



//deleteNode
int deleteNode()
{
	struct node* temp;
	temp = f;
	if (temp == NULL) 
    {
		printf("List is empty.\n");
		return 0;
	}
	if (temp->nextLink == NULL) 
    {
		printf("%d %s %s %s %d\n",temp->studentNum, temp->name,temp->surname, temp->department,temp->class);
        printf("Student number %d has been deleted from the list",temp->studentNum);
		free(temp);
		f = NULL;
	}
	else 
    {
		temp = temp1;
		temp2 = temp1->prevLink;
		temp2->nextLink = NULL;

		printf("%d %s %s %s %d\n",temp->studentNum, temp->name,temp->surname, temp->department,temp->class);
        printf("Student number %d has been deleted from the list\n",temp->studentNum);
		free(temp);
		temp1 = temp2;
	}
	count--;
	return 0;
}



//destroyList
int destroyList()
{
	int numofstu= count;
    
    for(int i=1;i<=numofstu;i++)
    {
        deleteNode();
        count--;    
    }
	return 0;
}



//mainProgram
void mainProgram()
{
	int ch, n, i,x;
	f = NULL;
	temp = temp1 = NULL;
	
	while (1) 
    {
        printf("\n\n\n");
        printf("\n ***=====================***\n");
        printf("\n 1.Create a double linked list of n students");
        printf("\n 2.Display list");
        printf("\n 3.Add node(student)");
        printf("\n 4.Delete node(student)");
        printf("\n 5.Destroy list");
        printf("\n 6.Search node");
        printf("\n 7.Exit\n");
        printf(    "***====================***\n");
        
        printf("\n Enter your choice: ");
		scanf("%d", &ch);

	
		switch (ch) 
        {
		case 1:
			printf("\n Enter number of students you want to add: ");
			scanf("%d", &n);
			for (i = 0; i < n; i++)
				addNode();
			printf("\nList is created.\n");
            break;

		case 2:
			displayList();
			break;

		case 3:
			addNode();
			break;
		
        case 4:
			deleteNode();
			break;
		
        case 5:
			destroyList();
			break;
		
        case 6:
            printf("Enter the number of student you want to search: ");
            scanf("%d",&x);
            searchNode(f,x);
			break;
		
        case 7:
			exit(0);
		
        default:
			printf("Wrong choice\n");
		}
	}
}



//int main()
int main()
{
	mainProgram();
	return 0;
}



//Written by: Batuhan Simsek --- 20360859055