#include<stdio.h>
#include<stdlib.h>
#include <time.h>

float timedifference_msec(struct timeval t0, struct timeval t1)
{
    return (t1.tv_sec - t0.tv_sec) * 1000.0f + (t1.tv_usec - t0.tv_usec) / 1000.0f;
}

int main()
{
        struct timeval t0;
        struct timeval t1;
        float elapsed;

	struct node
	{
		int data;
		struct node *next;
	};
	struct node *head=NULL,*pos=NULL,*tail=NULL;
	int ch,entry,c=0,s,x=0,num=1000,i;
	while(1)
	{
		printf("\n1:Insert \n2:Display \n3:Count \n4:Search \n5:Exit");
		printf("\nEnter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			      {
			      	for(i=0;i<num;i++)
			      	{
			     	if(head==NULL)
			     	{
			     		head=(struct node *)malloc(sizeof(struct node));
			     		head->data=rand()%100;
			     		pos=head;
			     		tail=head;
			     	}
			     	else
			     	{
			     		tail->next=(struct node *)malloc(sizeof(struct node));
			     		tail=tail->next;
			     		tail->data=rand()%100;
			     	}
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
			        

       				gettimeofday(&t0, NULL);
			        while(pos!=NULL)
			        {
			        	if((pos->data)==s)
			        	{
			        		 x++;
			        	}

			        	pos=pos->next;
			        }
			         gettimeofday(&t1, NULL);

   				 elapsed = timedifference_msec(t0, t1);

   				 printf("Code executed in %f milliseconds.\n", elapsed);

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
		
			       
			       	
			    	  
