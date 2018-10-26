WALL_COVERED_PER_GALLON = 115
HOURS_LABOR_PER_GALLON = 8
CHARGE_PER_HOUR_LABOR = 20

def main():
    wall_square_feet = get_wall_square_feet()
    cost_per_gallon_of_paint = get_cost_per_gallon_of_paint()
    number_of_gallons = calculate_number_of_gallons(wall_square_feet)
    hours_of_labor = calculate_hours_of_labor(number_of_gallons)
    cost_of_labor = calculate_cost_of_labor(hours_of_labor)
    cost_for_paint = calculate_cost_of_paint(cost_per_gallon_of_paint, \
                                             number_of_gallons)
    total_cost = calculate_total_cost(cost_of_labor, cost_for_paint)
    display_cost_for_service(number_of_gallons, hours_of_labor, cost_for_paint \
                             ,cost_of_labor, total_cost)

def get_wall_square_feet():
    return float(input("Enter the amount of square feet to paint: "))

def get_cost_per_gallon_of_paint():
    return float(input("Enter the cost per gallon of paint: "))

def calculate_number_of_gallons(wall_square_feet):
    return float(wall_square_feet) / WALL_COVERED_PER_GALLON

def calculate_hours_of_labor(number_of_gallons):
    return number_of_gallons * HOURS_LABOR_PER_GALLON

def calculate_cost_of_labor(hours_of_labor):
    return hours_of_labor * CHARGE_PER_HOUR_LABOR

def calculate_cost_of_paint(cost_per_gallon_of_paint, number_of_gallons):
    return cost_per_gallon_of_paint * number_of_gallons

def calculate_total_cost(cost_of_labor, cost_for_paint):
    return cost_of_labor + cost_for_paint

def display_cost_for_service(number_of_gallons, hours_of_labor, cost_for_paint \
                             , cost_of_labor, total_cost):
    print("Number of gallons: %.2f\n" \
          "Hours of labor: %.2f\n" \
          "Cost of paint: %.2f\n" \
          "Cost of labor: %.2f\n" \
          "Total Cost: %.2f\n" % (number_of_gallons, hours_of_labor, \
                                  cost_for_paint, cost_of_labor, total_cost))

main()
    
