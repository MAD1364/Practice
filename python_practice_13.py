STATE_SALES_TAX_RATE = 0.04
COUNTY_SALES_TAX_RATE = 0.02

def main():
    total_sales_for_the_month = get_total_sales_for_the_month()
    state_tax_on_sales = calculate_state_tax_on_sales(total_sales_for_the_month)
    county_tax_on_sales = calculate_county_tax_on_sales(total_sales_for_the_month)
    total_sales_tax = calculate_total_sales_tax(state_tax_on_sales, county_tax_on_sales)
    display_state_tax_county_tax_total_tax(state_tax_on_sales, county_tax_on_sales, total_sales_tax)

def get_total_sales_for_the_month():
    return float(input("Enter the total sales for the month: "))

def calculate_state_tax_on_sales(total_sales_for_the_month):
    return total_sales_for_the_month * STATE_SALES_TAX_RATE

def calculate_county_tax_on_sales(total_sales_for_the_month):
    return total_sales_for_the_month * COUNTY_SALES_TAX_RATE

def calculate_total_sales_tax(state_tax_on_sales, county_tax_on_sales):
    return state_tax_on_sales + county_tax_on_sales

def display_state_tax_county_tax_total_tax(state_tax_on_sales, county_tax_on_sales, total_sales_tax):
    print("State Tax: $%.2f\n" \
          "County Tax: $%.2f\n" \
          "Total Tax: $%.2f" % (state_tax_on_sales, county_tax_on_sales, total_sales_tax))

main()
