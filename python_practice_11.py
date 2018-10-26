CLASS_A_SEATS = 15
CLASS_B_SEATS = 12
CLASS_C_SEATS = 9

def main():
    class_a_seats = get_class_a_seats()
    class_b_seats = get_class_b_seats()
    class_c_seats = get_class_c_seats()
    revenue = calculate_ticket_sale_total(class_a_seats, class_b_seats,
                                          class_c_seats)
    display_seat_ticket_sale_total(revenue)

def get_class_a_seats():
    return int(input("Enter the amount of tickets sold for Class A seats: "))

def get_class_b_seats():
    return int(input("Enter the amount of tickets sold for Class B seats: "))

def get_class_c_seats():
    return int(input("Enter the amount of tickets sold for Class C seats: "))

def calculate_ticket_sale_total(class_a_seats, class_b_seats, class_c_seats):
    return class_a_seats * CLASS_A_SEATS + class_b_seats * CLASS_B_SEATS + \
           class_c_seats * CLASS_C_SEATS

def display_seat_ticket_sale_total(revenue):
    print("Total seat ticket sales: %d" % revenue)

main()
