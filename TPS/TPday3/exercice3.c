#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*typedef struct contact
{
  char  name[37];
  unsigned phonenumber;
  unsigned id;

  
} contact;
*/

typedef struct contact_book
{
    char  name[37];
    unsigned phonenumber;
    unsigned id;
    
    struct contact_book *next;
}contact_book;

void ADD(contact_book * c,char s[],unsigned n)
{
  //if((c->id)<9)
  {
    contact_book * cont;
    contact_book * temp;
    cont=malloc(sizeof(contact_book ));
    cont->phonenumber=n;
    strcpy(cont->name,s);
    temp=c;
    while((temp->next)!=NULL)
    {
        
        temp=temp->next;

    }
    cont->id=(temp->id)+1;
    printf("%u",cont->id);
    cont->next=NULL;
    temp->next=cont;
    
  }
  //else
   // printf("contact_book est dj saturé"); 
     
}

void LIST(contact_book * c)

{
    if (c == NULL)                    
    {
        printf("contact book est vide\n");
        return;
    }
    printf("|----------------|------------------|-----------------|\n");
    printf("|     full name  |      Telephone   |      ID         |\n");
    printf("|----------------|------------------|-----------------|\n");
    contact_book * temp=c;    
    while(temp!=NULL)
    {
    printf("|      %3s       |    %3u         |       %3u         |\n",
                temp->name,
                temp->phonenumber,
                temp->id);
    printf("|----------------|------------------|-----------------|\n");
    temp=temp->next;
    }
}




void  quit(contact_book * c)
{
    while(c!=NULL)
    {
        contact_book *  temp;
        temp=c;
        c=c->next;
        free(temp);
    }
}
int main()
{
    char s[37];
    unsigned n;
    contact_book T;
    strcpy(T.name,"lll");
    T.phonenumber=12345;
    T.id=1;
    T.next=NULL;
    printf("saisir");
    scanf("%s",s);
    scanf("%u",&n);
    ADD(&T,s,n);
    //ADD(&T,s,n);
    LIST(&T);
    //quit(&T);
    




}


