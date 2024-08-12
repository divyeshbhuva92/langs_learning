# pandas functions - min, max, mean

import pandas as pd

df = pd.read_csv('D:/HK_sir/Python/D21-T/1-min_max_mean_pandas/students.csv')

min_subj1 = df['Mark1'].min()
max_subj1 = df['Mark1'].max()
mean_subj1 = df['Mark1'].mean()

min_subj2 = df['Mark2'].min()
max_subj2 = df['Mark2'].max()
mean_subj2 = df['Mark2'].mean()

print('Min1: ', min_subj1, 'Max1: ', max_subj1, 'Mean1: ', mean_subj1)
print('Min2: ', min_subj2, 'Max2: ', max_subj2, 'Mean2: ', mean_subj2)