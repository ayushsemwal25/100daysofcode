#include <stdio.h>

int main() {
    double cp, sp;
    printf("Enter Cost Price and Selling Price: ");
    scanf("%lf %lf", &cp, &sp);

    if (sp > cp) {
        double profit_pct = ((sp - cp) / cp) * 100.0;
        printf("Profit: %.2f%%\n", profit_pct);
    } else if (cp > sp) {
        double loss_pct = ((cp - sp) / cp) * 100.0;
        printf("Loss: %.2f%%\n", loss_pct);
    } else {
        printf("No Profit, No Loss.\n");
    }

    return 0;
}