def mostFrequent():
    # Given a list of items or an array, find the element that appears with the greatest frequency
    list = [1, 2, 3, 1, 3, 1, 3, 3, 3]

    # Create a dictionary (an ADT or data structure whose elements are key-value pairs
    # assign an empty dictionary to the variable and use the member function fromkeys
    # to create a dictionary consisting of key-value pairs whose keys are the distinct members of the
    # list the elements are derived from. The second argument is a value that every key maps to.
    newDict = {}.fromkeys(list, 0)
    
    # Print to show that the dictionary consists of key-value pairs whose key components are the distinct
    # elements of the list they are derived from and the corresponding mapped values are 0
    print (newDict)

    # Iterate through the list to count the amount of times each distinct elements appears
    # Recall that the elements of a dictionary data structure can be achieved through the keys of 
    # the elements of the dictionary
    for number in list:
        newDict[number] += 1

    # Display the distribution of the elements in the given list
    print (newDict)

    # Create variables that will hold the key corresponding to the element that appears with most
    # frequency in the list given (or array) and can be used to compare the distributions of each 
    # element
    mostFreq = 0
    count = 0
  
    # Iterate through the elements of the dictionary in order to determine the element who value 
    # component is largest (representing the element in the given array that occurs most)
    for key, value in newDict.items():
        if (count < value):
            count = value
            mostFreq = key

    # Print the key which represents the element that occurs most frequently in the given array or list
    print ("Most Frequent: " + str(mostFreq))

mostFrequent()