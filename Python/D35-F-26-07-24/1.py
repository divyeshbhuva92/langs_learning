class Vehicle:
    def __init__(self, name, mileage, capacity):
        self.name = name
        self.mileage = mileage
        self.capacity = capacity
    def display(self):
        print(self.name, self.mileage, self.capacity)


class Bus(Vehicle):
    pass

School_bus = Bus("School Volvo", 12, 50)
School_bus.display()

