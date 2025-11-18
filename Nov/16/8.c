// Take name,city and age as input and print (my name is { name} live in {city} am {age} years old.)

#include<stdio.h>

int main(){
  char name[30],city[30];
  int age;

  printf("plese enter your name: ");
  scanf("%s",name);

  printf("Plese enter your city: ");
  scanf("%s",city);

  printf("plese enter your age: ");
  scanf("%d",&age);

  printf("my name is %s,live in %s, age %d",name,city,&age);
return 0;
}