#include <stdio.h>
#include <stdlib.h>
struct node
{
int data;
struct node *link;
};
struct node *tail=NULL;
void insert_front()
{
struct node *newnode;
newnode=(struct node*)malloc(sizeof(struct node));
printf("Enter the data\n");
scanf("%d",&newnode->data);
newnode->link=newnode;
if(tail==NULL)
{
tail=newnode;
return;
}
else
{
newnode->link=tail->link;
tail->link=newnode;
}
}

void insert_end()
{
struct node *newnode;
newnode=(struct node*)malloc(sizeof(struct node));
printf("Enter the data\n");
scanf("%d",&newnode->data);
newnode->link=newnode;
if(tail==NULL)
{
tail=newnode;
return;
}
else
{
newnode->link=tail->link;
tail->link=newnode;
tail=newnode;
}

}


void del_front()
{
struct node *temp;
if(tail==NULL)
{
printf("List is empty\n");
return;
}
else{
temp=tail->link;
tail->link=temp->link;
free(temp);
temp=NULL;
}

}


void del_end()
{
struct node *temp;
if(tail==NULL)
{
printf("List is empty\n");
return;
}
else if(tail->link=tail)
{
    free(tail);
    tail=NULL;
}
else
{
temp=tail->link;
while(temp->link!=tail)
{
temp=temp->link;
}
temp->link=tail->link;
free(tail);
tail=temp;
}

}

void display()
{
struct node *temp;
if(tail==NULL)
{
printf("List is empty");
return;
}
else
{
temp=tail->link;
do
{
printf("%d\t",temp->data);
temp=temp->link;
}while(temp!=tail->link);

}

}

int main()
{
while(1)
{
int f;
printf("Enter the function\t1.insert at front \t 2.insert at end \t 3.delete at front\t 4.delete at end\t 5.display\t 6.exit\n");
scanf("%d",&f);
switch(f)
{
case 1: insert_front();
        break;
case 2: insert_end();
        break;
case 3: del_front();
        break;
case 4: del_end();
        break;
case 5: display();
        break;
case 6: exit(0);
        break;
default: printf("Invalid input\n");
         break;

}

}

}


