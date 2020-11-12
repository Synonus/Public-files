import math
run = True
while run == True:

    radius = float(input("Enter radius here: "))

    RADIUS = radius ** 2

    def Area(x, y):
        return x * y

    print(("Area ="), Area(RADIUS, math.pi))