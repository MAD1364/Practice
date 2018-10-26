def main():
    print("Enter the following expenses per month to calculate monthly and " \
          "annual totals.")
    loan_payment = float(input("Loan Payment: "))
    insurance = float(input("Insurance: "))
    gas = float(input("Gas: "))
    tires = float(input("Tires: "))
    maintenance = float(input("Maintenance: "))
    monthly = monthly_cost(loan_payment, insurance, gas, tires, maintenance)
    yearly = yearly_cost(monthly)

    print("Monthly Cost: $%7.2f\nYearly Cost: $%7.2f" % (monthly, yearly))

def monthly_cost(loan_payment, insurance, gas, tires, maintenance):
    return loan_payment + insurance + gas + tires + maintenance

def yearly_cost(monthly):
    return monthly * 12

main()
