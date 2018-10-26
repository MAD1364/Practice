MINUTE = 60
HOUR = 3600
DAY = 86400

def main():
    number_of_seconds = get_number_of_seconds()
    determine_time_equivalent(number_of_seconds)

def get_number_of_seconds():
    return float(input("Enter an amount of seconds: "))

def determine_time_equivalent(number_of_seconds):
    if(number_of_seconds >= DAY):
        print("DAYS: %.2f" % (number_of_seconds / DAY))
    elif(number_of_seconds >= HOUR):
        print("HOURS: %.2f" % (number_of_seconds / HOUR))
    elif(number_of_seconds >= MINUTE):
        print("MINUTES: %.2f" % (number_of_seconds / MINUTE))
    else:
        print("Too few seconds to convert to at least one minute, hour or day.")

main()
