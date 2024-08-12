# Write a program to calculate simple & compound interest.
# SI = (P*R*T) / 100
# CI =  P * ( ((1 + (R / 100*N)) raised to N*T) - 1)
# P = principal amount, R = rate of interest, T = total duration,
# N = number of times interest got compound annually


P = int(input('Enter principal amount : '))
R = int(input('Enter interest rate : '))
T = int(input('Enter duration in year : '))
N = int(input('Enter value for compound interset : '))

SI = (P*R*T) / 100.0 

CI = P * (((1 + (R / (100*N))) ** (N*T)) - 1) / 1.0

print(SI, CI)
