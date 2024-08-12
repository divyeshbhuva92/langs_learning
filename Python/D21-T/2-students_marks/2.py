# Write a python program to read marks of students from 
# “student_marks.csv”. Find average, maximum, and minimum 
# marks from data. (File contains 10 records).

import pandas as pd

df = pd.read_csv('D:/HK_sir/Python/D21-T/2-students_marks/students_marks.csv')

min_marks = df['Mark1'].min()
max_marks = df['Mark1'].max()
mean_marks = df['Mark1'].mean()


print('Min marks of class : ', min_marks)
print('Max marks of class : ', max_marks)
print('Mean marks of class : ', mean_marks)