#include <stdio.h>

// Function prototype declaration
double taxCalculator(double grossSalary, double totalSavingsAmount);

int main(){
    double grossSalary, totalSavingsAmount, taxableIncome, netTax;

    printf("Enter the gross salary: ");
    scanf("%lf", &grossSalary);
    printf("Enter the total savings amount: ");
    scanf("%lf", &totalSavingsAmount);

    netTax = taxCalculator(grossSalary, totalSavingsAmount);

    printf("The gross salary is: %.2lf\n", grossSalary);
    printf("The total savings amount is: %.2lf\n", totalSavingsAmount);
    printf("The net tax is: %.2lf\n", netTax);

    return 0;
}

double taxCalculator(double grossSalary, double totalSavingsAmount){
    double taxableIncome, netTax;
    taxableIncome = grossSalary - (totalSavingsAmount > 100000? totalSavingsAmount : 100000); // Deduct maximum savings from gross salary

    if(taxableIncome <= 100000){
        netTax = 0; // No tax for slab 0
    } else if(taxableIncome > 100000 && taxableIncome <= 200000){
        netTax = (taxableIncome - 100000) * 0.10; // Tax for slab 1
    } else if(taxableIncome > 200000 && taxableIncome <= 500000){
        netTax = ((taxableIncome - 100000) * 0.10 + (taxableIncome - 200000) * 0.20); // Tax for slab 2
    } else if(taxableIncome > 500000){
        netTax = (((taxableIncome - 100000) * 0.10 + (taxableIncome - 200000) * 0.20) + (taxableIncome - 500000) * 0.30); // Additional tax for amounts over 500000
    }

    return netTax;
}

/*// Function to calculate tax
double taxCalculator(double grossSalary, double totalSavings) {
    double taxableIncome;
    double tax = 0.0;

    // Deduct maximum savings from gross salary
    taxableIncome = grossSalary - ((totalSavings > 100000)? 100000 : totalSavings);

    // Calculate tax based on slabs
    if (taxableIncome <= 100000) {
        // Slab 0: No tax
        printf("No tax.\n");
    } else if (taxableIncome <= 200000) {
        // Slab 1: Tax is 10% of the difference above 100000
        tax += 0.10 * (taxableIncome - 100000);
        printf("The tax is %.2lf\n", tax);
    } else if (taxableIncome <= 500000) {
        // Slab 2: Add 20% of the taxable income exceeding 200000
        tax += 0.10 * (taxableIncome - 100000); // First part of slab 2
        tax += 0.20 * (taxableIncome - 200000); // Second part of slab 2
        printf("The tax is %.2lf\n", tax);
    } else {
        // Additional tax for amounts over 500000
        tax += 0.10 * (taxableIncome - 100000); // First part of slab 3
        tax += 0.20 * (taxableIncome - 200000); // Second part of slab 3
        tax += 0.30 * (taxableIncome - 500000); // Third part of slab 3
        printf("The tax is %.2lf\n", tax);
    }

    return tax;
}*/