TWO_OR_LESS = 1.1
TWO_TO_SIX = 2.2
SIX_TO_TEN = 3.7
OVER_TEN = 3.8

def main():
    package_weight = get_package_weight()
    determine_shipping_charges(package_weight)

def get_package_weight():
    return float(input("Enter the weight of your package: "))

def determine_shipping_charges(package_weight):
    if(package_weight <= 2):
        print("Shipping charges: $1.10")
    elif(package_weight <= 6):
        print("Shipping charges: $2.20")
    elif(package_weight <= 10):
        print("Shipping charges: $3.70")
    else:
        print("Shipping charges: $3.80")

main()
