import numpy as np
import matplotlib.pyplot as plt
import pandas as pd
from sklearn.cluster import KMeans
from sklearn.preprocessing import LabelEncoder
from sklearn.decomposition import PCA

X = pd.read_csv('titanic.csv')

set_to_use = X
set_to_use = set_to_use.drop('Name', axis=1)
set_to_use = set_to_use.drop('Ticket', axis=1)
set_to_use = set_to_use.drop('Fare', axis=1)

set_to_use.fillna(0, inplace=True)
encoder = LabelEncoder()
encoded_sex = encoder.fit_transform(set_to_use.iloc[:, 3])

set_to_use['Sex'] = encoded_sex
features = set_to_use.iloc[:, 1:-1].values

reduction_pca = PCA(n_components=2)
reduced_features = reduction_pca.fit_transform(features)

cluster_distorsion = []
for i in range(1, 16):
    test_sklearn = KMeans(n_clusters=i)
    test_sklearn.fit(reduced_features)
    cluster_distorsion.append(test_sklearn.inertia_)
plt.plot(cluster_distorsion, marker='o', label='Distorsion for some number of clusters')
plt.legend()
plt.show()

kmeans = KMeans(n_clusters=3)
y_kmeans = kmeans.fit_predict(reduced_features)

plt.scatter(reduced_features[y_kmeans == 0, 0], reduced_features[y_kmeans == 0,1],s=100,c='red',label='Brand 1')
plt.scatter(reduced_features[y_kmeans == 1, 0], reduced_features[y_kmeans == 1,1],s=100,c='blue',label='Brand 2')
plt.scatter(reduced_features[y_kmeans == 2, 0], reduced_features[y_kmeans == 2,1],s=100,c='green',label='Brand 3')
plt.scatter(kmeans.cluster_centers_[:,0],kmeans.cluster_centers_[:,1],s=300,c='yellow',label='Centroids')
plt.legend()
plt.show()
