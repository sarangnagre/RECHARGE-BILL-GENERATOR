# RECHARGE-BILL-GENERATOR
It will take customers name,address,date of plan.
     #include <stdio.h>

int main() {
    char subscription_type;
    char plan_choice;
    char name[1000];
    char address[100];
    char date[50];

    printf("      Welcome to the Recharge Bill Generator\n\n");
    printf("what is your Name:- ");
    scanf("%s", &name);
    printf("enter your Address:- ");
    scanf("%s", &address);
    printf("Enter todays Date:- ");
    scanf("%s", &date);
    printf("Choose your subscription type:\n");
    printf("A. Monthly Subscription\n");
    printf("B. Daily Data\n");
    printf("Enter A or B: ");
    scanf(" %c", &subscription_type);

    if (subscription_type == 'A') {
        printf("\nMonthly Plans:\n");
        printf("P. 1GB/day(for 28 days) - Rs219\n");
        printf("Q. 2GB/day (for 1 month) - Rs299\n");
        printf("R. 2.5GB/day (for 30 days) - Rs319\n");
        printf("Enter your plan choice (P/Q/R): ");
        scanf(" %c", &plan_choice);

        if (plan_choice == 'P') {
            printf("\nYou selected 1GB/day.\nTotal cost: Rs219\n");
        } else if (plan_choice == 'Q') {
            printf("\nYou selected 2GB/day.\nTotal cost: Rs299\n");
        } else if (plan_choice == 'R') {
            printf("\nYou selected 2.5GB/day.\nTotal cost: Rs319\n");
        } else {
            printf("Invalid plan choice.\n");
        }

    } else if (subscription_type == 'B') {
        printf("\nDaily Plans(for 24hrs only):\n");
        printf("P. 1.5GB - Rs19\n");
        printf("Q. 2.5GB - Rs29\n");
        printf("R. 5GB - Rs44\n");
        printf("L. Unlimited - Rs101\n");
        printf("Enter your plan choice (P/Q/R/L): ");
        scanf(" %c", &plan_choice);

        if (plan_choice == 'P') {
            printf("\nYou selected 1.5GB.\nTotal cost: Rs19\n");
        } else if (plan_choice == 'Q') {
            printf("\nYou selected 2.5GB.\nTotal cost: Rs29\n");
        } else if (plan_choice == 'R') {
            printf("\nYou selected 5GB.\nTotal cost: Rs44\n");
        } else if (plan_choice == 'L') {
            printf("\nYou selected Unlimited data.\nTotal cost: Rs101\n");
        } else {
            printf("Invalid plan choice.\n");
        }

    } else {
        printf("Invalid subscription type.\n");
    }

    return 0;
}
