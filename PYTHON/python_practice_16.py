TEN_TO_NINETEEN = .2
TWENTY_TO_FORTY_NINE = .3
FIFTY_TO_NINETY_NINE = .4
ONE_HUNDRED_OR_MORE = .5
PACKAGE_PRICE = 99.0

def main():
    packages_purchased = get_user_packages()
    discount_applicable = determine_discount(packages_purchased)
    total_without_discount = calculate_total_without_discount(packages_purchased)
    total_with_discount = calculate_discount_price(total_without_discount, \
                                                   discount_applicable)
    if(discount_applicable != 0):
        print("Your total with a %.1f percent discount is $%.2f." % \
              ((discount_applicable * 100), total_with_discount))
    else:
        print("Your total is $%.2f." % total_without_discount)

def get_user_packages():
    return int(input("Enter the amount of packages purchased: "))

def determine_discount(packages_purchased):
    if(packages_purchased >= 100):
        return ONE_HUNDRED_OR_MORE
    elif(packages_purchased >=50):
        return FIFTY_TO_NINETY_NINE
    elif(packages_purchased >= 29):
        return TWENTY_TO_FORTY_NINE
    elif(packages_purchased >=10):
        return TEN_TO_NINETEEN
    else:
        return 0

def calculate_total_without_discount(packages_purchased):
    return packages_purchased * PACKAGE_PRICE

def calculate_discount_price(total_without_discount, discount_applicable):
    return total_without_discount - (total_without_discount * \
                                     discount_applicable)

main()
