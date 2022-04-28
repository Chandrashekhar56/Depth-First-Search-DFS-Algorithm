graph_for_DFS = {
  '6' : ['4','7'],
  '4' : ['3', '5'],
  '7' : ['9'],
  '3' : [],
  '5' : ['9'],
  '9' : []
}
visited_nodes = set() 
def Depth_first_search_function(visited, graph_for_DFS, new_node):  
    if new_node not in visited_nodes:
        print (new_node)
        visited_nodes.add(new_node)
        for node_neighbour in graph_for_DFS[new_node]:
            Depth_first_search_function(visited_nodes, graph_for_DFS, node_neighbour)

print("Depth-First Search: ")
Depth_first_search_function(visited_nodes, graph_for_DFS, '6')
