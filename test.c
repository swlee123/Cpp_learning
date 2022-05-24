#include<stdio.h>

int main()
{


}
struct Node{
  int power;
  double value;
  struct Node*next;

};

struct Node*addPpoly(struct Node*h1,struct Node*h2)
{
  h1->next=h2;
  return h1;

}

void outputpoly(struct Node*head)
{
  struct Node*ptr=head;
  for(;ptr->next!=NULL;ptr=ptr->next)
  {
    printf("%lf^%d+",ptr->value,ptr->power);

  }
}