int main() {
    int choice;
    while(1) {
        printf("\n=============================\n");
        printf(" Smart Gym - Workout Planner\n");
        printf("=============================\n");
        printf("1. Add Member\n");
        printf("2. View Members\n");
        printf("3. Add Workout Log\n");
        printf("4. View Member Progress\n");
        printf("5. Save & Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        while(getchar() != '\n'); // Clear entire buffer

        switch(choice) {
            case 1: addMember(); break;
            case 2: viewMembers(); break;
            case 3: addWorkout(); break;
            case 4: viewProgress(); break;
            case 5: printf("Data saved. Exiting...\n"); exit(0);
            default: printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}