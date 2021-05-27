import numpy as np
import matplotlib.pyplot as plt
import pandas as pd
from sklearn.cluster import KMeans
from sklearn.decomposition import PCA

X = pd.read_csv('titanic.csv')
X = X.drop('Name', axis=1)
X = X.drop('PassengerId', axis=1)
X = X.drop('Ticket', axis=1)
X = X.drop('Cabin', axis=1)

for i in X.index:
    X.at[i, 'Sex'] = 1 if X.at[i, 'Sex'] == 'male' else 0
    X.fillna(0, inplace=True)
    if X.at[i, 'Embarked'] == 'S':
        X.at[i, 'Embarked'] = 1
    elif X.at[i, 'Embarked'] == 'C':
        X.at[i, 'Embarked'] = 2
    elif X.at[i, 'Embarked'] == 'Q':
        X.at[i, 'Embarked'] = 3

reduction_pca = PCA(n_components=2)
data = reduction_pca.fit_transform(X.values)

kmeans = KMeans(n_clusters=2)
y_kmeans = kmeans.fit_predict(data)
count = 0
surviveArray = []
for i in X.index:
    if y_kmeans[i] == 1:
        surviveArray.append('Yes')
        count = count + 1
    else:
        surviveArray.append('No')
print(count)
print('Survived')
X['Survived'] = surviveArray
X.insert(0, 'PassengerId', list(range(1, len(X) + 1)))
X.to_csv('titanic2.csv', index=False)
plt.scatter(data[y_kmeans == 0, 0], data[y_kmeans == 0, 1], s=100, c='red', label='Passenger Cluster 1')
plt.scatter(data[y_kmeans == 1, 0], data[y_kmeans == 1, 1], s=100, c='blue', label='Passenger Cluster 2')
plt.scatter(kmeans.cluster_centers_[:, 0], kmeans.cluster_centers_[:, 1], s=300, c='yellow', label='Centroids')
plt.legend()
plt.show()
