function dfs(graph, root_vertex)
    Mark root_vertex as "visited"
    for each vertex v connected to root_vertex by an edge do
        if v is not marked as "visited"
            Mark v as "visited"
            dfs(graph, v)
        end if
    end for
end function

Input
The input contains the specification of a single graph G. The first two lines contain the number of vertices |V| (1⩽|V|⩽200) and the number of edges |E| (0⩽|E|⩽|V|⋅(|V|−1)2). The input is followed by |E| lines, each containing a pair of integers separated by a single space. This pair of integers specifies the vertices connected by that edge. We assume that vertices are numbered from 0 (so, if |V|=4 then V={0,1,2,3}).

Note that the two sample inputs correspond to the two example graphs shown above.

//0 1 3 4

if(std::find(v.begin(), v.end(), x) != v.end())