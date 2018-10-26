KILOMETER_TO_MILES_CONVERSION_FACTOR = 0.6214

def main():
    kilometers = int(input('Enter an amount of kilometers to convert to miles: '))
    convert_to_miles(kilometers)

def convert_to_miles(number_of_kilometers):
    miles = number_of_kilometers * KILOMETER_TO_MILES_CONVERSION_FACTOR
    print("%d kilometers is equivalent to %.2f miles" % (number_of_kilometers, miles))

main()
