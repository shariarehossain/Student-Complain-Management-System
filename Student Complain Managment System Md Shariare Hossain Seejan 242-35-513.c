#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define row 3
struct complain{
char id[20];
char complain_issue[120];
struct complain *next;
}s1,s2,s3;


void cmpln_stdnt_data();
void cmpln1();
void cmpln2();
void cmpln3();
void admin();
void history();
char a[100][21];
int n=0;
void push(char x[20]);
void show();
void pop();
char q[100][21];
int front=0,rear=0;


void enqueue(char x[20]);
void display();
void dequeue();


int main(){
int select;
printf("\nWelcome\n");
printf("Student Complain Management System\n");
printf("Avaiable option:");
printf("\n1.Before write your complains Fill UP The Info Form\n ");
printf("\n2.Complain(For Student1)\n");
printf("\n3.Before write your complains Fill UP The Info Form\n ");
printf("\n4.Complain(For Student2)\n");
printf("\n5.Before write your complains Fill UP The Info Form\n ");
printf("\n6.Complain(For Student3)\n");
printf("\n7.Admin\n");
printf("\n8.Show List of Id Who complained For track\n");
printf("\n9.Clear The Track\n");
printf("\n10.Exit");
printf("\nMust be select  1,3,5 at first then other\n");

while(1){
printf("\nSelect Option:");

scanf("%d",&select);
if(select==1)cmpln_stdnt_data();
else if(select == 2)cmpln1();
else if(select==3)cmpln_stdnt_data();
else if(select == 4)cmpln2();
else if(select==5)cmpln_stdnt_data();
else if(select == 6)cmpln3();
else if(select==7)admin();
else if(select==8)display();
else if(select==9){dequeue();dequeue();dequeue();}
else if(select==10){break;}
}
return 0;
}

void cmpln_stdnt_data(){
char id[20];
char contact[12];

printf("\nWrite your Student Id\n");
scanf("%s", id); 
enqueue(id);

printf("ID:");

printf("%s",id);



printf("\nWrite your Contact Number\n");
scanf("%s", contact);

printf("\nContact:\n");

printf("%s",contact);








}

void cmpln1(){

printf("\nWrite your Student Id\n");

for(int i=0;i<20;i++){
scanf("%c",&s1.id[i]);}
getchar();
printf("ID:");
for(int i=0;i<20;i++){
printf("%c",s1.id[i]);}

printf("\nWrite your Complain(1st Insert only one space then start your writting) :\n");
getchar();
fgets(s1.complain_issue,sizeof(s1.complain_issue),stdin);
printf("Complain :");
for(int i=0;i<120;i++){
printf("%c",s1.complain_issue[i]);

}







}

void cmpln2(){

printf("\nWrite your Student Id\n");

for(int i=0;i<20;i++){
scanf("%c",&s2.id[i]);}
getchar();
printf("ID:");
for(int i=0;i<20;i++){
printf("%c",s2.id[i]);}

printf("\nWrite your Complain(1st Insert only one space then start your writting) :\n");
getchar();
fgets(s2.complain_issue, sizeof(s2.complain_issue), stdin);
printf("Complain :");
for(int i=0;i<120;i++){
printf("%c",s2.complain_issue[i]);
}




}

void cmpln3(){

printf("\nWrite your Student Id\n");

for(int i=0;i<20;i++){
scanf("%c",&s3.id[i]);}
getchar();
printf("ID:");
for(int i=0;i<20;i++){
printf("%c",s3.id[i]);}

printf("\nWrite your Complain(1st Insert only one space then start your writting) :\n");
getchar();
fgets(s3.complain_issue, sizeof(s3.complain_issue), stdin);
printf("Complain :");
for(int i=0;i<120;i++){
printf("%c",s3.complain_issue[i]);
}




}

void history(){
s1.next=&s2;
s2.next=&s3;
s3.next=NULL;
for(struct complain *p=&s1;p!=NULL;p=p->next){
if(strlen(p->id)==0){
printf("Not found\n");}
else{printf("ID(Also Show complain with id Because When admin make note of complain submit student id by showing History ,He will not mixed one student complain with other any student):%s\n",p->id);
printf("Complain:%s\n",p->complain_issue);
printf("\n");}}}

void push(char x[20]){

if(n<100){
strcpy(a[n++],x);
show();
}
else{printf("\nTry Again\n");}
}





void show(){
  for(int i=n-1;i>=0;i--)
  printf("\nID%s\n",a[i]);
  
  }




void pop(){
if(n>0){
n--;}
else{printf("\nTry Again\n");}





}






void admin(){
int option;
char x[20];

printf("Welcome\n");
printf("Admin");
printf("Avaiable Option\n");
printf("1.Complains History");
printf("Solve Issues Depand on Student Complains\nNB:Admin 1st Show All Student complains Then Note Student Id \n");
printf("2.Student1 ID\n");
printf("3.Student2 ID\n");
printf("4.Student3 ID\n");
printf("5.Noted All  ID List And After solved Is there any Remain ID list\n");
printf("Solve all noted id student complain issue. Now Remove their id from Note\n");
printf("6.Remove Student1\n");
printf("7.Remove Student2\n");
printf("8.Remove Student3\n");
printf("9.Exit\n");
while(1){
printf("Select an option:");
scanf("%d",&option);
if(option==1){history();}
else if(option==2){printf("Write id:");scanf("%20s",x);push(x);}
else if(option==3){printf("Write id:");scanf("%20s",x);push(x);}
else if(option==4){printf("Write id:");scanf("%20s",x);push(x);}
else if(option==5){show();}
else if(option==6){pop();}
else if(option==7){pop();}
else if(option==8){pop();}
else if(option==9){break;}
else{printf("Try Again\n");}









}



}



void enqueue(char x[20]){
for(int i=front;i<rear;i++){
if (strcmp(q[i],x)==0){
printf("Id %sAlready exit",x);
return;
}}
if(rear<100){
strcpy(q[rear++],x);

}
else{printf("\nTry Again\n");}
}





void display(){
if(front==rear){
printf("Try Again\n");}
  for(int i=front;i<rear;i++)
  printf("\n%s\n",q[i]);
  
  }




void dequeue(){
if(front<rear){
front++;}
else{printf("\nTry Again\n");}





}