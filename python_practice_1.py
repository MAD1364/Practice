height = input('Enter your height: ')
print('You entered the value %s ' % height)

print('\n')
user_favorite_color = input('What is your favorite color: ')
print('Your favorite color is %s ' % user_favorite_color)

a = 7
b = a + 2
print(b)
a = b * 4
print(a)
b = a / 3.14
print(b)
a = b - 8
print(a)

print('\n')
total = 10 + 14
print("%d" % total)

down_payment = 2
due = total - down_payment
print('\n')
print('Total Due: %d' % due)

print('\n')
subtotal = total
total = total + (0.15 * subtotal)
print('Total: $%.2f' % total)

print('\n')
sales = 777.78
print("Total Sales: $%9.2f" % sales)

print('\n')
name = 'Dick Nutz'
address = '123 Dick Nutz Lane'
city = 'DICKER NUTZ'
state = 'Dicker nuterz'
zip_code = '12345'
telephone_number = '123-234-1234'
college_major = 'dick nutz'

print('Name: %15s\n' \
      'Address: %15s\n' \
      'City: %15s\n' \
      'State: %15s\n' \
      'Zip Code: %15s\n' \
      'Telephone-Number: %15s\n' \
      'College Major: %15s\n' % (name, address, city, state, zip_code, \
                               telephone_number, college_major))

projected_sales = float(input('What is the total projected sales figure: '))
profit_rate = 0.23
profit = projected_sales * profit_rate
print('Projected profit given a sales amount of %.2f is %.2f.' % \
      (projected_sales, profit))

print('\n')
feet_per_acre = 43560.0
feet = float(input('How many square feet are in your tract of land: '))
acres = feet / feet_per_acre
acre = 3.4 / 3.8
print('Your tract of land constitutes %.4f acre(s).' % acres)
print('Acre: %.2f' % acre)

print('\n')
item_one = float(input('Price of Item One: '))
item_two = float(input('Price of Item Two: '))
item_three = float(input('Price of Item Three: '))
item_four = float(input('Price of Item Four: '))
item_five = float(input('Price of Item Five: '))
sales_tax_rate = 0.06
subtotal = item_one + item_two + item_three + item_four + item_five
total = subtotal + (subtotal * sales_tax_rate)
print('The total sale is $%.2f.' % total)

print('\n')
time_one = 5
time_two = 8
time_three = 12
speed = 60
distance_one = speed * time_one
distance_two = speed * time_two
distance_three = speed * time_three
print('Distance traveled given a speed (rate) of %d mph\n' \
      '5 hours: %d\n' \
      '8 hours: %d\n' \
      '12 hours: %d\n' % (speed, distance_one, distance_two, distance_three))

