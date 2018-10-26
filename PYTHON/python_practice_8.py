ASSESSMENT_VALUE_PERCENTAGE = 0.6
PROPERTY_TAX = .0064

def main():
    property_value = get_property_value()
    assessment_value = calculate_assessment_value(property_value)
    property_tax = calculate_property_value(assessment_value)
    display_assessment_and_property_tax_values(assessment_value, property_tax)

def get_property_value():
    value = float(input("Enter the property's value: "))
    return value

def calculate_assessment_value(property_value):
    assessment_value = property_value * ASSESSMENT_VALUE_PERCENTAGE
    return assessment_value

def calculate_property_value(assessment_value):
    property_tax = assessment_value * PROPERTY_TAX
    return property_tax

def display_assessment_and_property_tax_values(assessment_value, property_tax):
    print("Assessment value: %.2f\nProperty tax: %.2f" % \
          (assessment_value, property_tax))

main()
