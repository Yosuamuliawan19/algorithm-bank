for (i = 1; i <= V-1; i++)
    {
        for (j = 0; j < E; j++)
        {
            int u = graph->edge[j].source;

            int v = graph->edge[j].destination;

            int weight = graph->edge[j].weight;

            if (StoreDistance[u] + weight < StoreDistance[v])
                StoreDistance[v] = StoreDistance[u] + weight;
        }
    }

    for (i = 0; i < E; i++)
      {
          int u = graph->edge[i].source;

          int v = graph->edge[i].destination;

          int weight = graph->edge[i].weight;

          if (StoreDistance[u] + weight < StoreDistance[v])
              printf("This graph contains negative edge cycle\n");
      }

      FinalSolution(StoreDistance, V);

      for (i = 0; i < V; i++)
         StoreDistance[i] = INT_MAX;

     StoreDistance[source] = 0;
