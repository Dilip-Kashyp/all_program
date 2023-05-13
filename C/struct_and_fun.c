#include <stdio.h>
#include <stdlib.h>
struct student {
   char name[10];
   int age;
};
// function declartions
void display(struct student s);

int main() {
   struct student s1;
    printf("Enter name: ");
    scanf("%s",s1.name);

   printf("Enter age: ");
   scanf("%d", &s1.age);

    display(s1); // passing struct as an argument

   return 0;
}

void display(struct student s) {
   printf("\nName: %s", s.name);
   printf("\nAge: %d", s.age);
}