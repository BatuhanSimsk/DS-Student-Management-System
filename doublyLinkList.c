#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>


int count=0;

typedef struct student

{
    struct student* prev;
    struct student* next;

    int  studentNumber;
    char name [100];
    char surname [100];
    char department [100];
    int  grade;

}student;

student* head=NULL;



typedef struct list
{
    struct student* prevNode;
    struct student* nextNode;
};




int main()
{

    char n[15],s[15],d[15];
    int sn,c;
    int x;

    printf("Choose a process you want to execute: \nTo Add Student: 1 \nTo Delete Student: 2\nTo Look For Specific Student's Info: 3 \nTo Delete The List: 4 \nTo End Program: 0 \n");
    scanf("%d",&x);
    switch(x){
    case 0:
        exit(0);
        break;
    case 1:
        printf("Enter a student name: ");
        scanf("%s",&n);
        printf("Enter a surname: ");
        scanf("%s",&sn);
        printf("Enter a student number: ");
        scanf("%d",&n);
        printf("Enter a departure of a student: ");
        scanf("%s",&d);
        printf("Enter a class of a student: ");
        scanf("%d",&c);
        AddStudent(sn,n,s,d,c);
        break;
    case 2:
        /*Öðrenci sil */
        break;
    case 3:
        //Tüm ogrencilerin listesini cikar
        break;
    case 4:
        //Listeyi tamamen sil
        break;
    }

    return 0;
}

void AddStudent(int sn, char n[], char s[], char d[], int c){

        student* st = (student*)malloc(sizeof(student));

        strcpy(st->name , n);
        strcpy(st->surname , s);
        strcpy(st->department , d);
        st->grade = c;
        st->studentNumber = sn;
        CreateLinkList(st);
}

void CreateLinkList(student *st){

    student* position=head;

    if(head==NULL)
    {
        head=st;
    }
    
    else
    {
        position->next=st;
        st->prev=position;
        position=st;
    }

}


void deleteStudent(student* st)
{
    
    
    //Baştaki elemanı silme

    if(st->prev=NULL)
    {
        st->next->prev=NULL;
        st->next=NULL;
    }


    // Ortadan eleman silme
    
    else if(st->prev!=NULL && st->next!=NULL)
    {
        st->prev->next=st->next;
        st->next->prev=st->prev;

        st->prev=NULL;
        st->next=NULL;
    }


    //Son sıradaki elemanı silme
    
    else
    {
        st->prev->next=NULL;
        st->prev=NULL;    
    }   
    

};


void DestroyLinkedList(student* st){

    printf("Enter the number of last student in the list");
    scanf("%d",st->studentNumber);

    
}












































/*
void create()
{
    int studentNumber;
    char name [100];
    char surname [100];
    char department [100];
    int  grade;

    temp = (struct student*)malloc(sizeof(struct student));
    temp->prev = NULL;
    temp->next = NULL;
    
    count++;

    printf("\n Please enter %d. student's number:\n",count);
    scanf("%d",&studentNumber);

    printf("\n Please enter %d. student's name:\n",count);
    scanf("%s",&name);

    printf("\n Please enter %d. student's surname:\n",count);
    scanf("%s",&surname);

    printf("\n Please enter %d. student's department:\n",count);
    scanf("%s",&department);

    printf("\n Please enter %d. student's grade:\n",count);
    scanf("%d",&grade);

    
    
    temp->studentNumber=studentNumber;
    strcpy(temp->name, name);
    strcpy(temp->surname, surname);
    strcpy(temp->department, department);
    temp->grade = grade;
    
    printf("%d. student is recorded to the list\n",count);
}

*/


/*

void addNode()
{

}

*/



/*

void insertbeg()
{
    if (h == NULL) 
    {
        create();
        h = temp;
        temp1 = h;
    }

    else 
    {
        create();
        temp1->next = temp;
        temp->prev = temp1;
        temp1 = temp;
    }

}

*/




/*
int deleteend()
{
    struct node* temp;
    temp = h;
    if (temp == NULL) 
    {
        printf("list is empty\n");
        return 0;
    }
    
    else 
    {
        temp = temp1;
        temp2 = temp1->prev;
        temp2->next = NULL;
        printf("%d %s %s %s %d\n", temp->studentNumber, temp->name, temp->surname, temp->department, temp->grade);
        free(temp);
    }
    count--;
    return 0;
}
*/




/*
void displaybeg()
{
    temp2 = h;
    if (temp2 == NULL) 
    {
        printf("\n list is empty\n");
        return;
    }

    printf("\n linked list elements from beginning:\n");

    while (temp2 != NULL) 
    {
        printf("%d %s %s %s %d\n", temp2->studentNumber, temp2->name, temp2->surname, temp2->department, temp2->grade);
        temp2 = temp2->next;
    }
}
*/



/*
void employerDetails()
{
    int choice, n, i;
    
    h = NULL;
    temp = temp1 = NULL;
    printf("--------Menu------------\n");
    printf("\n 1.create a DLL of n emp");
    printf("\n 2.display from beginning");
    printf("\n 4.delete at end");
    printf("\n 5.insert at end of the list");
    printf("\n 6.delete at beginning");
    printf("\n 7.delete list\n");
    printf("\n 8.exit\n");
    printf("----------------------\n");
    while (1) {
        printf("\n enter choice : ");
        scanf("%d", &choice);

        // Switch statements begins
        switch (choice) {
        case 1:
            printf("\n Please enter number of students:");
            scanf("%d", &n);
            for (i = 0; i < n; i++)
                insertbeg();
            break;
        case 2:
            displaybeg();
            break;

        case 4:
            deleteend();
            break;
        
        case 5:
            insertbeg();
            break;
        
        case 8:
            exit(0);
        default:
            printf("wrong choice\n");
        }
    }
}

*/










int main()
{

employerDetails();


    
}