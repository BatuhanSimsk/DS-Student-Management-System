//	List ADT Type Defintions 
	typedef struct node 
	{
		void*        dataPtr;
		struct node* link;
		struct node* prevLink;
	} NODE; 

	typedef struct
	{
		int   count; 
		NODE* pos;
		NODE* head; 
		NODE* rear;
		int    (*compare) (void* argu1, void* argu2); 
	} LIST;
