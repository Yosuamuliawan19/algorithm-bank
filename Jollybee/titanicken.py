import numpy as np
import matplotlib.pyplot as plt
import pandas as pd
from sklearn.cluster import KMeans
from sklearn.decomposition import PCA

X = pd.read_csv('titanic.csv')
X = X.drop('Name', axis=1)
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

X.to_csv('titanic2.csv', index=False)

reduction_pca = PCA(n_components=2)
X = reduction_pca.fit_transform(X.values)

result = []
for i in range(1, 16):
    kmeans = KMeans(n_clusters=i)
    kmeans.fit(X)
    result.append(kmeans.inertia_)
plt.plot(range(1, 16), result)
plt.show()

kmeans = KMeans(n_clusters=4)
y_kmeans = kmeans.fit_predict(X)

plt.scatter(X[y_kmeans == 0, 0], X[y_kmeans == 0, 1], s=100, c='red', label='Passenger Cluster 1')
plt.scatter(X[y_kmeans == 1, 0], X[y_kmeans == 1, 1], s=100, c='blue', label='Passenger Cluster 2')
plt.scatter(X[y_kmeans == 2, 0], X[y_kmeans == 2, 1], s=100, c='green', label='Passenger Cluster 3')
plt.scatter(X[y_kmeans == 3, 0], X[y_kmeans == 3, 1], s=100, c='orange', label='Passenger Cluster 4')
plt.scatter(kmeans.cluster_centers_[:, 0], kmeans.cluster_centers_[:, 1], s=300, c='yellow', label='Centroids')
plt.legend()
plt.show()
