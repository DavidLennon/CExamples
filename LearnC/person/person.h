
struct Person{
   char *name;
   int age;
   int height;
   int weight;
   int numFriends;
   char **friends;
};

struct Person *Person_create(char *name,int age,int height, int weight, char *friends[], int numFriends)
{
   struct Person *who = malloc(sizeof(struct Person));
   assert(who != NULL);
   
   who->name = strdup(name);
   who->age = age;
   who->height = height;
   who->weight = weight;
   who->numFriends = numFriends;
   who->friends = friends;


   return who;
}

void Person_destroy(struct Person *who)
{
   assert(who != NULL);

   free(who->name);
   free(who);
}

void Person_print(struct Person *who)
{
   printf("Name: %s\n", who->name);
   printf("\tAge: %d\n", who->age);
   printf("\tHeight: %d\n", who->height);
   printf("\tWeight: %d\n", who->weight);
   printf("\tNumber of Friends: %d\n",who->numFriends);

   int i;
   for(i=0;i<who->numFriends;i++)
   {
         printf("Friend: %s\n",who->friends[i]);
   }
   printf("\n");
}
