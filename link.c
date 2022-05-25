#include<stdio.h>
#include<stdlib.h>
void main()
{
	struct node
	{
		int data;
		struct node *next;
	};
	struct node *head=NULL,*pos=NULL,*tail=NULL,*del,*temp;
	int ch,entry,c=0,s,x=0,d,i;
	while(1)
	{
		printf("\n1:Insert \n2:Display \n3:Deletion \n4:Search \n5:Exit");
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
			     		temp=head;
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
			        temp=head;
			      	printf("Enter the position to delete:");
			      	scanf("%d",&d);
				if(d==0)
				{
					head=head->next;
					temp->next=NULL;
					free(temp);
				}
				else
				{
					for(i=0;i<d-1;i++)
					{
						temp=temp->next;
					}
					del=temp->next;
					temp->next=del->next;
					del->next=NULL;
					free(del);
				}		
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
			        	printf("\nElement is not found\n");
			        }
			        else
			        {
			        	printf("\nElement is found\n");
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
		
			       
			       	
			    	  
