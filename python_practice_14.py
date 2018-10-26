ACCELERATION_DUE_TO_GRAVITY = 9.8

def main():
    mass = get_mass()
    weight = calculate_weight(mass)
    determine_weight_quality(weight)

def get_mass():
    return float(input("Enter the mass of an object: "))

def calculate_weight(mass):
    return mass * ACCELERATION_DUE_TO_GRAVITY

def determine_weight_quality(weight):
    if(weight > 1000):
        print("The object is too heavy.")
    elif(weight < 10):
        print("The object is too light.")
    else:
        print("The object is just right.")

main()
