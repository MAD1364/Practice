INSURANCE_RATE = 0.8

def main():
    replacement_cost = float(input("Enter the amount it would cost to replace" \
                                   "your home: "))
    amount_to_insure = calculate_insurance_amount(replacement_cost)
    print("According to suggested rates by which to insure one's building, " \
          "it is advised to insure the one for which a replacement cost has " \
          "been provided for $%.2f" % amount_to_insure)

def calculate_insurance_amount(replacement_cost):
    return replacement_cost * INSURANCE_RATE

main()
