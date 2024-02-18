#include <stdio.h>
#include <string.h>

#define MAX_COWS 100
#define MAX_NAME_LEN 50

struct Cow {
  char name[MAX_NAME_LEN];
  int weight;
  int milk_production;
};

int num_cows = 0;
struct Cow cows[MAX_COWS];

void add_cow() {
  if (num_cows >= MAX_COWS) {
    printf("Error: Cannot add more cows, maximum limit reached.\n");
    return;
  }

  printf("Enter cow name: ");
  scanf("%s", cows[num_cows].name);
  printf("Enter cow weight (in kgs): ");
  scanf("%d", &cows[num_cows].weight);
  printf("Enter cow milk production (in litres): ");
  scanf("%d", &cows[num_cows].milk_production);

  num_cows++;
  printf("Cow added successfully.\n");
}

void list_cows() {
	int i;
  printf("List of cows:\n");
  for (i = 0; i < num_cows; i++) {
    printf("%d. Name: %s\n  weight: %d kg\n   milk production: %d liters\n",i + 1, cows[i].name, cows[i].weight, cows[i].milk_production);
  }
}

void main() {
  int choice;
 
  
  while (1) {
    printf("\nDairy Management System\n");
    printf("1. Add Cow\n");
    printf("2. List Cows\n");
    printf("3. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
      case 1:
        add_cow();
        break;
      case 2:
        list_cows();
        break;
      case 3:
       printf("Exiting the program...\n");
        exit(0);
        break;
      default:
        printf("Error: Invalid choice.\n");
        break;
    }
  }
}
