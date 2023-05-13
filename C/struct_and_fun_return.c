#include <stdio.h>
#include <stdlib.h>
struct student
{
    char name[50];
    int age;
};

// function declartions
struct student get();

int main()
{
    struct student s;
    s = get(); // calling fun.

    printf("\nDisplaying information\n");
    printf("Name: %s\n", s.name);
    printf("Roll: %d", s.age);
    
    return 0;
}
struct student get() 
{
  struct student s1;

  printf("Enter name: ");
  scanf ("%s", s1.name);

  printf("Enter age: ");
  scanf("%d", &s1.age);
  
  return s1;
}	
