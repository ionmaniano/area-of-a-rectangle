// C structures
#include <stdio.h>
#include <string.h>

    struct student{
   char Name [30];
   char reg_no[25];
   char email[30];
   float marks;
   int phone_no,ID;
    }student1,student2;
    
  int main() {  
   //struct student student1,student2;
   //initializing variable(.operator)
   strcpy (student1.Name,"");
   strcpy (student1.reg_no,"");
   strcpy (student1.email,"");
   student1.phone_no ;
   student1.marks;
   
   printf("enter the name:");
   scanf("%s",&student1.Name);

   printf("Enter registration number:");
   scanf("%s",&student1.reg_no);

   printf("Enter email:");
   scanf("%s",&student1.email);
   
   printf("Enter ID:");
   scanf("%d",&student1.ID);

   printf("Enter phone number:");
   scanf("%d",&student1.phone_no);

   printf("Enter marks:");
   scanf("%f",&student1.marks);
   
   printf("Name:%s\n",student1.Name);
   printf("reg_no:%s\n",student1.reg_no);
   printf("email:%s\n",student1.email);
   printf("ID:%d\n",student1.ID);
   printf("phone-no:%d\n",student1.phone_no);
   printf("Marks:%.2f\n",student1.marks);
   
   return 0;
  
}
