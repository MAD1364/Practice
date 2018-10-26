BMI_CONSTANT = 703

def main():
    weight = get_weight()
    height = get_height()
    body_mass_index = calculate_body_mass_index(weight, height)
    display_body_mass_index(body_mass_index)

def get_weight():
    weight = float(input("Enter your weight: "))
    return weight

def get_height():
    height = float(input("Enter your height: "))
    return height

def calculate_body_mass_index(weight, height):
    return weight * BMI_CONSTANT / (height * height)

def display_body_mass_index(body_mass_index):
    print("Body mass index (BMI): %.2f" % body_mass_index)

main()
