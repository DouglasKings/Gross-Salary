# Gross Salary
Write a program that takes user input your gross salary and your total saving and uses another function named taxcalculator() to calculate your tax. The taxcalculator() function takes as parameters the gross salary as well as the total saving amount.
The tax is calculated as follows:
(a). The savings is deducted from the gross income to calculate the taxable income. Maximum deduction of savings can be Rs. 100000, even though the amount can be more than this.
(b). For up to 100000 as taxable income the tax is 0 (slab o); beyond 100000 to 200000 tax is 10% of the difference above 100000 (slab 1); beyond 200000 up to 500000 the net tax is the tax calculated from slab 0 and slab 1 and then 20% of the taxable income exceeding 200000 (slab 2); if its more than 500000, then the tax is tax from slab 0, slab 1, slab 2 and 30% of the amount exceeding 500000.
