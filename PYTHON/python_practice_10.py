CALORIES_PER_GRAM_FAT = 9
CALORIES_PER_GRAM_CARBOHYDRATES = 4

def main():
    fat = get_grams_of_fat()
    carbohydrates = get_grams_of_carbohydrates()
    display_calories(fat, carbohydrates)

def get_grams_of_fat():
    return CALORIES_PER_GRAM_FAT * \
           float(input("Enter the amount of grams of fat consumed: "))

def get_grams_of_carbohydrates():
    return CALORIES_PER_GRAM_CARBOHYDRATES * \
           float(input("Enter the amount of grams of carbohydrates consumed: "))

def display_calories(fat, carbohydrates):
    print("Calories from fat: %.2f\nCalories from carbohydrates: %.2f" \
          % (fat, carbohydrates))

main()
