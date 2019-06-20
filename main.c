


/*in this project we create a pogramme in this pogramme
 
 we enter the student_roll_no, date , and day */

#include<stdio.h>
#include<stdlib.h>
// dbms maths eem desss ds dendk
int dbms; 
int maths; 
int eem; 
int desss; 
int ds; 
int dendk;
int adbms; 
int amaths; 
int aeem; 
int adesss;
int ads; 
int adendk;

typedef struct node1
{
    long int  date;
    int  day;
    int p[6];
    struct node1 *link;
 
}node1;

typedef struct node
{
    int roll_no;
    struct node1 *linkn;
    struct node *next;
}node;


node *first,*temp,*new;
node1 *new1;

node1 *create_node1(void)
{
    int i;
    new1=(node1 *)malloc(sizeof(node1));

    printf("\n enter date ");
    scanf("%ld",&new1->date);
    
    
    printf("\n press 1: monday");
    printf("\n press 2: tuesday");
    printf("\n press 3: wensday");
    printf("\n press 4: thursday");
    printf("\n press 5: friday ");
    
    printf("\n enter your choice:= ");
    scanf("%d",&new1->day);
    switch(new1->day)
    {
        case 1:
            for(i=0;i<=5;i++)
            {
                printf("\n press 1: dbms nvj");
                printf("\n press 2: eem tdd");
                printf("\n press 3: maths rkr");
                printf("\n press 4: DS hjs");
                printf("\n press 5: DE sss");
                printf("\n press 6: DBMS lab");
                
                printf("\n \n enter 1 if you attend lecture else enter the 0 %d attend or note := ",i+1);
                
                scanf("%d",&new1->p[i]);
             
            }
            break;
        case 2:
            for(i=0;i<=5;i++)
            {
                printf("\n press 1: EEM TDD");
                printf("\n press 2: DBMS HJS");
                printf("\n press 3: DE SSS");
                printf("\n press 4: AEM RKR");
                printf("\n press 5: DS VCJ");
                printf("\n press 6: DE SSS");
                printf("\n \n enter 1 if you attend lecture else enter the 0 %d attend or note := ",i+1);
                
                scanf("%d",&new1->p[i]);
              
            }
            break;
        case 3:
            for(i=0;i<=5;i++)
            {
                printf("\n press 1: EEM TDD");
                printf("\n press 2: AEM RKR");
                printf("\n press 3: DS HJS");
                printf("\n press 4: AEM TUTORIAL");
                printf("\n press 5: AEM TUTORIAL");
                printf("\n press 6: DS LAB  VCJ");
                printf("\n \n enter 1 if you attend lecture else enter the 0 %d attend or note := ",i+1);
                
                scanf("%d",&new1->p[i]);
               
            }
            break;
        case 4:
            for(i=0;i<=5;i++)
            {
                printf("\n press 1: DE SSS");
                printf("\n press 2: DS VCJ");
                printf("\n press 3: AEM NDK");
                printf("\n press 4: EEM TDD");
                printf("\n press 5: DBMS HJS");
                printf("\n press 6: DS VCJ");
                printf("\n \n enter 1 if you attend lecture else enter the 0 %d attend or note := ",i+1);
                
                scanf("%d",&new1->p[i]);
             
                
            }
            break;
        case 5:
            for(i=0;i<6;i++)
            {
                printf("\n press 1: dbms lab nvj");
                printf("\n press 2: dbms lab nvj");
                printf("\n press 3: dbms nvj");
                printf("\n press 4: DE JBM");
                printf("\n press 5: AEM NDK");
                printf("\n press 6: DE NDK");
                printf("\n \n enter 1 if you attend lecture else enter the 0 %d attend or note := ",i+1);
                
                scanf("%d",&new1->p[i]);
              
            }
            break;
        default:
            printf("\n please enter a valid nomber");
            break;
            
    }
    new1->link=NULL;
    return(new1);
}
node *create_node(int x)
{
    
    new = (node *)malloc(sizeof(node));
    new->roll_no=x;
    new->next=NULL;
    new->linkn=NULL;
    
    return(new);
}

node *add_info()
{
    node1 *temp1;
    int r;
    printf("\n enter your roll no:= ");
    scanf("%d",&r);
    temp = first;
    if(temp==NULL)                   //  if no node in linklist means linklist is empty
    {
        new=create_node(r);
        first=new;
        new1=create_node1();
    
        first->linkn=new1;

    }
    else{                                       //   link list note empty
        while(temp->roll_no!=r&&temp->next!=NULL)
        {
            temp=temp->next;
        }
        if(temp->roll_no==r)                           //   if enter roll number is last node
        {
            new1=create_node1();
            temp1=temp->linkn;
            while(temp1->link!=NULL)
            {
                temp1=temp1->link;
            }
            temp1->link=new1;
        }
        else{                                       // if roll number is not found
            new=create_node(r);
            temp=first;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=new;
            new1=create_node1();
            
            new->linkn=new1;
        }
    
    }
    return(first);
}
void display()
{
    node1 *temp1;
    int i;
    temp=first;
    
    if(temp==NULL)                     // if no node in link list
    {
        printf("\n your list is empty");
    }
    else{                                     //    link list is exist
        printf("\n it data system is created by FETR STUDENT  ");
        while(temp!=NULL)
        {
            printf("\n \n your roll_no is %d",temp->roll_no);
            temp1=temp->linkn;
            while(temp1!=NULL)
            {
                printf("\n date %ld ", temp1->date);
                if(temp1->day==2)
                    {
                        printf("\n day is tuesday ");
                        for(i=0;i<=5;i++)
                        {
                            if(temp1->p[i]==1)
                            {
                                switch(i+1)
                                {
                                    case 1:
                                        printf("\n EEM TDD is preasent \n");
                                        break;
                                    case 2:
                                        printf("\n DBMS HJS is present \n");
                                        break;
                                    case 3:
                                        printf("\n DE SSS is present \n");
                                        break;
                                    case 4:
                                        printf("\n AEM RKR is present\n");
                                        break;
                                
                                    case 5:
                                        printf("\n DS VCJ is present\n");
                                        break;
                                    case 6:
                                        printf("\n DE is present\n");
                                        break;
                                }
                        
                            }
                            else{
                                switch(i+1)
                                {
                                    case 1:
                                        printf("\n EEM TDD is absent\n");
                                        break;
                                    case 2:
                                        printf("\n DBMS HJS is absent\n");
                                        break;
                                    case 3:
                                        printf("\n DE SSS is absent\n");
                                        break;
                                    case 4:
                                        printf("\n AEM RKR is absent\n");
                                        break;
                                
                                    case 5:
                                        printf("\n DS VCJ is absent\n");
                                        break;
                                    case 6:
                                        printf("\n DE is absent\n");
                                        break;
                                }
                            }
                        }
                    }
                if(temp1->day==1)
                {
                    printf("\n day is monday \n\n");
                    for(i=0;i<=5;i++)
                    {
                        if(temp1->p[i]==1)
                        {
                            switch(i+1)
                            {
                                case 1:
                                    printf("\n DBMS NVJ is preasent\n");
                                    break;
                                case 2:
                                    printf("\n EEM TDD is present\n");
                                    break;
                                case 3:
                                    printf("\n MATHS RKR is present\n");
                                    break;
                                case 4:
                                    printf("\n DS HJS is present\n");
                                    break;
                                
                                case 5:
                                    printf("\n DE SSS is present\n");
                                    break;
                                case 6:
                                    printf("\n DBMS LAB is present\n");
                                    break;
                            }
                            
                        }
                        else{
                            switch(i+1)
                            {
                                case 1:
                                    printf("\n DBMS NVJ is absent\n");
                                    break;
                                case 2:
                                    printf("\n EEM TDD is absent\n");
                                    break;
                                case 3:
                                    printf("\n MATHS RKR is absent\n");
                                    break;
                                case 4:
                                    printf("\n DS HJS is absent\n");
                                    break;
                                
                                case 5:
                                    printf("\n DE SSS is absent\n");
                                    break;
                                case 6:
                                    printf("\n DBMS LAB is absent\n");
                                    break;
                            }
                        }
                    }
                }
                if(temp1->day==3)
                {
                    printf("\n day is wensday \n\n");
                for(i=0;i<=5;i++)
                {
                    if(temp1->p[i]==1)
                    {
                        switch(i+1)
                        {
                            case 1:
                                printf("\n EEM TDD is preasent\n");
                                break;
                            case 2:
                                printf("\n AEM RKR is present\n");
                                break;
                            case 3:
                                printf("\n DS HJS is present\n");
                                break;
                            case 4:
                                printf("\n AEM TUTORIAL is present\n");
                                break;
                                
                            case 5:
                                printf("\n AEM TUTORIAL IS present\n");
                                break;
                            case 6:
                                printf("\n DS LAB is present\n");
                                break;
                        }
                        
                        }
                        else{
                        switch(i+1)
                        {
                            case 1:
                                printf("\n EEM TDD is absent\n");
                                break;
                            case 2:
                                printf("\n AEM RKR is absent\n");
                                break;
                            case 3:
                                printf("\n DS HJS is absent\n");
                                break;
                            case 4:
                                printf("\n AEM TUTORIAL is absent\n");
                                break;
                                
                            case 5:
                                printf("\n AEM TUTORIAL IS absent\n");
                                break;
                            case 6:
                                printf("\n DS LAB is absent\n");
                                break;
                        }
                    }
                }
                
            }
            if(temp1->day==4)
            {
                printf("\n day is thursday \n\n");
                for(i=0;i<=5;i++)
                {
                    if(temp1->p[i]==1)
                    {
                        switch(i+1)
                        {
                            case 1:
                                printf("\n DE SSS is preasent\n");
                                break;
                            case 2:
                                printf("\n DS VCJ is present\n");
                                break;
                            case 3:
                                printf("\n AEM NDK is present\n");
                                break;
                            case 4:
                                printf("\n EEM TDD is present\n");
                                break;
                                
                            case 5:
                                printf("\n DBMS HJS IS present\n");
                                break;
                            case 6:
                                printf("\n DS VCJ is present\n");
                                break;
                        }
                        
                    }
                    else{
                        switch(i+1)
                        {
                            case 1:
                                printf("\n DE SSS is absent\n");
                                break;
                            case 2:
                                printf("\n DS VCJ is absent\n");
                                break;
                            case 3:
                                printf("\n AEM NDK is absent\n");
                                break;
                            case 4:
                                printf("\n EEM TDD is absent\n");
                                break;
                                
                            case 5:
                                printf("\n DBMS HJS IS absent\n");
                                break;
                            case 6:
                                printf("\n DS VCJ is absent\n");
                                break;
                        }
                    }
                }
                
            }
            if(temp1->day==5)
            {
                printf("\n day is friday \n\n");
                for(i=0;i<=5;i++)
                {
                    if(temp1->p[i]==1)
                    {
                        switch(i+1)
                        {
                            case 1:
                                printf("\n DBMS LAB NVJ is preasent\n");
                                break;
                            case 2:
                                printf("\n DBMS LAB NVJ is present\n");
                                break;
                            case 3:
                                printf("\n DBMS NVJ is present\n");
                                break;
                            case 4:
                                printf("\n DE SSS is present\n");
                                break;
                                
                            case 5:
                                printf("\n AEM NDK IS present\n");
                                break;
                            case 6:
                                printf("\n DE NDK is present\n");
                                break;
                        }
                        
                    }
                    else{
                        switch(i+1)
                        {
                            case 1:
                                printf("\n DBMS LAB NVJ is absent\n");
                                break;
                            case 2:
                                printf("\n DBMS LAB NVJ is absent\n");
                                break;
                            case 3:
                                printf("\n DBMS NVJ is absent\n");
                                break;
                            case 4:
                                printf("\n DE SSS is absent\n");
                                break;
                                
                            case 5:
                                printf("\n AEM NDK IS absent\n");
                                break;
                            case 6:
                                printf("\n DE NDK is absent\n");
                                break;
                        }
                    }
                }
                
            }
            temp1=temp1->link;
        }
            temp=temp->next;
    }
    }
}
void search_rollno(int x)
{
    dbms = 0; 
    maths = 0;
    eem = 0; 
    desss = 0;
    ds = 0; 
    dendk = 0;
    adbms = 0; 
    amaths = 0; 
    aeem = 0; 
    adesss = 0;
    ads = 0; 
    adendk = 0;

    int i;
    node1 *temp1;
    temp=first;
    if(temp==NULL)
    {
        printf("\n link list is empty");
    }
    else{
            while(temp->roll_no!=x && temp->next!=NULL)
            {
                temp=temp->next;
            }
            if(temp->roll_no==x)
            {
            printf("\n this database pogramme is created by FETR student");
            printf("\n well come roll no = %d",temp->roll_no);
            temp1=temp->linkn;
            while(temp1!=NULL)
            {
                switch(temp1->day)
                {
                    case 1:
                        printf("\n day is monday\n");
                        for(i=0;i<=5;i++)
                        {
                            if(temp1->p[i]==1)
                            {
                                switch(i+1)
                                {
                                    case 1:
                                        printf("\n DBMS NVJ is preasent\n");
                                        adbms++;
                                        dbms++;
                                        break;
                                    case 2:
                                        printf("\n EEM TDD is present\n");
                                       aeem++;
                                        eem++;
                                        break;
                                    case 3:
                                        printf("\n MATHS RKR is present\n");
                                        amaths++;
                                        maths++;
                                        break;
                                    case 4:
                                        printf("\n DS HJS is present\n");
                                        ads++;
                                       ds++;
                                        break;
                                        
                                    case 5:
                                        printf("\n DE SSS is present\n");
                                       adesss++;
                                        desss++;
                                        break;
                                    case 6:
                                        printf("\n DBMS LAB is present\n");
                                        adbms++;
                                        dbms++;
                                        break;
                                }
                                
                            }
                            else{
                                switch(i+1)
                                {
                                    case 1:
                                        printf("\n DBMS NVJ is absent\n");
                                        dbms++;
                                        break;
                                    case 2:
                                        printf("\n EEM TDD is absent\n");
                                        
                                        eem++;
                                        break;
                                    case 3:
                                        printf("\n MATHS RKR is absent\n");
                                        
                                        maths++;
                                        break;
                                    case 4:
                                        printf("\n DS HJS is absent\n");
                                     
                                        ds++;
                                        break;
                                        
                                    case 5:
                                        printf("\n DE SSS is absent\n");
                                      
                                        desss++;
                                        break;
                                    case 6:
                                        printf("\n DBMS LAB is absent\n");
                                    
                                        dbms++;
                                        break;
                                }
                            }
                        }
                        break;
                    case 2:
                        printf("\n day is tuesday\n");
                        for(i=0;i<=5;i++)
                        {
                            if(temp1->p[i]==1)
                            {
                                switch(i+1)
                                {
                                    case 1:
                                        printf("\n EEM TDD is preasent \n");
                                       aeem++;
                                       eem++;
                                        break;
                                    case 2:
                                        printf("\n DBMS HJS is present \n");
                                        adbms++;
                                        dbms++;
                                        break;
                                    case 3:
                                        printf("\n DE SSS is present \n");
                                     adesss++;
                                    desss++;
                                        break;
                                    case 4:
                                        printf("\n AEM RKR is present\n");
                                        
                                        amaths++;
                                        maths++;
                                        break;
                                        
                                    case 5:
                                        printf("\n DS VCJ is present\n");
                                        ads++;
                                     ds++;
                                        break;
                                    case 6:
                                        printf("\n DE is present\n");
                                        adesss++;
                                        desss++;
                                        break;
                                }
                                
                            }
                            else{
                                switch(i+1)
                                {
                                    case 1:
                                        printf("\n EEM TDD is absent\n");
                                    
                                       eem++;
                                        break;
                                    case 2:
                                        printf("\n DBMS HJS is absent\n");
                                        
                                        dbms++;
                                        break;
                                    case 3:
                                        printf("\n DE SSS is absent\n");
                                       
                                      desss++;
                                        
                                        break;
                                    case 4:
                                        printf("\n AEM RKR is absent\n");
                                        
                                        maths++;
                                        break;
                                        
                                    case 5:
                                        printf("\n DS VCJ is absent\n");
                                       
                                       ds++;
                                        break;
                                    case 6:
                                        printf("\n DE is absent\n");
                                        desss++;
                                        break;
                                }
                            }
                        }
                        break;
                    case 3:
                        printf("\n day is wensday\n");
                        for(i=0;i<=5;i++)
                        {
                            if(temp1->p[i]==1)
                            {
                                switch(i+1)
                                {
                                    case 1:
                                        printf("\n EEM TDD is preasent\n");
                                        aeem++;
                                       eem++;
                                        break;
                                    case 2:
                                        printf("\n AEM RKR is present\n");
                                        amaths++;
                                        maths++;
                                        break;
                                    case 3:
                                        printf("\n DS HJS is present\n");
                                       ads++;
                                       ds++;
                                        break;
                                    case 4:
                                        printf("\n AEM TUTORIAL is present\n");
                                        amaths++;
                                        maths++;
                                        break;
                                        
                                    case 5:
                                        printf("\n AEM TUTORIAL IS present\n");
                                        amaths++;
                                        maths++;
                                        break;
                                    case 6:
                                        printf("\n DS LAB is present\n");
                                        ads++;
                                        ds++;
                                        break;
                                }
                                
                            }
                            else{
                                switch(i+1)
                                {
                                    case 1:
                                        printf("\n EEM TDD is absent\n");
                                        
                                       eem++;
                                        break;
                                    case 2:
                                        printf("\n AEM RKR is absent\n");
                                        
                                        maths++;
                                        break;
                                    case 3:
                                        printf("\n DS HJS is absent\n");
                                        
                                       ds++;
                                        break;
                                    case 4:
                                        printf("\n AEM TUTORIAL is absent\n");
                                        
                                        maths++;
                                        break;
                                        
                                    case 5:
                                        printf("\n AEM TUTORIAL IS absent\n");
                                        
                                        maths++;
                                        break;
                                    case 6:
                                        printf("\n DS LAB is absent\n");
                                        
                                      ds++;
                                        break;
                                }
                            }
                        }
                        break;
                    case 4:
                        printf("\n day is thursday\n");
                        for(i=0;i<=5;i++)
                        {
                            if(temp1->p[i]==1)
                            {
                                switch(i+1)
                                {
                                    case 1:
                                        printf("\n DE SSS is preasent\n");
                                        adesss++;
                                        desss++;
                                        break;
                                    case 2:
                                        printf("\n DS VCJ is present\n");
                                      ads++;
                                      ds++;
                                        break;
                                    case 3:
                                        printf("\n AEM NDK is present\n");
                                        amaths++;
                                        maths++;
                                        break;
                                    case 4:
                                        printf("\n EEM TDD is present\n");
                                       aeem++;
                                       eem++;
                                        break;
                                        
                                    case 5:
                                        printf("\n DBMS HJS IS present\n");
                                        adbms++;
                                        dbms++;
                                        break;
                                    case 6:
                                        printf("\n DS VCJ is present\n");
                                        ads++;
                                      ds++;
                                        break;
                                }
                                
                            }
                            else{
                                switch(i+1)
                                {
                                    case 1:
                                        
                                        printf("\n DE SSS is absent\n");
                                        
                                       desss++;
                                        break;
                                    case 2:
                                        printf("\n DS VCJ is absent\n");
                                        
                                       ds++;
                                        break;
                                    case 3:
                                        printf("\n AEM NDK is absent\n");
                                        
                                        maths++;
                                        break;
                                    case 4:
                                        printf("\n EEM TDD is absent\n");
                                   
                                      eem++;
                                        break;
                                        
                                    case 5:
                                        printf("\n DBMS HJS IS absent\n");
                                        
                                        dbms++;
                                        break;
                                    case 6:
                                        printf("\n DS VCJ is absent\n");
                                      
                                        ds++;
                                        break;
                                }
                            }
                        }
                        break;
                    case 5:
                        printf("\n day is friday\n");
                        for(i=0;i<=5;i++)
                        {
                            if(temp1->p[i]==1)
                            {
                                switch(i+1)
                                {
                                    case 1:
                                        printf("\n DBMS LAB NVJ is preasent\n");
                                        adbms++;
                                        dbms++;
                                        break;
                                    case 2:
                                        printf("\n DBMS LAB NVJ is present\n");
                                        adbms++;
                                        dbms++;
                                        break;
                                    case 3:
                                        printf("\n DBMS NVJ is present\n");
                                        adbms++;
                                        dbms++;
                                        break;
                                    case 4:
                                        printf("\n DE SSS is present\n");
                                       adesss++;
                                     desss++;
                                        break;
                                        
                                    case 5:
                                        printf("\n AEM NDK IS present\n");
                                        amaths++;
                                        maths++;
                                        break;
                                    case 6:
                                        printf("\n DE NDK is present\n");
                                        amaths++;
                                        maths++;
                                        break;
                                }
                                
                            }
                            else{
                                switch(i+1)
                                {
                                    case 1:
                                        printf("\n DBMS LAB NVJ is absent\n");
                                        
                                        dbms++;
                                        break;
                                    case 2:
                                        printf("\n DBMS LAB NVJ is absent\n");
                                        
                                        dbms++;
                                        break;
                                    case 3:
                                        printf("\n DBMS NVJ is absent\n");
                                        
                                        dbms++;
                                        break;
                                    case 4:
                                        printf("\n DE SSS is absent\n");
                                        
                                        desss++;
                                        break;
                                        
                                    case 5:
                                        printf("\n AEM NDK IS absent\n");
                                    
                                        maths++;
                                        break;
                                    case 6:
                                        printf("\n DE NDK is absent\n");
                                        maths++;
                                        break;
                                }
                            }
                        }
                        break;
                }
                temp1=temp1->link;
            }
            
            }
            else{
            printf("\n your enter roll nomber is not available in our data base");
            }
    }
}
void search_rollno_date(int x)
{
    long int d;
    int i;
    node1 *temp1;
    temp=first;
    if(temp==NULL)         // if link list is empty
    {
        printf("\n sorry data base is empty");
    }
    else{
        while(temp->roll_no!=x&&temp->next!=NULL)
        {
            temp=temp->next;
        }
        if(temp->roll_no==x)
        {
            printf("\n enter date which you want to get that day info");
            scanf("%ld",&d);
            temp1 = temp->linkn;
            while(temp1->date!=d&&temp1->link!=NULL)
            {
                temp1=temp1->link;
            }
            if(temp1->date==d)
            {
                printf("\n its created by FETR STUDENT");
                printf("\n your enter date is %ld ", temp1->date);
                if(temp1->day==2)
                {
                    printf("\n day is tuesday ");
                    for(i=0;i<=5;i++)
                    {
                        if(temp1->p[i]==1)
                        {
                            switch(i+1)
                            {
                                case 1:
                                    printf("\n EEM TDD is preasent \n");
                                    break;
                                case 2:
                                    printf("\n DBMS HJS is present \n");
                                    break;
                                case 3:
                                    printf("\n DE SSS is present \n");
                                    break;
                                case 4:
                                    printf("\n AEM RKR is present\n");
                                    break;
                                    
                                case 5:
                                    printf("\n DS VCJ is present\n");
                                    break;
                                case 6:
                                    printf("\n DE is present\n");
                                    break;
                            }
                            
                        }
                        else{
                            switch(i+1)
                            {
                                case 1:
                                    printf("\n EEM TDD is absent\n");
                                    break;
                                case 2:
                                    printf("\n DBMS HJS is absent\n");
                                    break;
                                case 3:
                                    printf("\n DE SSS is absent\n");
                                    break;
                                case 4:
                                    printf("\n AEM RKR is absent\n");
                                    break;
                                    
                                case 5:
                                    printf("\n DS VCJ is absent\n");
                                    break;
                                case 6:
                                    printf("\n DE is absent\n");
                                    break;
                            }
                        }
                    }
                }
                if(temp1->day==1)
                {
                    printf("\n day is monday \n\n");
                    for(i=0;i<=5;i++)
                    {
                        if(temp1->p[i]==1)
                        {
                            switch(i+1)
                            {
                                case 1:
                                    printf("\n DBMS NVJ is preasent\n");
                                    break;
                                case 2:
                                    printf("\n EEM TDD is present\n");
                                    break;
                                case 3:
                                    printf("\n MATHS RKR is present\n");
                                    break;
                                case 4:
                                    printf("\n DS HJS is present\n");
                                    break;
                                    
                                case 5:
                                    printf("\n DE SSS is present\n");
                                    break;
                                case 6:
                                    printf("\n DBMS LAB is present\n");
                                    break;
                            }
                            
                        }
                        else{
                            switch(i+1)
                            {
                                case 1:
                                    printf("\n DBMS NVJ is absent\n");
                                    break;
                                case 2:
                                    printf("\n EEM TDD is absent\n");
                                    break;
                                case 3:
                                    printf("\n MATHS RKR is absent\n");
                                    break;
                                case 4:
                                    printf("\n DS HJS is absent\n");
                                    break;
                                    
                                case 5:
                                    printf("\n DE SSS is absent\n");
                                    break;
                                case 6:
                                    printf("\n DBMS LAB is absent\n");
                                    break;
                            }
                        }
                    }
                }
                if(temp1->day==3)
                {
                    printf("\n day is wensday \n\n");
                    for(i=0;i<=5;i++)
                    {
                        if(temp1->p[i]==1)
                        {
                            switch(i+1)
                            {
                                case 1:
                                    printf("\n EEM TDD is preasent\n");
                                    break;
                                case 2:
                                    printf("\n AEM RKR is present\n");
                                    break;
                                case 3:
                                    printf("\n DS HJS is present\n");
                                    break;
                                case 4:
                                    printf("\n AEM TUTORIAL is present\n");
                                    break;
                                    
                                case 5:
                                    printf("\n AEM TUTORIAL IS present\n");
                                    break;
                                case 6:
                                    printf("\n DS LAB is present\n");
                                    break;
                            }
                            
                        }
                        else{
                            switch(i+1)
                            {
                                case 1:
                                    printf("\n EEM TDD is absent\n");
                                    break;
                                case 2:
                                    printf("\n AEM RKR is absent\n");
                                    break;
                                case 3:
                                    printf("\n DS HJS is absent\n");
                                    break;
                                case 4:
                                    printf("\n AEM TUTORIAL is absent\n");
                                    break;
                                    
                                case 5:
                                    printf("\n AEM TUTORIAL IS absent\n");
                                    break;
                                case 6:
                                    printf("\n DS LAB is absent\n");
                                    break;
                            }
                        }
                    }
                    
                }
                if(temp1->day==4)
                {
                    printf("\n day is thursday \n\n");
                    for(i=0;i<=5;i++)
                    {
                        if(temp1->p[i]==1)
                        {
                            switch(i+1)
                            {
                                case 1:
                                    printf("\n DE SSS is preasent\n");
                                    break;
                                case 2:
                                    printf("\n DS VCJ is present\n");
                                    break;
                                case 3:
                                    printf("\n AEM NDK is present\n");
                                    break;
                                case 4:
                                    printf("\n EEM TDD is present\n");
                                    break;
                                    
                                case 5:
                                    printf("\n DBMS HJS IS present\n");
                                    break;
                                case 6:
                                    printf("\n DS VCJ is present\n");
                                    break;
                            }
                            
                        }
                        else{
                            switch(i+1)
                            {
                                case 1:
                                    printf("\n DE SSS is absent\n");
                                    break;
                                case 2:
                                    printf("\n DS VCJ is absent\n");
                                    break;
                                case 3:
                                    printf("\n AEM NDK is absent\n");
                                    break;
                                case 4:
                                    printf("\n EEM TDD is absent\n");
                                    break;
                                    
                                case 5:
                                    printf("\n DBMS HJS IS absent\n");
                                    break;
                                case 6:
                                    printf("\n DS VCJ is absent\n");
                                    break;
                            }
                        }
                    }
                    
                }
                if(temp1->day==5)
                {
                    printf("\n day is friday \n\n");
                    for(i=0;i<=5;i++)
                    {
                        if(temp1->p[i]==1)
                        {
                            switch(i+1)
                            {
                                case 1:
                                    printf("\n DBMS LAB NVJ is preasent\n");
                                    break;
                                case 2:
                                    printf("\n DBMS LAB NVJ is present\n");
                                    break;
                                case 3:
                                    printf("\n DBMS NVJ is present\n");
                                    break;
                                case 4:
                                    printf("\n DE SSS is present\n");
                                    break;
                                    
                                case 5:
                                    printf("\n AEM NDK IS present\n");
                                    break;
                                case 6:
                                    printf("\n DE NDK is present\n");
                                    break;
                            }
                            
                        }
                        else{
                            switch(i+1)
                            {
                                case 1:
                                    printf("\n DBMS LAB NVJ is absent\n");
                                    break;
                                case 2:
                                    printf("\n DBMS LAB NVJ is absent\n");
                                    break;
                                case 3:
                                    printf("\n DBMS NVJ is absent\n");
                                    break;
                                case 4:
                                    printf("\n DE SSS is absent\n");
                                    break;
                                    
                                case 5:
                                    printf("\n AEM NDK IS absent\n");
                                    break;
                                case 6:
                                    printf("\n DE NDK is absent\n");
                                    break;
                            }
                        }
                    }
                    
                
            }
        }
            else{
                printf("\n date is not in our data base");
            }
    }
}
}
void search()
{
    int n,x;
    
    printf("\n press 1: for search all information about perticular roll_no.");
    
    printf("\n press 2: for search perticular roll no and in roll no perticular date");
    
    scanf("%d",&n);
    switch(n)
    {
        case 1:
            printf("\n enter roll_nomber which you want to get information");
            scanf("%d",&x);
            search_rollno(x);
            break;
        case 2:
            printf("\n enter the roll nomber:== ");
            scanf("%d",&x);
            search_rollno_date(x);
            break;
        default:
            printf("\n plz enter either 1 or 2");
            
            
    }
}

node *delete_roll_no()
{
    int r;
    node *temp11;
    temp11=NULL;
    temp=first;
    if(temp==NULL)
    {
        printf("\n link list totally empty");
    }
    else{
        
        printf("\n please enter a roll no which you want to delete in link list");
        scanf("%d",&r);
        if(first->roll_no==r)
        {
            first=first->next;
            free(temp);
        }
        else{
            while(temp->roll_no!=r&&temp->next!=NULL)
            {
                temp11=temp;
                temp=temp->next;
            }
            if(temp->roll_no==r)
            {
                temp11->next=temp->next;
                free(temp);
            }
            else{
                printf("\n roll no is not our database ");
            }
        }
    }
    return(first);
}
void delete_date()
{
    node1 *temp1,*temp2=NULL;
    long int d;
    int r;
    temp = first;
    if(temp==NULL)
    {
        printf("\n link list is empty");
    }
    else{
        printf("\n please enter a roll no:= ");
        scanf("%d",&r);
        printf("plese enter a date which you want to delete:= ");
        scanf("%ld",&d);
        while(temp->roll_no!=r&&temp->next!=NULL)
        {
            temp=temp->next;
        }
        if(temp->roll_no==r)
        {
            temp1=temp->linkn;
            while(temp1->date!=d&&temp1->link!=NULL)
            {
                temp2=temp1;
                temp1=temp1->link;
            }
            if(temp1->date==d)
            {
                temp2->link=temp1->link;
                free(temp1);
            }
            else{
                printf("\n entered date is not available in our database");
            }
        }
    }
}
void delete(void)
{
    int c;
    printf("\n press 1:  for delete a perticular roll no all info");
    
    printf("\n press 2:  for delete a perticular date information in  roll no  ");
    scanf("%d",&c);
    switch(c)
    {
        case 1:
            first=delete_roll_no();
            break;
       case 2:
            delete_date();
            break;
        default:
            printf("\n invalid choice plz choose either 1 or 2");
            break;
    }
    
}
void attendence(){
    int rol;
    int ch;
    float per;
    printf("\n please enter the roll no of the student");
    scanf("%d",&rol);
    search_rollno(rol);
    printf("\n press 1: for known as maths attendence ");
    
    printf("\n press 2: for known as ds attendence ");
    
    printf("\n press 3: for known as dbms attendence ");
    
    printf("\n press 4: for known as de sss sir attendence ");
    
    printf("\n press 5: for known as eem attendence ");
    printf("\n enter your choice");
    scanf("%d",&ch);
    
    switch (ch) {
        case 1:
             per = (((float)amaths) / ((float)maths)) * 100;
            printf("\n your attendence in maths is %f persent" , per);
            break;
        case 2:
            per = (((float)ads) / ((float)ds)) * 100;
            printf("\n your attendence in maths is %f persent" , per);
            break;
        case 3:
            per = (((float)adbms) / ((float)dbms)) * 100;
            printf("\n your attendence in maths is %f persent" , per);
            break;
        case 4:
            per = (((float)adesss) / ((float)desss)) * 100;
            printf("\n your attendence in maths is %f persent" , per);
            break;
        case 5:
            per = (((float)aeem) / ((float)eem)) * 100;
            printf("\n your attendence in maths is %f persent" , per);
            break;
            
        default:
            printf("please select valid choice");
            break;
    }

}
int main()
{
    int ch;
    while(1)
    {
        printf("\n press 1:-- for enter your days information");
        printf("\n press 2:-- for desplay your days information");
        printf("\n press 3:-- for search element any date information");
        printf("\n press 4:-- for delete a any date information");
         printf("\n press 5:-- for filter student due to attendence");
        printf("\n press 6:-- for exit");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                first=add_info();
                break;
            case 2:
                display();
                break;
            case 3:
                search();
                break;
            case 4:
                delete();
                break;
            case 5:
                attendence();
                break;
            case 6:
                exit(0);
                break;
            default:
                printf("\n invalid number please enter a valid number ");
                break;
        }
    }
    return(0);
}


