import pandas as pd
import matplotlib.pyplot as plt
dataset = pd.read_csv('diabetes.csv', header=None)
print(dataset)

dataset.columns = [
    "NumTimesPrg", "PIGInConc", "BloodP",
    "SkinThick", "TwoHourSeries", "BMI",
    "DiPedFunc", "Age", "HasDiabetes"
]
median = dataset['BMI'].median()
dataset['BMI'] = dataset['BMI'].replace(to_replace=0, value=median)

median = dataset['PIGInConc'].median()
dataset['PIGInConc'] = dataset['PIGInConc'].replace(to_replace=0, value=median)

median = dataset['BloodP'].median()
dataset['BloodP'] = dataset['BloodP'].replace(to_replace=0, value=median)

median = dataset['SkinThick'].median()
dataset['SkinThick'] = dataset['SkinThick'].replace(to_replace=0, value=median)

train_set, test_set = train_test_split(dataset, test_size=0.2, random_state=42)
train_set_labels = train_set["HasDiabetes"].copy()
train_set = train_set.drop("HasDiabetes", axis=1)

test_set_labels = test_set["HasDiabetes"].copy()
test_set = test_set.drop("HasDiabetes", axis=1)




dataset.hist(bins=50, figsize=(20,15))
plt.show()
