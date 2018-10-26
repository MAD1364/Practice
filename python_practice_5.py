COUNTY_RATE = 0.06
STATE_RATE = 0.02

def main():
    purchase = float(input("Enter the amount of the purchase: "))
    county_tax = county(purchase)
    state_tax = state(purchase)
    total = purchase + county_tax + state_tax
    print("The total price of the purchase is $%.2f." % total)

def county(purchase):
    return purchase * COUNTY_RATE

def state(purchase):
    return purchase * STATE_RATE

main()
