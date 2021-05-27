import numpy as np
import pandas as pd
from apyori import apriori

data = pd.read_csv('store.csv', header=None)
records = []
for i in range(0,7501):
    records.append([str(data.values[i,j]) for j in range(0,20)])
# print(records)
rules = apriori(records, min_support=0.001, min_confidence=0.2, min_lift=3, min_length=2, max_length=2)
results = list(rules)
print(results)

for item in results:
    pair = item[0]
    items = [x for x in pair]
    print("Item: " + items[0] + "->" + items[1])
    print("Support" + str(item[1]))
    print("Confidence" + str(item[2][0][2]))
    print("Lift: "+ str(item[2][0][3]))
