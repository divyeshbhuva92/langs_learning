# class in python.................
# Inheritance : 

# base class : 
class gujarat :
    def speak(self):
        print('Your are in gujarat.')

# derived class
class surat(gujarat) :
    def say(self):
        print('Your are in surat.')

obj = surat()
obj.say()
obj.speak()