BMI_CONSTANT = 703

def main():
    weight = get_weight()
    height = get_height()
    body_mass_index = calculate_body_mass_index(weight, height)
    health_suggestion(body_mass_index)

def get_weight():
    return float(input("Enter your weight (lbs.): "))

def get_height():
    return float(input("Enter your height (in.): "))

def calculate_body_mass_index(weight, height):
    return weight * BMI_CONSTANT / (height * height)

def health_suggestion(body_mass_index):
    if(body_mass_index >= 18.5 and body_mass_index <= 25):
        print("You are at optimal health.")
    elif(body_mass_index < 18.5):
        print("You are underweight.")
    else:
        print("You are overweight.")

main()
