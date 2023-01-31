#Creating a set
print("Creating a set:")
emptyset = set()
print("Empty set:", emptyset)
myset = {1, 2, 3}
print("Myset:", myset)
nestedset = {(1, 2), 3, 4}
print("Nestedset:", nestedset)
set1 = set([1, 2, 1])
print("Removing duplicacy using set():", set1, end="")
inputset = set(map(int, input("Enter elements: ").split()))
print("inputset:", inputset)

#Frozen sets
myfrozenset = frozenset([1, 2, 3, 4, 5])
print("\nFrozen set:", myfrozenset)

#Using functions
emptyset.add('a')
print("\nAdding to emptyset:",emptyset)
print("Union of", myset,"and", nestedset,":")
print(myset.union(nestedset))
print("Intersection of", myset,"and", nestedset,":")
print(myset.intersection(nestedset))
print("Difference of", myset,"and", nestedset,":")
print(myset.difference(nestedset))
emptyset.clear()
print("Clearing emptyset:", emptyset)

#Set operators
print("\nMembership operator to check if (1, 2) is in nestedset:", (1, 2) in nestedset)
print("Equivalency on myset and nested set:", myset == nestedset)
print("Subset operator to check if {1} is a subset of nestedset:", {1} <= nestedset)
print("proper subset operator to check if {1} is a proper subset of nestedset:", {1} < nestedset)
print("Superset operator to check if nestedset is a superset of {1}:", nestedset >= {1})
print("proper superset operator to check if nestedset is a proper superset of {1}:", nestedset > {1})
print("Elements in either myset or nestedset but not in both:", myset ^ nestedset)
