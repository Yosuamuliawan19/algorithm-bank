import numpy as np
import matplotlib.pyplot as plt
import pandas as pd
from sklearn.cluster import KMeans
from sklearn.preprocessing import LabelEncoder
from sklearn.decomposition import PCA

X = pd.read_csv('titanic.csv')
X = X.drop('Name', axis=1)
X = X.drop('Cabin', axis=1)
X = X.drop('Ticket', axis=1)
X.fillna(0, inplace=True)
for i in X.index:
    X.at[i, 'Sex'] = 1 if X.at[i,'Sex'] == 'male' else 0
    if X.at[i, 'Embarked'] == 'S':
        X.at[i, 'Embarked'] = 1
    elif X.at[i, 'Embarked'] == 'C':
        X.at[i, 'Embarked'] = 2
    elif X.at[i, 'Embarked'] == 'Q':
        X.at[i, 'Embarked'] = 3
reduction_pca = PCA(n_components = 2)
newX = X
X = reduction_pca.fit_transform(X.values)
result = []
for i in range(1,16):
    kmeans = KMeans(n_clusters=i)
    kmeans.fit(X)
    result.append(kmeans.inertia_)
plt.plot(range(1,16), result)
plt.show()

kmeans = KMeans(n_clusters=2)
y_kmeans = kmeans.fit_predict(X)

cnt = 0;
survive = []
for i in newX.index:
    if y_kmeans[i] == 1:
        survive.append("Y")
        cnt = cnt + 1
    else:
        survive.append("N")

print(cnt)
newX['Survived'] = survive
newX.to_csv('newTitanic.csv', index = False)
plt.scatter(X[y_kmeans == 0, 0], X[y_kmeans == 0,1],s=100,c='red',label='Passenger Cluster Number 1')
plt.scatter(X[y_kmeans == 1, 0], X[y_kmeans == 1,1],s=100,c='blue',label='Passenger Cluster Number 2')
# plt.scatter(X[y_kmeans == 2, 0], X[y_kmeans == 2,1],s=100,c='green',label='Brand 3')
plt.scatter(kmeans.cluster_centers_[:,0],kmeans.cluster_centers_[:,1],s=300,c='yellow',label='Centroids')
plt.legend()
plt.show()
