def main():
    number_of_books_purchased_this_month = get_user_input()
    user_points(number_of_books_purchased_this_month)

def get_user_input():
    return int(input("Enter the number books you have purchased this month: "))

def user_points(number_of_books_purchased_this_month):
    if(number_of_books_purchased_this_month >=4):
        print("You have earned 60 points for the month.")
    elif(number_of_books_purchased_this_month == 3):
        print("You have earned 30 points for this month.")
    elif(number_of_books_purchased_this_month == 2):
        print("You have earned 15 points for this month.")
    elif(number_of_books_purchased_this_month == 1):
        print("You have earned 5 points for this month.")
    else:
        print("You have earned 0 points for this month.")

main()
