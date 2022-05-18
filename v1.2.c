#include<stdio.h>
#include<stdlib.h>
void main()
{
	struct node
	{
		int data;
		struct node *next;
	};
	struct node *head=NULL,*pos=NULL,*tail=NULL;
	int ch,entry,c=0,s,x=0;
	while(1)
	{
		printf("\n1:Insert \n2:Display \n3:Count \n4:Search \n5:Exit");
		printf("\nEnter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			      {
			     	printf("\nEnter data:");
			     	scanf("%d",&entry);
			     	if(head==NULL)
			     	{
			     		head=(struct node *)malloc(sizeof(struct node));
			     		head->data=entry;
			     		pos=head;
			     		tail=head;
			     	}
			     	else
			     	{
			     		tail->next=(struct node *)malloc(sizeof(struct node));
			     		tail=tail->next;
			     		tail->data=entry;
			     	}
			     	break;
			      }
			 case 2:
			      {
			        pos=head;
			        printf("\nElements are:");
			        while(pos!=NULL)
			        {
			        	printf("\t%d",pos->data);
			        	pos=pos->next;
			        }
			        break;
			       }
			 case 3:
			      {
			      	c=0;
			        pos=head;
			        while(pos!=NULL)
			        {
			        	c++;
			        	pos=pos->next;
			        }
			        printf("Number of elements entered:%d",c);
			        break;
			       }
			 case 4:
			      {
			      	x=0;
			      	printf("Enter the element to be searched:");
			      	scanf("%d",&s);
			        pos=head;
			        while(pos!=NULL)
			        {
			        	if((pos->data)==s)
			        	{
			        		 x++;
			        	}

			        	pos=pos->next;
			        }
			        if(x==0)
			        {
			        	printf("Element is not found");
			        }
			        else
			        {
			        	printf("Element is found");
			        }
			       
			        break;
			       }     
			 case 5:
			       {
			       	 printf("\nExiting");
			       	 exit(0);
			       }
		}
	}
}
		
			       
			       	
			    	  
